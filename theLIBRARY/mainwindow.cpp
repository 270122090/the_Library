#include <QFile>
#include <QTextStream>
#include <QListWidgetItem>


#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addbook.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   //loadbooks();
    //ui->listBooks->setCurrentRow(0);
    //displayBookDetails();


    connect(ui->btnAddBook, &QPushButton::clicked,
            this, &MainWindow::add_a_book);

    connect(ui->listBooks, &QListWidget::itemClicked,
            this, &MainWindow::displayBookDetails);

}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::add_a_book()
{

    AllBooks* newBook = nullptr;
    AddBook addbook1(newBook, this);
    addbook1.setModal(true);
    addbook1.exec();

    if (newBook != nullptr)
    {
        booklist.push_back(newBook);
        ui->listBooks->addItem(newBook->gettitle()+"      " + newBook->getauthor());
    }

    QFile bookfile("librarybooks.txt"); // ensuring this gets filed in my folder for easy sharing
    bookfile.open(QIODevice::WriteOnly| QIODevice::Text);
    QTextStream out(&bookfile);
    for(int i=0;i<booklist.size();i++)
    {
        out << booklist.at(i)->gettitle()<<",";
        out << booklist.at(i)->getauthor()<<",";
        out << booklist.at(i)->getstatus()<<",";
        out << booklist.at(i)->getdewey()<<",";
        out << booklist.at(i)->getid()<<",";
        out << booklist.at(i)->getimage();

    }
        out.flush();
        bookfile.close();
}

void MainWindow::displayBookDetails(QListWidgetItem *books)
{

    int index = books->listWidget()->currentRow();


    if (index != -1)

    {
        AllBooks* currentBook = booklist.at(index);

        if (currentBook != nullptr)

        {
            ui->lblBookTitle->setText(currentBook->gettitle());
            ui->lblAuthor->setText(currentBook->getauthor());
            ui->lblDewey->setText(currentBook->getdewey());
            ui->lblStatus->setText(currentBook->getstatus());
            ui->lbl_ID->setText(currentBook->getid());
            ui->lblQuantity ->setText(QString::number(currentBook->getqty()));


            QPixmap pixmap(currentBook->getimage());
            ui->lblImage->setPixmap(pixmap);
            ui->lblImage->setScaledContents(true);
        }
}
}


//loadbooks
