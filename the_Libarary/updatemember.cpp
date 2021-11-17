#include "updatemember.h"
#include "ui_updatemember.h"
#include "allmembers.h"


updatemember::updatemember(AllMembers* updatethemember, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::updatemember)
{
    ui->setupUi(this);
    this->updatethemember=updatethemember;
    if (updatethemember!= nullptr)
    {
        ui->lbluMemberName->setText(updatethemember->getMemberName());
        ui->lbluMemberNumber->setText(updatethemember->getPhoneNumber());
        ui->lbluMemberEmail->setText(updatethemember->getEmail());
    }

    connect(ui->btnsaveupdatemember, &QPushButton::clicked, this, &updatemember::update_a_member);
}

updatemember::~updatemember()
{
    delete ui;
}

void updatemember::update_a_member()
{

    QString newname = ui->lbluMemberName->text();
    QString newnumber = ui->lbluMemberNumber->text();
    QString newemail = ui->lbluMemberEmail->text();

    updatethemember->setMemberName(newname);
    updatethemember->setPhoneNumber(newnumber);
    updatethemember->setEmail(newemail);



    this->close();
}

