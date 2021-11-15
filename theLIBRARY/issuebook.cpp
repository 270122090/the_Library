#include "issuebook.h"
#include "ui_issuebook.h"

#include "allbooks.h"

#include <QFile>
#include <QMessageBox>
#include <QDate>
#include <QLineEdit>
#include <QTextStream>


        //Constructor for books
issuebook::issuebook(AllBooks* issueBook, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::issuebook)
{
    ui->setupUi(this);
    this->issueBook = issueBook;
    if (issueBook!= nullptr)
    {
                // loading the current book data on new Issue screent
        ui->iBookTitle->setText(issueBook->gettitle());
        ui->iStatus->setText(issueBook->getstatus());

                // issue book will update data and show user new book data
        connect(ui->btnissuebook, &QPushButton::clicked, this,&issuebook::Bookissue);

                // exit the update screen
        connect(ui->btnexitissue, &QPushButton::clicked, this,&issuebook::exit);

                //set the due date
        QDate cd = QDate::currentDate();
        ui->txtiDate->setText(cd.toString());
        QDate dd = cd.addDays(21);
        ui->txtiDue->setText(dd.toString());


    }

}

        //Constructor for Members
issuebook::issuebook(AllMembers* issueMember, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::issuebook)
{
    ui->setupUi(this);
    this->issueMember = issueMember;

        connect(ui->btniMember, &QPushButton::clicked, this,&issuebook::search_i_member);
}



void issuebook::search_i_member()
{
    QFile inputFile("members.txt");
    inputFile.open(QIODevice::ReadOnly | QIODevice::Text);

    QTextStream in(&inputFile);


//    QString search = ui->txtSearchMember-> text();
//    do {
//        search = in.readLine();
//        if (!search.contains(searchString)
//        {
//            AllMembers* searchMembers= memberList.at(Name);

//                ui->txtMemberName->setText(searchMembers->getMemberName());
//                ui->txtMemberNumber->setText(searchMembers->getPhoneNumber());
//        }
//     } while (!line.isNull());
}


        //deconstructor
issuebook::~issuebook()
{
    delete ui;
}

    // update book status to On Loan
void issuebook:: Bookissue()
{
       QString issuestatus = "On Loan";
       issueBook->setstatus(issuestatus);
       ui->inewStatus->setText("On Loan");
}


// close isue book
void issuebook::exit()
{
    this->close();
}

