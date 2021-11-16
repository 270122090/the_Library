#include <QFile>
#include <QTextStream>
#include <QListWidgetItem>
#include <QListWidget>
#include <QDate>
#include <QtCore>
#include <QMessageBox>


#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addbook.h"
#include "updatebook.h"


#include "addmember.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

     loadbooks();
     ui->listBooks->setCurrentRow(0);
     displayBookDetails();

     load_i_book();
     ui->listiBooks->setCurrentRow(0);
     display_i_BookDetails();

     load_o_Book();
     ui->listoBooks->setCurrentRow(0);


    // Issue books
    connect(ui->autoLoadiBooks, &QAction::triggered,this, &MainWindow::load_i_book);
    connect(ui->listiBooks, &QListWidget::itemClicked, this, &MainWindow::display_i_BookDetails);
    connect(ui->btniSearchBook, &QPushButton::clicked, this, &MainWindow:: search_i_Book);

    connect(ui->autoLoadLoans, &QAction::triggered,this, &MainWindow::load_o_Book);


    connect(ui->btnAddBook, &QPushButton::clicked,this, &MainWindow::add_a_Book);
    connect(ui->btnSearchBook, &QPushButton::clicked, this, &MainWindow:: search_a_Book);
    connect(ui->btnRemoveBook, &QPushButton::clicked, this, &MainWindow:: remove_a_Book);
    connect(ui->btnUpdateBook, &QPushButton::clicked, this, &MainWindow:: update_a_Book);
    connect(ui->autoactionLoad, &QAction::triggered,this, &MainWindow::loadbooks);
    connect(ui->listBooks, &QListWidget::itemClicked, this, &MainWindow::displayBookDetails);

    connect(ui->btnReminder, &QPushButton::clicked, this, &MainWindow::overduereminder);

    // Issue a book
    // issue book will update data and show user new book data

    connect(ui->btnissuebook, &QPushButton::clicked, this, &MainWindow::issue_a_Book);
    connect(ui->btnissuedone, &QPushButton::clicked, this, &MainWindow::clear_a_Book);

    //set the due date
        QDate cd = QDate::currentDate();
        ui->txtiDate->setText(cd.toString());
        QDate dd = cd.addDays(21);
        ui->txtiDue->setText(dd.toString());



    // Members data

//    loadmembers();
//    ui->listMember->setCurrentRow(0);


//    load_i_members();
//    ui->listiMember->setCurrentRow(0);
//    display_i_MemberDetails();

//    connect(ui->btniSearchMember, &QPushButton::clicked,this, &MainWindow::search_i_member);
//    connect(ui->autoLoadiMembers, &QAction::triggered,this, &MainWindow::load_i_members);
//    connect(ui->listiMember, &QListWidget::itemClicked, this, &MainWindow::display_i_MemberDetails);

//    connect(ui->autoLoadiMembers, &QAction::triggered,this, &MainWindow::loadmembers);
//    connect(ui->btnAddMember, &QPushButton::clicked,this, &MainWindow::add_a_member);
//    connect(ui->btnSearchMember, &QPushButton::clicked,this, &MainWindow::search_a_member);


}


MainWindow::~MainWindow()
{
    delete ui;

//    ui->listBooks->clear();

//        for (int i=0; i< booklist.size();i++)
//        {
//            delete booklist.at(i);
//        }

//    booklist.clear();

}


// ***************************************** B O O K S ********************************************* \\


// ------------ ISSUING BOOKS --------------------\\



void MainWindow:: issue_a_Book()
{
    //set the due date
        QDate cd = QDate::currentDate();
        ui->txtiDate->setText(cd.toString());
        QDate dd = cd.addDays(21);
        ui->txtiDue->setText(dd.toString());

        QString issuestatus = "On Loan";
        QString currentstatus = ui->iStatus->text();

        int index =ui->listiBooks->currentRow();
        AllBooks* issuebook=booklist.at(index);
       //AllMembers* issuemember=memberList.at(index);

        if(currentstatus!="On Loan")
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

//        QString memberbook = ui->iBookTitle->text();

//        QString box1=ui>txtibook1->text();
//        QString box2=ui>txtibook2->text();
//        QString box3=ui>txtibook3->text();

//        if(box1=="")
//        {
//            issuemember->setBook1(memberbook);
//        }
//        else if(box2=="")
//        {
//            issuemember->setBook2(memberbook);
//        }
//        else if(box3=="")
//        {
//            issuemember->setBook3(memberbook);
//        }
}

