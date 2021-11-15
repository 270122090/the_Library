#include "updatemember.h"
#include "ui_updatemember.h"

updateMember::updateMember(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::updateMember)
{
    ui->setupUi(this);
}

updateMember::~updateMember()
{
    delete ui;
}
