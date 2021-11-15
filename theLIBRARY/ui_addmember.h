/********************************************************************************
** Form generated from reading UI file 'addmember.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMEMBER_H
#define UI_ADDMEMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_addMember
{
public:
    QFrame *frame;
    QPushButton *btnExitAddMember;
    QLabel *memberName_label;
    QLineEdit *txtMemberName;
    QRadioButton *radioButtonNO_2;
    QLabel *Addresstxt;
    QRadioButton *radioButtonYES_2;
    QLabel *emailtxt;
    QLabel *phoneNumber_label;
    QLabel *phone_label;
    QPushButton *btnSaveMember;
    QLineEdit *txtMemberAddress;
    QLineEdit *txtMemberPhone;
    QLineEdit *txtMemberEmail;
    QLabel *LibraryTitle_4;

    void setupUi(QDialog *addMember)
    {
        if (addMember->objectName().isEmpty())
            addMember->setObjectName(QString::fromUtf8("addMember"));
        addMember->resize(1049, 632);
        frame = new QFrame(addMember);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 10, 1001, 611));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(223, 233, 239);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        btnExitAddMember = new QPushButton(frame);
        btnExitAddMember->setObjectName(QString::fromUtf8("btnExitAddMember"));
        btnExitAddMember->setGeometry(QRect(640, 300, 73, 23));
        btnExitAddMember->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        memberName_label = new QLabel(frame);
        memberName_label->setObjectName(QString::fromUtf8("memberName_label"));
        memberName_label->setGeometry(QRect(313, 120, 47, 14));
        memberName_label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        txtMemberName = new QLineEdit(frame);
        txtMemberName->setObjectName(QString::fromUtf8("txtMemberName"));
        txtMemberName->setGeometry(QRect(433, 120, 271, 21));
        radioButtonNO_2 = new QRadioButton(frame);
        radioButtonNO_2->setObjectName(QString::fromUtf8("radioButtonNO_2"));
        radioButtonNO_2->setGeometry(QRect(513, 180, 51, 19));
        radioButtonNO_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        Addresstxt = new QLabel(frame);
        Addresstxt->setObjectName(QString::fromUtf8("Addresstxt"));
        Addresstxt->setGeometry(QRect(313, 240, 61, 16));
        Addresstxt->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        radioButtonYES_2 = new QRadioButton(frame);
        radioButtonYES_2->setObjectName(QString::fromUtf8("radioButtonYES_2"));
        radioButtonYES_2->setGeometry(QRect(433, 180, 51, 19));
        radioButtonYES_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        emailtxt = new QLabel(frame);
        emailtxt->setObjectName(QString::fromUtf8("emailtxt"));
        emailtxt->setGeometry(QRect(313, 210, 47, 16));
        emailtxt->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        phoneNumber_label = new QLabel(frame);
        phoneNumber_label->setObjectName(QString::fromUtf8("phoneNumber_label"));
        phoneNumber_label->setGeometry(QRect(313, 180, 111, 16));
        phoneNumber_label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        phone_label = new QLabel(frame);
        phone_label->setObjectName(QString::fromUtf8("phone_label"));
        phone_label->setGeometry(QRect(313, 150, 91, 16));
        phone_label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        btnSaveMember = new QPushButton(frame);
        btnSaveMember->setObjectName(QString::fromUtf8("btnSaveMember"));
        btnSaveMember->setGeometry(QRect(563, 300, 73, 23));
        btnSaveMember->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        txtMemberAddress = new QLineEdit(frame);
        txtMemberAddress->setObjectName(QString::fromUtf8("txtMemberAddress"));
        txtMemberAddress->setGeometry(QRect(433, 240, 271, 21));
        txtMemberPhone = new QLineEdit(frame);
        txtMemberPhone->setObjectName(QString::fromUtf8("txtMemberPhone"));
        txtMemberPhone->setGeometry(QRect(433, 150, 271, 21));
        txtMemberEmail = new QLineEdit(frame);
        txtMemberEmail->setObjectName(QString::fromUtf8("txtMemberEmail"));
        txtMemberEmail->setGeometry(QRect(433, 210, 271, 21));
        LibraryTitle_4 = new QLabel(frame);
        LibraryTitle_4->setObjectName(QString::fromUtf8("LibraryTitle_4"));
        LibraryTitle_4->setGeometry(QRect(463, 40, 209, 30));
        LibraryTitle_4->setMaximumSize(QSize(16777215, 30));
        LibraryTitle_4->setStyleSheet(QString::fromUtf8("background: rgba(40, 83, 107, 1);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: white;"));
        LibraryTitle_4->setAlignment(Qt::AlignCenter);

        retranslateUi(addMember);

        QMetaObject::connectSlotsByName(addMember);
    } // setupUi

    void retranslateUi(QDialog *addMember)
    {
        addMember->setWindowTitle(QCoreApplication::translate("addMember", "Dialog", nullptr));
        btnExitAddMember->setText(QCoreApplication::translate("addMember", "Exit", nullptr));
        memberName_label->setText(QCoreApplication::translate("addMember", "Name:", nullptr));
        radioButtonNO_2->setText(QCoreApplication::translate("addMember", "No", nullptr));
        Addresstxt->setText(QCoreApplication::translate("addMember", "Address:", nullptr));
        radioButtonYES_2->setText(QCoreApplication::translate("addMember", "Yes", nullptr));
        emailtxt->setText(QCoreApplication::translate("addMember", "Email:", nullptr));
        phoneNumber_label->setText(QCoreApplication::translate("addMember", "Phone reminders:", nullptr));
        phone_label->setText(QCoreApplication::translate("addMember", "Mobile Phone:", nullptr));
        btnSaveMember->setText(QCoreApplication::translate("addMember", "Save", nullptr));
        LibraryTitle_4->setText(QCoreApplication::translate("addMember", "ADD NEW MEMBER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addMember: public Ui_addMember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMEMBER_H
