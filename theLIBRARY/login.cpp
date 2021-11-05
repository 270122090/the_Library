#include "login.h"
#include "ui_login.h"

#include <QMessageBox>

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);

    ui->setupUi(this);
    connect(ui->btnMlogin, &QPushButton::clicked,
            this, &login::userlogin);
}


login::~login()
{
    delete ui;
}
void login::userlogin()
{
    QString username = ui->txtUsername->text();
    QString password = ui->txtPassword->text();

    if (username == "Admin" && password == "Pass")
        {
            this->hide();
            //QMessageBox::information(this, "Login", "Correct Username and Password");
                //-- 5.11.2021 Removed message since approved login message seems not important and adding another click
            this->setResult(QDialog::Accepted);
        }
    else
        {
            QMessageBox::warning(this, "Login", "Username or Password Incorrect - Try Again");
            this->setResult(QDialog::Rejected);
        }

}
