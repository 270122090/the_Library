#include "mainwindow.h"
#include "ui_addbook.h"
#include "addbook.h"

#include <QMessageBox>
#include <QDir>
#include <QFileDialog>


AddBook::AddBook(AllBooks*& newbook, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddBook)
{
    ui->setupUi(this);
    this->newbook = &newbook;
    this->bookpath = "none.png";

    connect (ui->btnexitaddbook, &QPushButton::clicked,
                this, &AddBook::on_btnsavebook_clicked);
    // Exit adding books
    connect (ui->btnexitaddbook, &QPushButton::clicked,this, &AddBook::on_btnexitaddbook_clicked);


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


 // Exit adding books
void AddBook::on_btnexitaddbook_clicked()
{
        this->close();
}

void AddBook::on_btnsavebook_clicked()
{
    QString bookName = ui->txtaddbook->text();//  new variables
    QString bookAuthor = ui->txtaddauthor->text();
    QString bookStatus= ui->txtaddStatus->text();
    QString bookDewey= ui->txtadddewey->text();
    QString bookID = ui->txtaddid->text();
    int bookQty = ui->spinQty->value();
    //QString bookpath = "none.png";

    if (bookID.trimmed() != "" && bookName.trimmed() != "")
    {
        *newbook = new AllBooks(bookName,bookAuthor,bookStatus,bookDewey,bookID, bookQty, bookpath);
//        this->ui->txtaddbook->clear();//  clearing text for next book to be added
//        this->ui->txtaddauthor->clear();
//        this->ui->txtaddStatus->clear();
//        this->ui->txtadddewey->clear();
//        this->ui->txtaddid->clear();
//        this->ui->addbookimagebox->clear();

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

