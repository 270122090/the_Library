#include <QFile>
#include <QTextStream>
#include <QListWidgetItem>
#include <QListWidget>
#include <QDate>
#include <QtCore>
#include <QMessageBox>


#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "allmembers.h"

#include "addmember.h"
#include "updatemember.h"

#include "addbook.h"
#include "updatebook.h"




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // *************** M E M B E R S *************

    display_memberlist();
    ui->listMember->setCurrentRow(0);
    ui->listiMember->setCurrentRow(0);
    display_membersdetails();

    connect(ui->btnAddMember, &QPushButton::clicked, this, &MainWindow::add_a_member);
    connect(ui->btnEditMember, &QPushButton::clicked, this, &MainWindow::update_a_member);
    connect(ui->btnSearchMember, &QPushButton::clicked, this, &MainWindow::search_a_member);
    connect(ui->LoadMembersList,&QAction::triggered,this, &MainWindow::display_memberlist);
    connect(ui->listMember, &QListWidget::itemClicked, this, &MainWindow::display_membersdetails);

    // ***************** B O O K S ********************


    display_booklist();
    ui->listBooks->setCurrentRow(0);
    ui->listiBooks->setCurrentRow(0);
    display_bookdetails();

    connect(ui->btnAddBook, &QPushButton::clicked,this, &MainWindow::add_a_Book);
    connect(ui->btnSearchBook, &QPushButton::clicked, this, &MainWindow:: search_a_Book);
    connect(ui->btnRemoveBook, &QPushButton::clicked, this, &MainWindow:: remove_a_Book);
    connect(ui->btnUpdateBook, &QPushButton::clicked, this, &MainWindow:: update_a_Book);
    connect(ui->btnUpdateBook, &QPushButton::clicked, this, &MainWindow:: return_a_Book);
    connect(ui->LoadBookList, &QAction::triggered,this, &MainWindow::display_booklist);
    connect(ui->listBooks, &QListWidget::itemClicked, this, &MainWindow::display_bookdetails);


    // ********** I S U E  B O O K S ********************


    connect(ui->LoadiMemberList,&QAction::triggered,this, &MainWindow::display_memberilist);
    connect(ui->listiMember, &QListWidget::itemClicked, this, &MainWindow::display_membersidetails);


    connect(ui->listiBooks, &QListWidget::itemClicked, this, &MainWindow::display_bookidetails);

    connect(ui->btniSearchBook, &QPushButton::clicked, this, &MainWindow:: search_i_Book);
    connect(ui->btniSearchMember, &QPushButton::clicked, this, &MainWindow::search_i_member);

    connect(ui->btnissuebook_2, &QPushButton::clicked, this, &MainWindow::issue_a_Book);

    //set the due date
        QDate cd = QDate::currentDate();
        ui->txtiDate->setText(cd.toString());
        QDate dd = cd.addDays(21);
        ui->txtiDue->setText(dd.toString());

        // connections to send reminder to overdue books
        display_bookolist();
        ui->listoBooks->setCurrentRow(0);

        connect(ui->LoadoBookList, &QAction::triggered,this, &MainWindow::display_bookolist);
        connect(ui->btnReminder, &QPushButton::clicked, this, &MainWindow::overdue_Book);


}

MainWindow::~MainWindow()
{
    delete ui;
}


// ******************* M E M B E R S *************************


void MainWindow::add_a_member() // * working
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

void MainWindow::update_a_member()// * working
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
                    ui->lblMemberBook2->setText(themember->getBook2());
                    ui->lblMemberBook3->setText(themember->getBook3());

                }
            QFile memberFile("members.txt");
            memberFile.open(QIODevice::WriteOnly|QIODevice::Text);
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
        QFile inputFile("members.txt");
        inputFile.open(QIODevice::ReadOnly | QIODevice::Text);

        QTextStream in(&inputFile);

        //clear current list and vector
        for (AllMembers* temp:memberList)
        {
            delete temp;
        }

        memberList.clear(); //clear data model
        ui->listMember->clear(); // view / ui

        while(!in.atEnd())
        {

            QString line = in.readLine();
            QStringList memberinfo = line.split(",");

            //handle list of products ui
            ui->listMember->addItem("     " +memberinfo.at(0)+"     |     "+memberinfo.at(1));
            ui->listiMember->addItem("     " +memberinfo.at(0)+"     |     "+memberinfo.at(1));

           AllMembers* membersinfo = new AllMembers (memberinfo.at(0), memberinfo.at(1),memberinfo.at(2), memberinfo.at(3), memberinfo.at(4), memberinfo.at(5));
            memberList.push_back(membersinfo);
        }
        in.flush();
        inputFile.close();
}

