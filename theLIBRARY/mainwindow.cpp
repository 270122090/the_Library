#include <QFile>
#include <QTextStream>
#include <QListWidgetItem>
#include <QListWidget>
#include <QDate>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addbook.h"
#include "updatebook.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

     loadbooks();
     ui->listBooks->setCurrentRow(0);
     displayBookDetails();

    connect(ui->actionLoad, &QAction::triggered,this, &MainWindow::loadbooks);
    connect(ui->listBooks, &QListWidget::itemClicked, this, &MainWindow::displayBookDetails);


    connect(ui->btnAddBook, &QPushButton::clicked,this, &MainWindow::add_a_Book);
    connect(ui->btnSearchBook, &QPushButton::clicked, this, &MainWindow:: search_a_Book);
    connect(ui->btnRemoveBook, &QPushButton::clicked, this, &MainWindow:: remove_a_Book);
    connect(ui->btnUpdateBook, &QPushButton::clicked, this, &MainWindow:: update_a_Book);


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

// Linked to QDialog to add all books and write to file "librarybooks.txt"
void MainWindow::add_a_Book()
{

    AllBooks* newBook = nullptr;
    AddBook addbook1(newBook, this);
    addbook1.setModal(true);
    addbook1.exec();

    if (newBook != nullptr)
    {
        booklist.push_back(newBook);
        ui->listBooks->addItem(newBook->gettitle()+" " + newBook->getauthor());
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
        out << booklist.at(i)->getqty()<<",";
        out << booklist.at(i)->getimage();

    }
        out.flush();
        bookfile.close();
}

//Search books
void MainWindow::search_a_Book()
{

    QString search=ui->txtSearchBook->text();
    if (search != "")
    {
        for(int i = 0; i < ui->listBooks->count(); i++)
        {
            ui->listBooks->item(i)->setHidden(false);// found

        }
    }

    else
    {
        for(int i = 0; i < ui->listBooks->count(); i++)
        {
            QList<QListWidgetItem *> list = ui->listBooks->findItems(search, Qt::MatchContains);
            for(int i = 0; i < list.count(); ++i)
            {
            ui->listBooks->item(i)->setHidden(true); // not found
            }

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
                    ui->lblQuantity->setText(QString:: number(thebook->getqty()));
                    QPixmap pixmap(thebook->getimage());
                    ui->lblImage->setPixmap(pixmap);
                    ui->lblImage->setScaledContents(true);
                }
        }
}




//Remove selected book from widget
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
    ui->lblQuantity->setText("");

    QPixmap pixmap("none.png");
    ui->lblImage->setPixmap(pixmap);
    ui->lblImage->setScaledContents(true);
}


// Once books are added books are dipslayed in listWidget and relevant data is displayed in relevant txt boxes
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
            ui->lblQuantity ->setText(QString::number(currentBook->getqty()));


            QPixmap pixmap(currentBook->getimage());
            ui->lblImage->setPixmap(pixmap);
            ui->lblImage->setScaledContents(true);

}
}


 // Display the books
 // Open books from librarybooks.txt
void MainWindow::loadbooks()
{
    QFile inputFile("librarybooks.txt");
    inputFile.open(QIODevice::ReadOnly | QIODevice::Text);

    QTextStream in(&inputFile);

    while(!in.atEnd())
    {
        QString line = in.readLine();
        QStringList bookinfo = line.split(",");

        //handle list of products ui
        ui->listBooks->addItem(bookinfo.at(0));


        AllBooks* bookproduct = new AllBooks(bookinfo.at(0), bookinfo.at(1),bookinfo.at(2), bookinfo.at(3), bookinfo.at(4), bookinfo.at(5).toInt(), bookinfo.at(6));
        booklist.push_back(bookproduct);
    }
    in.flush();
    inputFile.close();
}

