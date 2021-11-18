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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addmember
{
public:
    QPushButton *btnSaveMember;
    QFrame *addBookTabFrame;
    QLabel *addBookTtle;
    QFrame *AddMemberFormFrame;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *txtMemberName;
    QLineEdit *txtMemberPhone;
    QLineEdit *txtMemberEmail;

    void setupUi(QDialog *addmember)
    {
        if (addmember->objectName().isEmpty())
            addmember->setObjectName(QString::fromUtf8("addmember"));
        addmember->resize(637, 405);
        btnSaveMember = new QPushButton(addmember);
        btnSaveMember->setObjectName(QString::fromUtf8("btnSaveMember"));
        btnSaveMember->setGeometry(QRect(360, 370, 171, 31));
        btnSaveMember->setStyleSheet(QString::fromUtf8("/*-----QPushButton-----*/\n"
"QPushButton\n"
"{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(68, 188, 128, 255), stop:1 rgba(76, 209, 143, 255));\n"
"color: black;\n"
"font: 8pt \"Century Gothic\";\n"
"min-width: 80px;\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;\n"
"border-color: rgb(38, 156, 200);\n"
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
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(54, 149, 101, 255), stop:1 rgba(64, 175, 119, 255));\n"
"border: 1px solid rgb(41, 170, 182);}"));
        addBookTabFrame = new QFrame(addmember);
        addBookTabFrame->setObjectName(QString::fromUtf8("addBookTabFrame"));
        addBookTabFrame->setGeometry(QRect(20, 24, 191, 61));
        addBookTabFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 58, 68);\n"
"border-radius: 16px;"));
        addBookTabFrame->setFrameShape(QFrame::StyledPanel);
        addBookTabFrame->setFrameShadow(QFrame::Raised);
        addBookTtle = new QLabel(addBookTabFrame);
        addBookTtle->setObjectName(QString::fromUtf8("addBookTtle"));
        addBookTtle->setGeometry(QRect(10, 10, 171, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Century Gothic")});
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        addBookTtle->setFont(font);
        addBookTtle->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Century Gothic\";"));
        addBookTtle->setAlignment(Qt::AlignCenter);
        AddMemberFormFrame = new QFrame(addmember);
        AddMemberFormFrame->setObjectName(QString::fromUtf8("AddMemberFormFrame"));
        AddMemberFormFrame->setGeometry(QRect(20, 60, 511, 291));
        AddMemberFormFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 52, 61);\n"
"border-radius: 16px;"));
        AddMemberFormFrame->setFrameShape(QFrame::StyledPanel);
        AddMemberFormFrame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(AddMemberFormFrame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 40, 431, 201));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        txtMemberName = new QLineEdit(layoutWidget);
        txtMemberName->setObjectName(QString::fromUtf8("txtMemberName"));
        txtMemberName->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border: 2px solid rgb(96, 101, 124);\n"
"border-radius: 15px;\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Century Gothic\";\n"
"padding-left:20px;\n"
"padding-right: 20px;\n"
"background-color: rgb(95, 95, 112);\n"
"}\n"
"\n"
"\n"
"QLineEdit::hover{\n"
"border: 2px solid rgb(43, 153, 213);\n"
"}\n"
"\n"
"QLineEdit::focus{\n"
"border: 2px solid rgb(170, 255, 255);\n"
"background-color:rgb(43,45,56);\n"
"}"));

        verticalLayout->addWidget(txtMemberName);

        txtMemberPhone = new QLineEdit(layoutWidget);
        txtMemberPhone->setObjectName(QString::fromUtf8("txtMemberPhone"));
        txtMemberPhone->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border: 2px solid rgb(96, 101, 124);\n"
"border-radius: 15px;\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Century Gothic\";\n"
"padding-left:20px;\n"
"padding-right: 20px;\n"
"background-color: rgb(95, 95, 112);\n"
"}\n"
"\n"
"\n"
"QLineEdit::hover{\n"
"border: 2px solid rgb(43, 153, 213);\n"
"}\n"
"\n"
"QLineEdit::focus{\n"
"border: 2px solid rgb(170, 255, 255);\n"
"background-color:rgb(43,45,56);\n"
"}"));

        verticalLayout->addWidget(txtMemberPhone);

        txtMemberEmail = new QLineEdit(layoutWidget);
        txtMemberEmail->setObjectName(QString::fromUtf8("txtMemberEmail"));
        txtMemberEmail->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border: 2px solid rgb(96, 101, 124);\n"
"border-radius: 15px;\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Century Gothic\";\n"
"padding-left:20px;\n"
"padding-right: 20px;\n"
"background-color: rgb(95, 95, 112);\n"
"}\n"
"\n"
"\n"
"QLineEdit::hover{\n"
"border: 2px solid rgb(43, 153, 213);\n"
"}\n"
"\n"
"QLineEdit::focus{\n"
"border: 2px solid rgb(170, 255, 255);\n"
"background-color:rgb(43,45,56);\n"
"}"));

        verticalLayout->addWidget(txtMemberEmail);

        addBookTabFrame->raise();
        btnSaveMember->raise();
        AddMemberFormFrame->raise();

        retranslateUi(addmember);

        QMetaObject::connectSlotsByName(addmember);
    } // setupUi

    void retranslateUi(QDialog *addmember)
    {
        addmember->setWindowTitle(QCoreApplication::translate("addmember", "Dialog", nullptr));
        btnSaveMember->setText(QCoreApplication::translate("addmember", "Save", nullptr));
        addBookTtle->setText(QCoreApplication::translate("addmember", "ADD MEMBER", nullptr));
        txtMemberName->setPlaceholderText(QCoreApplication::translate("addmember", "Name", nullptr));
        txtMemberPhone->setPlaceholderText(QCoreApplication::translate("addmember", "Phone Number", nullptr));
        txtMemberEmail->setPlaceholderText(QCoreApplication::translate("addmember", "Email", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addmember: public Ui_addmember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMEMBER_H
