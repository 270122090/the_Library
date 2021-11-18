#include <QMessageBox>
#include <QVector>
#include <QFile>

#include "addmember.h"
#include "ui_addmember.h"
#include "mainwindow.h"

addmember::addmember(AllMembers*& newmembers, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addmember)
{
    ui->setupUi(this);
    this->newmembers =&newmembers;

    connect(ui->btnSaveMember,&QPushButton::clicked,this, &addmember::save_a_member);

}

addmember::~addmember()
{
    delete ui;
}



void addmember::save_a_member()//working
{
    QString memberName = ui->txtMemberName->text();
    QString memberPhone = ui->txtMemberPhone->text();
    QString memberEmail = ui->txtMemberEmail->text();
    QString book1="";
    QString book2="";
    QString book3="";


    if (memberPhone.trimmed() != "" && memberName.trimmed() != "")
    {

        *newmembers = new AllMembers(memberName, memberPhone, memberEmail,book1,book2,book3);
        this->close();
    }
    else
    {
        QMessageBox mb;
        mb.setText("You must have a valid name and phone number");
        mb.exec();
    }
}
