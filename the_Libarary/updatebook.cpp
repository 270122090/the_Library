#include <QFileDialog>
#include <QMessageBox>
#include <QDate>
#include <QString>
#include <QLineEdit>

#include "updatebook.h"
#include "ui_updatebook.h"

updatebook::updatebook(AllBooks* updatethebook, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::updatebook)
{
  ui->setupUi(this);
  this->updatethebook= updatethebook;

  ui->boxupdateBook_2->addItem("Reserved");
  ui->boxupdateBook_2->addItem("Lost/Damaged");

  if (updatethebook!= nullptr)
  {
      ui->lbluBookTitle->setText(updatethebook->gettitle());
      ui->lbluStatus->setText(updatethebook->getstatus());
  }
  connect(ui->btnupdatebook_2, &QPushButton::clicked, this,&updatebook::update_a_Book);

}

updatebook::~updatebook()
{
  delete ui;
}


// this is not pusing the
void updatebook:: update_a_Book()
{

  QString status = ui->btnupdatebook_2->text();


  updatethebook->setstatus(status);

      this->close();
}