// connected to button to clear text for next book to be  issued
void MainWindow::clear_a_Book()
{
    ui->txtiSearchBook->clear();
    ui->txtiSearchMember->clear();
    ui->inewStatus->clear();
}


// ------------ UPDATING BOOKS --------------------\\

// Linked to QDialog to add all books and write to file "librarybooks.txt"
void MainWindow::add_a_Book()
{

    // writing to .txt file
    AllBooks* newBook = nullptr;
    AddBook addbook1(newBook, this);
    addbook1.setModal(true);
    addbook1.exec();

    if (newBook != nullptr)
    {
        booklist.push_back(newBook);
        ui->listBooks->addItem(newBook->gettitle()+"   " + newBook->getauthor());
    }

    QFile bookfile("librarybooks.txt");
    bookfile.open(QIODevice::WriteOnly| QIODevice::Text);
    QTextStream out(&bookfile);
    for(int i=0;i<booklist.size();i++)
    {
        out << booklist.at(i)->gettitle()<<",";
        out << booklist.at(i)->getauthor()<<",";
        out << booklist.at(i)->getdewey()<<",";
        out << booklist.at(i)->getstatus()<<",";
        out << booklist.at(i)->getid()<<",";
        out << booklist.at(i)->getimage()<<",",
        out << booklist.at(i)->getdd()<< Qt::endl;

    }
        out.flush();
        bookfile.close();
}

void MainWindow::search_a_Book()
{
    QString search=ui->txtSearchBook->text();

        if (search != "")
        {
            for (int i = 0; i < ui->listBooks->count(); i++)
            {
                QListWidgetItem* user = ui->listBooks->item(i);
                user->setBackground(Qt::transparent);


             }

                QList<QListWidgetItem *> list = ui->listBooks->findItems(search, Qt::MatchContains);

                for(int i = 0; i < list.count(); ++i)
                {
                    QListWidgetItem * user = list.at(i);
                    user->setBackground(Qt::cyan);

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
                //AllBooks* update = nullptr;
                updatebook up(thebook, nullptr);
                //up.setModal(true);
                up.exec();

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
        }
}

void MainWindow::remove_a_Book()
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
}

void MainWindow::loadbooks()
{
    QFile inputFile("librarybooks.txt");
    inputFile.open(QIODevice::ReadOnly | QIODevice::Text);

    QTextStream in(&inputFile);



    while(!in.atEnd())
    {
        QString line = in.readLine();
        QStringList bookinfo = line.split(",");

        ui->listBooks->addItem(bookinfo.at(4)+"  |  "+bookinfo.at(0)+"  |  "+bookinfo.at(1));


                                            //Title          Author          Dewey#          Status          ID#            Image           Due Date
        AllBooks* bookproduct = new AllBooks(bookinfo.at(0), bookinfo.at(1), bookinfo.at(2), bookinfo.at(3), bookinfo.at(4),bookinfo.at(5), bookinfo.at(6));
        booklist.push_back(bookproduct);
    }
    in.flush();
    inputFile.close();
}

void MainWindow::displayBookDetails()
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
            ui->lbldd->setText(currentBook->getdd());
            QPixmap pixmap(currentBook->getimage());
            ui->lblImage->setPixmap(pixmap);
            ui->lblImage->setScaledContents(true);

    }
}



// ------- LOADING LISTS ON MAIN WIDGET ------------ \\
// ------- books ---------

