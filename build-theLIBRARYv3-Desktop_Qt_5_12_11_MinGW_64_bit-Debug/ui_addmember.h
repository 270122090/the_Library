/********************************************************************************
** Form generated from reading UI file 'addmember.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMEMBER_H
#define UI_ADDMEMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSplitter>

QT_BEGIN_NAMESPACE

class Ui_addMember
{
public:
    QLabel *phoneNumber_label;
    QLabel *email_label;
    QLabel *memberName_label;
    QRadioButton *radioButtonNO_2;
    QRadioButton *radioButtonYES_2;
    QLabel *phone_label;
    QLabel *LibraryTitle_4;
    QSplitter *splitter_2;
    QPushButton *btnSaveMember;
    QPushButton *btnExitAddMember;
    QLineEdit *txtMemberEmail;
    QLineEdit *txtMemberPhone;
    QLineEdit *txtMemberName;
    QLineEdit *txtMemberAddress;
    QLabel *email_label_2;

    void setupUi(QDialog *addMember)
    {
        if (addMember->objectName().isEmpty())
            addMember->setObjectName(QString::fromUtf8("addMember"));
        addMember->resize(936, 655);
        phoneNumber_label = new QLabel(addMember);
        phoneNumber_label->setObjectName(QString::fromUtf8("phoneNumber_label"));
        phoneNumber_label->setGeometry(QRect(210, 270, 111, 16));
        phoneNumber_label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        email_label = new QLabel(addMember);
        email_label->setObjectName(QString::fromUtf8("email_label"));
        email_label->setGeometry(QRect(210, 300, 47, 16));
        email_label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        memberName_label = new QLabel(addMember);
        memberName_label->setObjectName(QString::fromUtf8("memberName_label"));
        memberName_label->setGeometry(QRect(210, 210, 47, 14));
        memberName_label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        radioButtonNO_2 = new QRadioButton(addMember);
        radioButtonNO_2->setObjectName(QString::fromUtf8("radioButtonNO_2"));
        radioButtonNO_2->setGeometry(QRect(410, 270, 51, 19));
        radioButtonNO_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        radioButtonYES_2 = new QRadioButton(addMember);
        radioButtonYES_2->setObjectName(QString::fromUtf8("radioButtonYES_2"));
        radioButtonYES_2->setGeometry(QRect(330, 270, 51, 19));
        radioButtonYES_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        phone_label = new QLabel(addMember);
        phone_label->setObjectName(QString::fromUtf8("phone_label"));
        phone_label->setGeometry(QRect(210, 240, 91, 16));
        phone_label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        LibraryTitle_4 = new QLabel(addMember);
        LibraryTitle_4->setObjectName(QString::fromUtf8("LibraryTitle_4"));
        LibraryTitle_4->setGeometry(QRect(360, 130, 209, 30));
        LibraryTitle_4->setMaximumSize(QSize(16777215, 30));
        LibraryTitle_4->setStyleSheet(QString::fromUtf8("background: rgba(40, 83, 107, 1);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: white;"));
        LibraryTitle_4->setAlignment(Qt::AlignCenter);
        splitter_2 = new QSplitter(addMember);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(450, 390, 150, 23));
        splitter_2->setOrientation(Qt::Horizontal);
        btnSaveMember = new QPushButton(splitter_2);
        btnSaveMember->setObjectName(QString::fromUtf8("btnSaveMember"));
        btnSaveMember->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        splitter_2->addWidget(btnSaveMember);
        btnExitAddMember = new QPushButton(splitter_2);
        btnExitAddMember->setObjectName(QString::fromUtf8("btnExitAddMember"));
        btnExitAddMember->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        splitter_2->addWidget(btnExitAddMember);
        txtMemberEmail = new QLineEdit(addMember);
        txtMemberEmail->setObjectName(QString::fromUtf8("txtMemberEmail"));
        txtMemberEmail->setGeometry(QRect(330, 300, 271, 21));
        txtMemberPhone = new QLineEdit(addMember);
        txtMemberPhone->setObjectName(QString::fromUtf8("txtMemberPhone"));
        txtMemberPhone->setGeometry(QRect(330, 240, 271, 21));
        txtMemberName = new QLineEdit(addMember);
        txtMemberName->setObjectName(QString::fromUtf8("txtMemberName"));
        txtMemberName->setGeometry(QRect(330, 210, 271, 21));
        txtMemberAddress = new QLineEdit(addMember);
        txtMemberAddress->setObjectName(QString::fromUtf8("txtMemberAddress"));
        txtMemberAddress->setGeometry(QRect(330, 330, 271, 21));
        email_label_2 = new QLabel(addMember);
        email_label_2->setObjectName(QString::fromUtf8("email_label_2"));
        email_label_2->setGeometry(QRect(210, 330, 61, 16));
        email_label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        retranslateUi(addMember);

        QMetaObject::connectSlotsByName(addMember);
    } // setupUi

    void retranslateUi(QDialog *addMember)
    {
        addMember->setWindowTitle(QApplication::translate("addMember", "Dialog", nullptr));
        phoneNumber_label->setText(QApplication::translate("addMember", "Phone reminders:", nullptr));
        email_label->setText(QApplication::translate("addMember", "Email:", nullptr));
        memberName_label->setText(QApplication::translate("addMember", "Name:", nullptr));
        radioButtonNO_2->setText(QApplication::translate("addMember", "No", nullptr));
        radioButtonYES_2->setText(QApplication::translate("addMember", "Yes", nullptr));
        phone_label->setText(QApplication::translate("addMember", "Mobile Phone:", nullptr));
        LibraryTitle_4->setText(QApplication::translate("addMember", "ADD NEW MEMBER", nullptr));
        btnSaveMember->setText(QApplication::translate("addMember", "Save", nullptr));
        btnExitAddMember->setText(QApplication::translate("addMember", "Exit", nullptr));
        email_label_2->setText(QApplication::translate("addMember", "Address:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addMember: public Ui_addMember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMEMBER_H
