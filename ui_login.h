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
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *labelAstronaut;
    QToolButton *toolButton;
    QLabel *labelBackground;
    QFrame *frame_2;
    QLabel *label_6;
    QLineEdit *txtUsername;
    QLineEdit *txtPassword;
    QPushButton *btnMlogin;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(1145, 762);
        labelAstronaut = new QLabel(login);
        labelAstronaut->setObjectName(QString::fromUtf8("labelAstronaut"));
        labelAstronaut->setGeometry(QRect(380, 150, 71, 71));
        labelAstronaut->setStyleSheet(QString::fromUtf8(""));
        labelAstronaut->setFrameShape(QFrame::NoFrame);
        labelAstronaut->setPixmap(QPixmap(QString::fromUtf8(":/resources/Decorations/astronaut.png")));
        labelAstronaut->setScaledContents(true);
        toolButton = new QToolButton(login);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(355, 129, 121, 121));
        toolButton->setStyleSheet(QString::fromUtf8("border-radius:60px;\n"
"background-color: rgb(43, 153, 213);"));
        toolButton->setIconSize(QSize(64, 64));
        labelBackground = new QLabel(login);
        labelBackground->setObjectName(QString::fromUtf8("labelBackground"));
        labelBackground->setGeometry(QRect(240, 20, 721, 691));
        labelBackground->setPixmap(QPixmap(QString::fromUtf8(":/resources/Decorations/Tech-Background.png")));
        labelBackground->setScaledContents(true);
        labelBackground->setAlignment(Qt::AlignCenter);
        labelBackground->setWordWrap(false);
        frame_2 = new QFrame(login);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(370, 150, 471, 441));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 44, 44);\n"
"border-radius:19px;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(190, 40, 201, 51));
        label_6->setStyleSheet(QString::fromUtf8("font: 24pt \"Century Gothic\";\n"
"color: rgb(255, 255, 255);"));
        txtUsername = new QLineEdit(frame_2);
        txtUsername->setObjectName(QString::fromUtf8("txtUsername"));
        txtUsername->setGeometry(QRect(60, 130, 341, 41));
        txtUsername->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border:none;\n"
"color: rgb(193, 193, 193);\n"
"font: 15pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius:none;"));
        txtPassword = new QLineEdit(frame_2);
        txtPassword->setObjectName(QString::fromUtf8("txtPassword"));
        txtPassword->setGeometry(QRect(60, 210, 341, 41));
        txtPassword->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border:none;\n"
"color: rgb(193, 193, 193);\n"
"font: 15pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius:none;"));
        txtPassword->setEchoMode(QLineEdit::Password);
        btnMlogin = new QPushButton(frame_2);
        btnMlogin->setObjectName(QString::fromUtf8("btnMlogin"));
        btnMlogin->setGeometry(QRect(80, 320, 311, 61));
        btnMlogin->setStyleSheet(QString::fromUtf8("\n"
"/*-----QPushButton-----*/\n"
"QPushButton\n"
"{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(33, 120, 167, 255), stop:1 rgba(43, 153, 213, 255));\n"
"color: #ffffff;\n"
"font: 12pt \"Century Gothic\";\n"
"min-width: 80px;\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 27px;\n"
"	border-color: rgb(19, 67, 93);\n"
"padding: 5px;}\n"
"\n"
"QPushButton::flat\n"
"{\n"
"background-color: transparent;\n"
"border: none;\n"
"color: #fff;}\n"
"\n"
"QPushButton::disabled\n"
"{\n"
"background-color: rgb(131, 165, 174);\n"
"color: black;\n"
"border-color: black;}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(47, 160, 194, 255), stop:1 rgba(57, 209, 209, 255));\n"
"border: 1px solid rgb(41, 170, 182);}\n"
"\n"
""));
        labelBackground->raise();
        frame_2->raise();
        toolButton->raise();
        labelAstronaut->raise();

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Dialog", nullptr));
        labelAstronaut->setText(QString());
        toolButton->setText(QString());
        labelBackground->setText(QString());
        label_6->setText(QCoreApplication::translate("login", "Login", nullptr));
        txtUsername->setPlaceholderText(QCoreApplication::translate("login", "Username", nullptr));
        txtPassword->setPlaceholderText(QCoreApplication::translate("login", "Password", nullptr));
        btnMlogin->setText(QCoreApplication::translate("login", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
