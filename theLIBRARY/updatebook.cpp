
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

    ui->updatecombo->addItem("On Shelf");
    ui->updatecombo->addItem("On Loan");
    ui->updatecombo->addItem("Reserved");
    ui->updatecombo->addItem("Overdue");
    ui->updatecombo->addItem("Lost/Damaged");

    if (updateBook!= nullptr)
    {
        ui->uBookTitle->setText(updateBook->gettitle());
        ui->currentstatus->setText(updateBook->getstatus());


        QPixmap pixmap(updateBook->getimage());

    }

    connect(ui->btnupdatebook, &QPushButton::clicked, this,&updatebook::Bookupdate);

}

updatebook::~updatebook()
{
    delete ui;
}


// this is not pusing the
void updatebook:: Bookupdate()
{

    QString status = ui->currentstatus->text();

    if(status != "")
    {
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
