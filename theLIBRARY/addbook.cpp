#include "mainwindow.h"
#include "ui_addbook.h"
#include "addbook.h"

#include <QMessageBox>
#include <QDir>
#include <QFileDialog>
#include <QTextEdit>
#include <QComboBox>


AddBook::AddBook(AllBooks*& newbook, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddBook)
{
    ui->setupUi(this);
    this->newbook = &newbook;
    this->bookpath = "none.png";

    ui->addstatus->addItem("On Shelf");
    ui->addstatus->addItem("On Loan");
    ui->addstatus->addItem("Reserved");
    ui->addstatus->addItem("Overdue");
    ui->addstatus->addItem("Lost/Damaged");

    connect (ui->btnsavebook, &QPushButton::clicked,this, &AddBook::save_a_book);
    connect(ui->btnloadbookimage, &QPushButton::clicked, this, &AddBook::loadbookimage);

    QDir pathDir("./images"); // declaring where my images is stored but
    if(!pathDir.exists()) //the folder doesn't exist
    {
        QDir().mkdir("./images"); // then create the folder
    }

}


AddBook::~AddBook()
{
    delete ui;
}


        // writing new book to vector
void AddBook::save_a_book()
{
    QString bookName = ui->txtaddbook->text();
    QString bookAuthor = ui->txtaddauthor->text();
    QString bookStatus= ui->addstatus->currentText();
    QString bookDewey= ui->txtadddewey->text();
    QString bookID = ui->txtaddid->text();
    QString dd = "";


    if (bookID.trimmed() != "" && bookName.trimmed() != "")
    {
        *newbook = new AllBooks(bookName,bookAuthor,bookDewey,bookStatus,bookID,bookpath,dd);
        this->close();
    }
    else
    {
        QMessageBox mb;
        mb.setText("You must have a valid id and name of the book");
        mb.exec();
    }

}


void AddBook::loadbookimage()
{
    QString filename;

    filename=QFileDialog :: getOpenFileName(this, "Open Image", "./" ,"ImageFile(*.png *.jpg)"); // autofill in the file search container to only bring up png and jpg files

    if(filename!="") // "" means empty
    {
        int lastSlash = filename.lastIndexOf("/");
        QString shortname =filename.right(filename.size()-lastSlash-1);

        QFile::copy(filename, "./images/"+shortname);
        QPixmap pixmap("./images/"+shortname);

        ui->addbookimagebox->setPixmap(pixmap);
        ui->addbookimagebox->setScaledContents(true);

        bookpath = "./images/" + shortname;
    }
}