void MainWindow::display_memberlist()// * working
{

    // open txt file and showing member details when program start up again
    QFile inputFile("members.txt");
    inputFile.open(QIODevice::ReadOnly | QIODevice::Text);

    QTextStream in(&inputFile);

    //clear current list and vector
    for (AllMembers* temp:memberList)
    {
        delete temp;
    }

    memberList.clear(); //clear data model
    ui->listMember->clear(); // view / ui

    while(!in.atEnd())
    {

        QString line = in.readLine();
        QStringList memberinfo = line.split(",");

        //handle list of products ui
        ui->listMember->addItem("     " +memberinfo.at(0)+"     |     "+memberinfo.at(1));
        ui->listiMember->addItem("     " +memberinfo.at(0)+"     |     "+memberinfo.at(1));

       AllMembers* membersinfo = new AllMembers (memberinfo.at(0), memberinfo.at(1),memberinfo.at(2), memberinfo.at(3), memberinfo.at(4), memberinfo.at(5));
        memberList.push_back(membersinfo);
    }
    in.flush();
    inputFile.close();
}

// linking UI labels to vector to display data.

void MainWindow::display_membersdetails()// * working
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

void MainWindow::search_a_member()// * working
{
    QString search=ui->txtSearchMember->text();

        if (search != "")
        {
            QList<QListWidgetItem *> list = ui->listMember->findItems(search, Qt::MatchContains);

         for(int i = 0; i < list.count(); ++i)
            {
                QListWidgetItem * user = list.at(i);
                user->setBackground(Qt::cyan);
            }
        }
        else
        {
            {
                for (int i = 0; i < ui->listMember->count(); i++)
                {
                    QListWidgetItem* user = ui->listMember->item(i);
                    user->setBackground(Qt::transparent);
                 }
            }

        }

}

// ************************ B O O K S **************


void MainWindow::add_a_Book() // * Working
{
    AllBooks* newBook = nullptr;
    addbook addabook(newBook, this);
    addabook.setModal(true);
    addabook.exec();

    if (newBook != nullptr)
    {
        booklist.push_back(newBook);
        ui->listBooks->addItem("     "+newBook->getid()+"     " +newBook->gettitle()+"   " + newBook->getauthor());
    }

    QFile bookfile("books.txt");
    bookfile.open(QIODevice::WriteOnly| QIODevice::Text);
    QTextStream out(&bookfile);
    for(int i=0;i<booklist.size();i++)
    {
        out << booklist.at(i)->gettitle()<<",";
        out << booklist.at(i)->getauthor()<<",";
        out << booklist.at(i)->getdewey()<<",";
        out << booklist.at(i)->getstatus()<<",";
        out << booklist.at(i)->getid()<<",";
        out << booklist.at(i)->getdd()<< ",";
        out << booklist.at(i)->getimage()<< Qt:: endl;

    }
        out.flush();
        bookfile.close();

}

void MainWindow::search_a_Book()// * working
{
    QString search=ui->txtSearchBook->text();

        if (search != "")
            {
                QList<QListWidgetItem *> list = ui->listBooks->findItems(search, Qt::MatchContains);

                 for(int i = 0; i < list.count(); ++i)
                    {
                        QListWidgetItem * user = list.at(i);
                        user->setBackground(Qt::cyan);
                    }

            }
        else
            {
                for (int i = 0; i < ui->listBooks->count(); i++)
                {
                    QListWidgetItem* user = ui->listBooks->item(i);
                    user->setBackground(Qt::transparent);
                 }

            }
}

