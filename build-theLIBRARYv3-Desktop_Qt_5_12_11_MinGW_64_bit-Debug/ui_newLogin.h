/********************************************************************************
** Form generated from reading UI file 'newLogin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWLOGIN_H
#define UI_NEWLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>

QT_BEGIN_NAMESPACE

class Ui_loginBackground
{
public:
    QGroupBox *groupBox;

    void setupUi(QDialog *loginBackground)
    {
        if (loginBackground->objectName().isEmpty())
            loginBackground->setObjectName(QString::fromUtf8("loginBackground"));
        loginBackground->resize(760, 740);
        loginBackground->setStyleSheet(QString::fromUtf8("background: url(:/loginImage/Tech-Background.png)"));
        groupBox = new QGroupBox(loginBackground);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(210, 130, 291, 211));
        groupBox->setStyleSheet(QString::fromUtf8("/*-----QGroupBox-----*/\n"
"QGroupBox \n"
"{\n"
"    border: 1px solid;\n"
"    border-color: #1d1d1d;\n"
"	border-radius: 4px;\n"
"    margin-top: 23px;\n"
"\n"
"}\n"
"\n"
"\n"
"QGroupBox::title  \n"
"{\n"
"    background-color: #002b2b;\n"
"    color: #fff;\n"
"	subcontrol-position: top left;\n"
"    subcontrol-origin: margin;\n"
"    padding: 5px;\n"
"	min-width: 100px;\n"
"	border: 1px solid #1d1d1d;\n"
"	border-top-left-radius: 4px;\n"
"	border-top-right-radius: 4px;\n"
"	border-bottom: none;\n"
"\n"
"}"));

        retranslateUi(loginBackground);

        QMetaObject::connectSlotsByName(loginBackground);
    } // setupUi

    void retranslateUi(QDialog *loginBackground)
    {
        loginBackground->setWindowTitle(QApplication::translate("loginBackground", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("loginBackground", "GroupBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginBackground: public Ui_loginBackground {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWLOGIN_H
