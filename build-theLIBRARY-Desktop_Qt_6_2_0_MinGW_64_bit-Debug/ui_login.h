/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QFrame *frame;
    QSplitter *splitter;
    QLabel *label;
    QLineEdit *txtUsername;
    QLabel *label_2;
    QLineEdit *txtPassword;
    QPushButton *btnMlogin;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(1305, 633);
        frame = new QFrame(login);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(30, 20, 1261, 611));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 235, 243);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        splitter = new QSplitter(frame);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(380, 150, 401, 271));
        splitter->setStyleSheet(QString::fromUtf8(""));
        splitter->setOrientation(Qt::Vertical);
        label = new QLabel(splitter);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color: black;"));
        splitter->addWidget(label);
        txtUsername = new QLineEdit(splitter);
        txtUsername->setObjectName(QString::fromUtf8("txtUsername"));
        splitter->addWidget(txtUsername);
        label_2 = new QLabel(splitter);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: black;"));
        splitter->addWidget(label_2);
        txtPassword = new QLineEdit(splitter);
        txtPassword->setObjectName(QString::fromUtf8("txtPassword"));
        txtPassword->setEchoMode(QLineEdit::Password);
        splitter->addWidget(txtPassword);
        btnMlogin = new QPushButton(splitter);
        btnMlogin->setObjectName(QString::fromUtf8("btnMlogin"));
        btnMlogin->setStyleSheet(QString::fromUtf8("color: white;\n"
"background: rgba(40, 83, 107, 1);\n"
""));
        splitter->addWidget(btnMlogin);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("login", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("login", "Password", nullptr));
        btnMlogin->setText(QCoreApplication::translate("login", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