void MainWindow::update_a_Book()
{
    int index =ui->listBooks->currentRow();
        if (index >=0)
        {
            AllBooks* thebook=booklist.at(index);
            if (thebook !=nullptr)
                {
                    updatebook updateabook(thebook,nullptr);
                    updateabook.exec();

                    //update ui

                    ui->lblBookTitle->setText(thebook->gettitle());
                    ui->lblAuthor->setText(thebook->getauthor());
                    ui->lblDewey->setText(thebook->getdewey());
                    ui->lblStatus->setText(thebook->getstatus());
                    ui->lbl_ID->setText(thebook->getid());
                    ui->lbldd->setText(thebook->getdd());
                    QPixmap pixmap(thebook->getimage());
                    ui->lblImage->setPixmap(pixmap);
                    ui->lblImage->setScaledContents(true);
                }


            QFile bookFile("books.txt");
            bookFile.open(QIODevice::WriteOnly|QIODevice::Append | QIODevice::Text);
            QTextStream out(&bookFile);
            for(int i=0;i<booklist.size();i++)
            {
                out << booklist.at(i)->gettitle()<<",";
                out << booklist.at(i)->getauthor()<<",";
                out << booklist.at(i)->getdewey()<<",";
                out << booklist.at(i)->getstatus()<<",";
                out << booklist.at(i)->getid()<<",";
                out << booklist.at(i)->getdd()<<",";
                out << booklist.at(i)->getimage()<< Qt::endl;


            }
                out.flush();
                bookFile.close();

        }
}

//Remove selected book from widget
void MainWindow::remove_a_Book()// * working
{
    int index = ui->listBooks->currentRow();

    if (index >= 0)
    {
        //remove from vector
        AllBooks* thebook = booklist.at(index);
        delete thebook;
        booklist.removeAt(index);

        //remove from list widget in the UI
        delete ui->listBooks->currentItem();
    }

    ui->lblBookTitle->setText("");
    ui->lblAuthor->setText("");
    ui->lblDewey->setText("");
    ui->lblStatus->setText("");
    ui->lbl_ID->setText("");
    ui->lbldd->setText("");

    QPixmap pixmap("none.png");
    ui->lblImage->setPixmap(pixmap);
    ui->lblImage->setScaledContents(true);

    QFile bookFile("books.txt");
    bookFile.open(QIODevice::WriteOnly|QIODevice::Text);
    QTextStream out(&bookFile);
    for(int i=0;i<booklist.size();i++)
    {
        out << booklist.at(i)->gettitle()<<",";
        out << booklist.at(i)->getauthor()<<",";
        out << booklist.at(i)->getdewey()<<",";
        out << booklist.at(i)->getstatus()<<",";
        out << booklist.at(i)->getid()<<",";
        out << booklist.at(i)->getdd()<<",";
        out << booklist.at(i)->getimage()<< Qt::endl;


    }
        out.flush();
        bookFile.close();


}

// Once books are added books are dipslayed in listWidget and relevant data is displayed in relevant txt boxes
void MainWindow::display_bookdetails()// * working
{
    int index = ui->listBooks->currentRow();
    if (index != -1)

    {
        AllBooks* currentBook = booklist.at(index);


            ui->lblBookTitle->setText(currentBook->gettitle());
            ui->lblAuthor->setText(currentBook->getauthor());
            ui->lblDewey->setText(currentBook->getdewey());
            ui->lblStatus->setText(currentBook->getstatus());
            ui->lbl_ID->setText(currentBook->getid());

            QPixmap pixmap(currentBook->getimage());
            ui->lblImage->setPixmap(pixmap);
            ui->lblImage->setScaledContents(true);

            ui->lbldd->setText(currentBook->getdd());

}
}

void MainWindow::display_booklist()// * working
{
    QFile inputFile("books.txt");
    inputFile.open(QIODevice::ReadOnly | QIODevice::Text);

    QTextStream in(&inputFile);

    while(!in.atEnd())
    {
        QString line = in.readLine();
        QStringList bookinfo = line.split(",");

        //handle list of products ui
        ui->listBooks->addItem("  "+bookinfo.at(0)+" , " +bookinfo.at(0)+" , " + bookinfo.at(1));
        ui->listiBooks->addItem("  "+bookinfo.at(0)+" , " +bookinfo.at(0)+" , " + bookinfo.at(1));

        AllBooks* bookproduct = new AllBooks(bookinfo.at(0), bookinfo.at(1),bookinfo.at(2), bookinfo.at(3), bookinfo.at(4), bookinfo.at(5), bookinfo.at(6));
        booklist.push_back(bookproduct);
    }
    in.flush();
    inputFile.close();
}