void MainWindow::load_i_book()
{
    QFile inputFile("librarybooks.txt");
    inputFile.open(QIODevice::ReadOnly | QIODevice::Text);

    QTextStream in(&inputFile);

    while(!in.atEnd())
    {
        QString line = in.readLine();
        QStringList bookinfo = line.split(",");

        ui->listiBooks->addItem(bookinfo.at(0)+" | "+bookinfo.at(3)+" | "+bookinfo.at(6));


                                            //Title          Author          Dewey#          Status          ID#            Image           Due Date
        AllBooks* bookproduct = new AllBooks(bookinfo.at(0), bookinfo.at(1), bookinfo.at(2), bookinfo.at(3), bookinfo.at(4),bookinfo.at(5), bookinfo.at(6));
        booklist.push_back(bookproduct);
    }
    in.flush();
    inputFile.close();
}


void MainWindow::display_i_BookDetails()
{
    int index = ui->listiBooks->currentRow();
    if (index != -1)
    {

        AllBooks* issueiBook = booklist.at(index);

            ui->iBookTitle->setText(issueiBook->gettitle());
            ui->iStatus->setText(issueiBook->getstatus());
    }
}

void MainWindow::search_i_Book()
{
    QString search=ui->txtiSearchBook->text();

        if (search != "")
        {
            for (int i = 0; i < ui->listiBooks->count(); i++)
            {
                QListWidgetItem* user = ui->listiBooks->item(i);
                user->setBackground(Qt::transparent);


             }

                QList<QListWidgetItem *> list = ui->listiBooks->findItems(search, Qt::MatchContains);

                for(int i = 0; i < list.count(); ++i)
                {
                    QListWidgetItem * user = list.at(i);
                    user->setBackground(Qt::cyan);

                }

        }
}



// ------- LOADING LIST ON REPORT WINDOW ------------ \\

void MainWindow::load_o_Book()
{

    QFile inputFile("librarybooks.txt");
    inputFile.open(QIODevice::ReadOnly | QIODevice::Text);

    QTextStream in(&inputFile);


    while(!in.atEnd())
    {

        QDate cd = QDate::currentDate();
        ui->txtiDate->setText(cd.toString());
        QDate dd = cd.addDays(21);
        ui->txtiDue->setText(dd.toString());

        QString line = in.readLine();
        QStringList bookinfo = line.split(",");


        QDate od = QDate::currentDate();
        QDate temp = QDate::fromString(bookinfo.at(6));
        if(od>=temp){
             ui->listoBooks->addItem(bookinfo.at(0)+" | "+bookinfo.at(6));//+" | "+memberinfo.at(0));
        };


                                            //Title          Author          Dewey#          Status          ID#            Image           Due Date
            AllBooks* bookproduct = new AllBooks(bookinfo.at(0), bookinfo.at(1), bookinfo.at(2), bookinfo.at(3), bookinfo.at(4),bookinfo.at(5), bookinfo.at(6));
            booklist.push_back(bookproduct);


            //    QFile inputmember("members.txt");
            //    inputmember.open(QIODevice::ReadOnly | QIODevice::Text);
            //      QTextStream inm(&inputmember);


            //        QString linem = inm.readLine();
            //        QStringList memberinfo = line.split(",");

                                                    //Name          phone
        //AllMembers* memberproduct = new AllMembers(memberinfo.at(0),memberinfo.at(1), memberinfo.at(2),memberinfo.at(3),memberinfo.at(4),memberinfo.at(5));//check
        //memberList.push_back(memberproduct);
    }
    in.flush();
    inputFile.close();
//    inm.flush();
//    inputmember.close();
}





// ***************************************** M E M B E R S ********************************************* \\


// Member details + list in home page

//void MainWindow::add_a_member()
//{
//    AllMembers* newMember = nullptr;
//    addMember addMember1(newMember, this);
//    addMember1.setModal(true);
//    addMember1.exec();

//    if (newMember != nullptr)
//    {
//        memberList.push_back(newMember);
//        ui->listMember->addItem("     " + newMember->getMemberName()+"                                          " + newMember->getPhoneNumber()); // space left delibrately
//    }

