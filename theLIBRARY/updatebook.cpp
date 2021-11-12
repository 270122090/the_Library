
#include "updatebook.h"
#include "ui_updatebook.h"

#include <QFileDialog>
#include <QMessageBox>



updatebook::updatebook(AllBooks* updateBook, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::updatebook)
{
    ui->setupUi(this);
    this->updateBook= updateBook;


    if (updateBook!= nullptr)
    {
        ui->uBookTitle->setText(updateBook->gettitle());

        ui->uStatus->setText(updateBook->getstatus());

        ui->uQty->setValue(updateBook->getqty());
        QPixmap pixmap(updateBook->getimage());

    }

    connect(ui->btnupdatebook, &QPushButton::clicked, this,&updatebook::Bookupdate);

}

updatebook::~updatebook()
{
    delete ui;
}



void updatebook:: Bookupdate()
{
    int quantity = ui->uQty->value();
    QString status = ui->uStatus->text();

    if(status != "" && quantity>=1)
    {
        updateBook->setqty(quantity);
        updateBook->setstatus(status);
        this->close();
    }
    else
    {
        QMessageBox umb;
        umb.setText("Please update reason for adjusting book adjustment and the new total of books");
        umb.exec();

    }
}