void MainWindow::return_a_Book()
{
    int index = ui->listBooks->currentRow();

    if (index >= 0)
    {
        //update vector
        AllBooks* thebook = booklist.at(index);
        if(thebook->getstatus()!="On Laon")
        {
                thebook->setstatus("On Shelf");

                //update UI
                ui->lblBookTitle->setText(thebook->gettitle());
                ui->lblAuthor->setText(thebook->getauthor());
                ui->lblDewey->setText(thebook->getdewey());
                ui->lblStatus->setText(thebook->getstatus());
                ui->lbl_ID->setText(thebook->getid());
                ui->lbldd->setText(thebook->getdd());
                QPixmap pixmap(thebook->getimage());
                ui->lblImage->setPixmap(pixmap);
                ui->lblImage->setScaledContents(true);

                //update .txt
                QFile bookFile("books.txt");
                bookFile.open(QIODevice::WriteOnly|QIODevice::Text);
                QTextStream out(&bookFile);
                for(int i=0;i<booklist.size();i++)
                {
                    out << booklist.at(i)->gettitle()<<",";
                    out << booklist.at(i)->getauthor()<<",";
                    out << booklist.at(i)->getdewey()<<",";
                    out << booklist.at(i)->getstatus()<<",";
                    out << booklist.at(i)->getid()<<",";
                    out << booklist.at(i)->getdd()<<",";
                    out << booklist.at(i)->getimage()<<Qt::endl;


                }
                    out.flush();
                    bookFile.close();
        }
        else
        {
            QMessageBox::warning(this, "Returning Book", "Only books with a Status 'On Loan' can be returned");
        }

    }

}

// **************** ISSUE A BOOK ************


void MainWindow::display_memberilist()
{

    // open txt file and showing member details when program start up again
    QFile inputFile("members.txt");
    inputFile.open(QIODevice::ReadOnly | QIODevice::Text);

    QTextStream in(&inputFile);


    //clear current list and vector
    for (AllMembers* temp:memberList)
    {
        delete temp;
    }
    while(!in.atEnd())
    {

        QString line = in.readLine();
        QStringList memberinfo = line.split(",");

        //handle list of products ui
        ui->listiMember->addItem("     " +memberinfo.at(0)+"     |     "+memberinfo.at(1));


       AllMembers* membersinfo = new AllMembers (memberinfo.at(0), memberinfo.at(1),memberinfo.at(2), memberinfo.at(3), memberinfo.at(4), memberinfo.at(5));
        memberList.push_back(membersinfo);
    }
    in.flush();
    inputFile.close();
}


void MainWindow::display_membersidetails()//working
{
    int index = ui->listiMember->currentRow();
    if (index != -1)

    {
        AllMembers* currentmember = memberList.at(index);

        ui->txtiMemberName->setText(currentmember->getMemberName());
        ui->txtiMemberNumber->setText(currentmember->getPhoneNumber());
     }
}

void MainWindow::search_i_member() // not working!
{
    QString search=ui->txtiSearchMember->text();
    if (search != "")
    {
        QList<QListWidgetItem *> list = ui->listiMember->findItems(search, Qt::MatchContains);

     for(int i = 0; i < list.count(); ++i)
        {
            QListWidgetItem * user = list.at(i);
            user->setBackground(Qt::cyan);
        }
    }
    else
    {
        {
            for (int i = 0; i < ui->listiMember->count(); i++)
            {
                QListWidgetItem* user = ui->listiMember->item(i);
                user->setBackground(Qt::transparent);
             }
        }

    }
}


void MainWindow::display_bookidetails()
{
    int index = ui->listBooks->currentRow();
    if (index != -1)

    {
        AllBooks* currentBook = booklist.at(index);

            ui->iBookTitle->setText(currentBook->gettitle());
            ui->iStatus->setText(currentBook->getstatus());
}
}

void MainWindow::search_i_Book()
{

    QString search=ui->txtiSearchBook->text();
    if (search != "")
    {
        for(int i = 0; i < ui->listiBooks->count(); i++)
        {
            ui->listiBooks->item(i)->setHidden(false);// found

        }
    }

    else
    {
        for(int i = 0; i < ui->listiBooks->count(); i++)
        {
            QList<QListWidgetItem *> list = ui->listiBooks->findItems(search, Qt::MatchContains);
            for(int i = 0; i < list.count(); ++i)
            {
            ui->listiBooks->item(i)->setHidden(true); // not found
            }

        }
    }
}


