#include "issuebook.h"
#include "ui_issuebook.h"

issuebook::issuebook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::issuebook)
{
    ui->setupUi(this);
}

issuebook::~issuebook()
{
    delete ui;
}
