#include "addbook.h"
#include "ui_addbook.h"

#include <QMessageBox>
#include <QDir>
#include <QFileDialog>
#include <QTextEdit>
#include <QComboBox>

addbook::addbook(AllBooks*& newbook, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addbook)
{
    ui->setupUi(this);
    this->newbook = &newbook;
    this->bookpath = "none.png";

    ui->addBookstatus->addItem("On Shelf");
    ui->addBookstatus->addItem("On Loan");
    ui->addBookstatus->addItem("Reserved");
    ui->addBookstatus->addItem("Overdue");
    ui->addBookstatus->addItem("Lost/Damaged");

    connect (ui->btnsavebook, &QPushButton::clicked,this, &addbook::save_a_book);
    connect(ui->btnloadbookimage, &QPushButton::clicked, this, &addbook::loadbookimage);

    QDir pathDir("./images"); // declaring where my images is stored but
    if(!pathDir.exists()) //the folder doesn't exist
    {
        QDir().mkdir("./images"); // then create the folder
    }

}

addbook::~addbook()
{
    delete ui;
}

void addbook::save_a_book()
{

    QString bookName = ui->txtaddbook->text();
    QString bookAuthor = ui->txtaddauthor->text();
    QString bookDewey= ui->txtadddewey->text();
    QString bookStatus= ui->addBookstatus->currentText();
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

void addbook::loadbookimage()
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