//    QFile memberFile("members.txt");
//    memberFile.open(QIODevice::WriteOnly| QIODevice::Text);
//    QTextStream out(&memberFile);
//    for(int i=0;i<memberList.size();i++)
//    {
//        out << memberList.at(i)->getMemberName()<<",";
//        out << memberList.at(i)->getPhoneNumber()<<",";
//        out << memberList.at(i)->getEmail()<<",";
//        out << memberList.at(i)->getBook1()<<",";
//        out << memberList.at(i)->getBook2()<<",";
//        out << memberList.at(i)->getBook3()<< Qt::endl;

//    }
//        out.flush();
//        memberFile.close();
//}

//// Search Member
//void MainWindow::search_a_member()
//{
//    QString search=ui->txtSearchMember->text();

//        if (search != "")
//        {
//            for (int i = 0; i < ui->listMember->count(); i++)
//            {
//                QListWidgetItem* user = ui->listMember->item(i);
//                user->setBackground(Qt::transparent);


//             }

//                QList<QListWidgetItem *> list = ui->listMember->findItems(search, Qt::MatchContains);

//                for(int i = 0; i < list.count(); ++i)
//                {
//                    QListWidgetItem * user = list.at(i);
//                    user->setBackground(Qt::cyan);

//                }

//        }
//}

//void MainWindow::loadmembers()
//{
//    QFile inputFile("members.txt");
//    inputFile.open(QIODevice::ReadOnly | QIODevice::Text);

//    QTextStream in(&inputFile);

//    while(!in.atEnd())
//    {

//        QString line = in.readLine();
//        QStringList memberinfo = line.split(",");

//        //handle list of products ui
//        ui->listiMember->addItem(memberinfo.at(0));


//        AllMembers* membersinfo = new AllMembers (memberinfo.at(0), memberinfo.at(1),memberinfo.at(2), memberinfo.at(3), memberinfo.at(4), memberinfo.at(5));//check
//        memberList.push_back(membersinfo);
//    }
//    in.flush();
//    inputFile.close();
//}



//// ------- members ---------\\


//void MainWindow::search_i_member()
//{
//    QString search=ui->txtiSearchMember->text();

//        if (search != "")
//        {
//            for (int i = 0; i < ui->listiMember->count(); i++)
//            {
//                QListWidgetItem* user = ui->listiMember->item(i);
//                user->setBackground(Qt::transparent);


//             }

//                QList<QListWidgetItem *> list = ui->listiMember->findItems(search, Qt::MatchContains);

//                for(int i = 0; i < list.count(); ++i)
//                {
//                    QListWidgetItem * user = list.at(i);
//                    user->setBackground(Qt::cyan);

//                }

//        }
//}


//void MainWindow::load_i_members()
//{
//    QFile inputFile("members.txt");
//    inputFile.open(QIODevice::ReadOnly | QIODevice::Text);

//    QTextStream in(&inputFile);

//    while(!in.atEnd())
//    {

//        QString line = in.readLine();
//        QStringList memberinfo = line.split(",");

//        //handle list of products ui
//        ui->listiMember->addItem(memberinfo.at(0));


//        AllMembers* membersinfo = new AllMembers (memberinfo.at(0), memberinfo.at(1),memberinfo.at(2), memberinfo.at(3), memberinfo.at(4), memberinfo.at(5));//check
//        memberList.push_back(membersinfo);
//    }
//    in.flush();
//    inputFile.close();
//}


//void MainWindow::display_i_MemberDetails()
//{
//        int index = ui->listiMember->currentRow();
//        if (index != -1)
//        {

//            AllMembers* issueiMember = memberList.at(index);

//                ui->txtiMemberName->setText(issueiMember->getMemberName());
//                ui->txtiMemberNumber->setText(issueiMember->getPhoneNumber());
//    }
//}



// ***************************************** R E P O R T S ********************************************* \\


void MainWindow::overduereminder()
{
    QMessageBox::warning(this,"Reminder","Reminder Sent to Members with overdue books");
}