void MainWindow::issue_a_Book()
{
        //set the due date
            QDate cd = QDate::currentDate();
            ui->txtiDate->setText(cd.toString());
            QDate dd = cd.addDays(21);
            ui->txtiDue->setText(dd.toString());

            // variable for new status if book is issued
            QString issuestatus = "On Loan";

            int index =ui->listiBooks->currentRow();
            AllBooks* issuebook=booklist.at(index);

            if(issuestatus!="On Loan")
                {
                if (issuebook!=nullptr)
                    {
                        issuebook->setdd(issuestatus);
                    }
                else
                    {
                        QMessageBox::warning(this, "Book Issue", "No Book Selected");
                    }

                        ui->inewStatus->setText("On Loan");
                }
            else
                {
                    QMessageBox::warning(this, "Book Issue", "Book not available");
                }

            //update members details

            QString bookissued = ui->iBookTitle->text();

            int memberindex =ui->listiMember->currentRow();
                if (memberindex >=0)
                {
                    AllMembers* themember=memberList.at(memberindex);
                    if (themember !=nullptr)
                        {
                        updatemember updateamember(themember, nullptr);
                        updateamember.exec();

                        themember->setBook1(bookissued);
                            //update ui

                            ui->lblMemberName->setText(themember->getMemberName());
                            ui->lblMemberNumber->setText(themember->getPhoneNumber());
                            ui->lblMemberEmail->setText(themember->getEmail());
                            ui->lblMemberBook1->setText(themember->getBook1());
                            ui->lblMemberBook2->setText(themember->getBook2());
                            ui->lblMemberBook3->setText(themember->getBook3());

                        }

                    //QString memberbook = ui->

                    //if()


                    QFile memberFile("members.txt");
                    memberFile.open(QIODevice::WriteOnly|QIODevice::Text);
                    QTextStream out(&memberFile);
                    for(int i=0;i<memberList.size();i++)
                    {
                        out << memberList.at(i)->getMemberName()<<",";
                        out << memberList.at(i)->getPhoneNumber()<<",";
                        out << memberList.at(i)->getEmail()<<",";
                        out << memberList.at(i)->getBook1()<<",";
                        out << memberList.at(i)->getBook2()<<",";
                        out << memberList.at(i)->getBook3()<<Qt::endl;

                    }
                        out.flush();
                        memberFile.close();
                }

}


void MainWindow::display_bookolist()
{
    QFile inputbooks("books.txt");
    inputbooks.open(QIODevice::ReadOnly | QIODevice::Text);

    QTextStream inb(&inputbooks);


    QFile inputmembers("members.txt");
    inputmembers.open(QIODevice::ReadOnly | QIODevice::Text);

    QTextStream inm(&inputmembers);

    while(!inb.atEnd())
    {
        while(!inm.atEnd())
        {

        QDate cd = QDate::currentDate();
        ui->txtiDate->setText(cd.toString());
        QDate dd = cd.addDays(21);
        ui->txtiDue->setText(dd.toString());

        QString bookline = inb.readLine();
        QStringList bookinfo = bookline.split(",");

        QString memberline = inm.readLine();
        QStringList memberinfo = memberline.split(",");

        QDate od = QDate::currentDate();
        QDate temp = QDate::fromString(bookinfo.at(6));

        if(od>=temp){
             ui->listoBooks->addItem(bookinfo.at(0)+" | "+bookinfo.at(6)+" | "+memberinfo.at(0));
        };


                                            //Title          Author          Dewey#          Status          ID#            Image           Due Date
            AllBooks* bookproduct = new AllBooks(bookinfo.at(0), bookinfo.at(1), bookinfo.at(2), bookinfo.at(3), bookinfo.at(4),bookinfo.at(5), bookinfo.at(6));
            booklist.push_back(bookproduct);

                                                    //Name          phone
        AllMembers* memberproduct = new AllMembers(memberinfo.at(0),memberinfo.at(1), memberinfo.at(2),memberinfo.at(3),memberinfo.at(4),memberinfo.at(5));//check
        memberList.push_back(memberproduct);
    }
    inb.flush();
    inputbooks.close();
    inm.flush();
    inputmembers.close();
}
}


void MainWindow::overdue_Book()
{
    QMessageBox::information(this,"Reminder Issued","Reminders were sent to all members with overdue books");
}
