#include <QFile>
#include <QTextStream>
#include <QListWidgetItem>
#include <QListWidget>
#include <QDate>
#include <QtCore>
#include <QMessageBox>


#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "addmember.h"
#include "updatemember.h"

//#include "addbook.h"
//#include "updatebook.h"




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // ***************************************** M E M B E R S ********************************************* \\

    display_memberlist();
    ui->listMember->setCurrentRow(0);
    display_membersdetails();


    connect(ui->btnAddMember, &QPushButton::clicked, this, &MainWindow::add_a_member);
    connect(ui->btnEditMember, &QPushButton::clicked, this, &MainWindow::update_a_member);
    connect(ui->btnSearchBook, &QPushButton::clicked, this, &MainWindow::search_a_member);
    connect(ui->LoadMembersList,&QAction::triggered,this, &MainWindow::display_memberlist);
    connect(ui->listMember, &QListWidget::itemClicked, this, &MainWindow::display_membersdetails);

    // ***************************************** B O O K S ********************************************* \\




    // ***************************************** I S U E  B O O K S ********************************************* \\


}

MainWindow::~MainWindow()
{
    delete ui;
}


// ***************************************** M E M B E R S ********************************************* \\


void MainWindow::add_a_member()
{
        AllMembers* NewMember=nullptr;
        addmember addmember(NewMember, nullptr);
        addmember.setModal(true);
        addmember.exec();

        // getting data from Vector and displaying in members screen
        if (NewMember != nullptr)
        {
            memberList.push_back(NewMember);
            ui->listMember->addItem("     " + NewMember->getMemberName()+"     |     " + NewMember->getPhoneNumber()); // space left delibrately
        }

        // writing data to file
        QFile memberFile("members.txt");
        memberFile.open(QIODevice::WriteOnly| QIODevice::Text);
        QTextStream out(&memberFile);
        for(int i=0;i<memberList.size();i++)
        {
            out << memberList.at(i)->getMemberName()<<",";
            out << memberList.at(i)->getPhoneNumber()<<",";
            out << memberList.at(i)->getEmail()<<",";
            out << memberList.at(i)->getBook1()<<",";
            out << memberList.at(i)->getBook2()<<",";
            out << memberList.at(i)->getBook3()<< Qt::endl;

        }
            out.flush();
            memberFile.close();

}


void MainWindow::update_a_member()
{
    int index =ui->listMember->currentRow();
        if (index >=0)
        {
            AllMembers* themember=memberList.at(index);
            if (themember !=nullptr)
                {
                updatemember updateamember(themember, nullptr);
                updateamember.exec();

                    //update ui

                    ui->lblMemberName->setText(themember->getMemberName());
                    ui->lblMemberNumber->setText(themember->getPhoneNumber());
                    ui->lblMemberEmail->setText(themember->getEmail());
                    ui->lblMemberBook1->setText(themember->getBook1());
                    ui->lblMemberBook2->setText(themember->getBook1());
                    ui->lblMemberBook3->setText(themember->getBook1());

                }




        }
}

void MainWindow::display_memberlist()
{

    // open txt file and showing member details when program start up again
    QFile inputFile("members.txt");
    inputFile.open(QIODevice::ReadOnly | QIODevice::Text);

    QTextStream in(&inputFile);

    while(!in.atEnd())
    {

        QString line = in.readLine();
        QStringList memberinfo = line.split(",");

        //handle list of products ui
        ui->listMember->addItem("     " +memberinfo.at(0)+"     |     "+memberinfo.at(1));


       AllMembers* membersinfo = new AllMembers (memberinfo.at(0), memberinfo.at(1),memberinfo.at(2), memberinfo.at(3), memberinfo.at(4), memberinfo.at(5));
        memberList.push_back(membersinfo);
    }
    in.flush();
    inputFile.close();
}

// linking UI labels to vector to display data.
void MainWindow::display_membersdetails()
{
    int index = ui->listMember->currentRow();
    if (index != -1)

    {
        AllMembers* currentmember = memberList.at(index);

            ui->lblMemberName->setText(currentmember->getMemberName());
            ui->lblMemberNumber->setText(currentmember->getPhoneNumber());
            ui->lblMemberEmail->setText(currentmember->getEmail());
            ui->lblMemberBook1->setText(currentmember->getBook1());
            ui->lblMemberBook2->setText(currentmember->getBook2());
            ui->lblMemberBook3->setText(currentmember->getBook3());

        }
}

void MainWindow::search_a_member()
{
    QString search=ui->txtSearchMember->text();

        if (search != "")
        {
            for (int i = 0; i < ui->listMember->count(); i++)
            {
                QListWidgetItem* user = ui->listMember->item(i);
                user->setBackground(Qt::transparent);
             }

                QList<QListWidgetItem *> list = ui->listMember->findItems(search, Qt::MatchContains);

             for(int i = 0; i < list.count(); ++i)
                {
                    QListWidgetItem * user = list.at(i);
                    user->setBackground(Qt::cyan);
                }
        }
}

