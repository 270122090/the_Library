#include "addmember.h"
#include "ui_addmember.h"

#include <QMessageBox>

addMember::addMember(AllMembers*& newMember, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addMember)
{
    ui->setupUi(this);
    this->newMember = &newMember;

    connect(ui->btnSaveMember, &QPushButton::clicked,
            this, &addMember::on_btnSaveMember_clicked);

}

addMember::~addMember()
{
    delete ui;
}

/*void addMember::confirmAdd()
{
    QString memberName = ui->txtMemberName->text();
    QString memberPhone= ui->txtMemberPhone->text();
    QString memberEmail= ui->txtMemberEmail->text();
}*/

void addMember::on_btnSaveMember_clicked()
{
    QString memberName = ui->txtMemberName->text();
    QString memberPhone = ui->txtMemberPhone->text();
    QString memberEmail = ui->txtMemberEmail->text();


    if (memberPhone.trimmed() != "" && memberName.trimmed() != "")
    {
        *newMember = new AllMembers(memberName, memberPhone, memberEmail);
        this->close();
    }
    else
    {
        QMessageBox mb;
        mb.setText("You must have a valid phone number and name");
        mb.exec();
    }
}


