/********************************************************************************
** Form generated from reading UI file 'updatemember.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEMEMBER_H
#define UI_UPDATEMEMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_updateMember
{
public:
    QLineEdit *txtaddbook;
    QFrame *sideFrame;
    QPushButton *btnSaveMember;
    QFrame *AddMemberFormFrame;
    QLineEdit *txtAddMemberName;
    QLineEdit *txtAddMemberPhone;
    QLineEdit *txtAddMemberAddress;
    QLineEdit *txtAddMemberEmail;
    QComboBox *comboBox;
    QFrame *addBookTabFrame;
    QLabel *addBookTtle;

    void setupUi(QDialog *updateMember)
    {
        if (updateMember->objectName().isEmpty())
            updateMember->setObjectName(QString::fromUtf8("updateMember"));
        updateMember->resize(977, 621);
        txtaddbook = new QLineEdit(updateMember);
        txtaddbook->setObjectName(QString::fromUtf8("txtaddbook"));
        txtaddbook->setGeometry(QRect(162, 146, 271, 31));
        txtaddbook->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border:none;\n"
"color: white;\n"
"font: 12pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius:none;"));
        sideFrame = new QFrame(updateMember);
        sideFrame->setObjectName(QString::fromUtf8("sideFrame"));
        sideFrame->setGeometry(QRect(660, 126, 171, 331));
        sideFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 52, 61);\n"
"border-radius: 16px;"));
        sideFrame->setFrameShape(QFrame::StyledPanel);
        sideFrame->setFrameShadow(QFrame::Raised);
        btnSaveMember = new QPushButton(updateMember);
        btnSaveMember->setObjectName(QString::fromUtf8("btnSaveMember"));
        btnSaveMember->setGeometry(QRect(522, 476, 311, 31));
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
        AddMemberFormFrame = new QFrame(updateMember);
        AddMemberFormFrame->setObjectName(QString::fromUtf8("AddMemberFormFrame"));
        AddMemberFormFrame->setGeometry(QRect(132, 126, 511, 331));
        AddMemberFormFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 52, 61);\n"
"border-radius: 16px;"));
        AddMemberFormFrame->setFrameShape(QFrame::StyledPanel);
        AddMemberFormFrame->setFrameShadow(QFrame::Raised);
        txtAddMemberName = new QLineEdit(AddMemberFormFrame);
        txtAddMemberName->setObjectName(QString::fromUtf8("txtAddMemberName"));
        txtAddMemberName->setGeometry(QRect(40, 50, 421, 31));
        txtAddMemberName->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border: 2px solid rgb(96, 101, 124);\n"
"border-radius: 15px;\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Century Gothic\";\n"
"padding-left:20px;\n"
"padding-rght: 20px;\n"
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
        txtAddMemberPhone = new QLineEdit(AddMemberFormFrame);
        txtAddMemberPhone->setObjectName(QString::fromUtf8("txtAddMemberPhone"));
        txtAddMemberPhone->setGeometry(QRect(40, 100, 421, 31));
        txtAddMemberPhone->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border: 2px solid rgb(96, 101, 124);\n"
"border-radius: 15px;\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Century Gothic\";\n"
"padding-left:20px;\n"
"padding-rght: 20px;\n"
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
        txtAddMemberAddress = new QLineEdit(AddMemberFormFrame);
        txtAddMemberAddress->setObjectName(QString::fromUtf8("txtAddMemberAddress"));
        txtAddMemberAddress->setGeometry(QRect(40, 250, 421, 31));
        txtAddMemberAddress->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border: 2px solid rgb(96, 101, 124);\n"
"border-radius: 15px;\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Century Gothic\";\n"
"padding-left:20px;\n"
"padding-rght: 20px;\n"
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
        txtAddMemberEmail = new QLineEdit(AddMemberFormFrame);
        txtAddMemberEmail->setObjectName(QString::fromUtf8("txtAddMemberEmail"));
        txtAddMemberEmail->setGeometry(QRect(40, 200, 421, 31));
        txtAddMemberEmail->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border: 2px solid rgb(96, 101, 124);\n"
"border-radius: 15px;\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Century Gothic\";\n"
"padding-left:20px;\n"
"padding-rght: 20px;\n"
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
        comboBox = new QComboBox(AddMemberFormFrame);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(197, 150, 261, 31));
        comboBox->setStyleSheet(QString::fromUtf8("/*-----QDoubleSpinBox -*\n"
"\n"
"	background-color: rgb(117, 129, 138);\n"
"	color : #fff;\n"
"	border: 1px solid #1d1d1d;\n"
"	border-radius: 15px;\n"
"	padding: 3px;\n"
"	padding-left: 5px;\n"
"	padding-right: 10px;\n"
"\n"
"\n"
"/*QComboBox::up-button\n"
"{\n"
"	background-color: #4a5157;\n"
"    width: 16px; \n"
"	border-top-right-radius: 4px;\n"
"    border-width: 1px;\n"
"	border-color: #1d1d1d;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox::up-button:hover\n"
"{\n"
"	background-color: #585858;\n"
"\n"
"}*/\n"
"\n"
"/*QComboBox::up-button:pressed\n"
"{\n"
"	background-color: #252525;\n"
"    width: 16px; \n"
"    border-width: 1px;\n"
"\n"
"}\n"
"\n"
"\n"
" QComboBox::up-arrow\n"
"{\n"
"    image: url(://arrow-up.png);\n"
"    width: 7px;\n"
"    height: 7px;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox::item::down-button\n"
"{\n"
"	background-color: #4a5157;\n"
"    width: 16px; \n"
"    border-width: 1px;\n"
"	border-bottom-right-radius: 4px;\n"
"	border-color: #1d1d1d;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox::down-button:hove"
                        "r\n"
"{\n"
"	background-color: #585858;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox::down-button:pressed\n"
"{\n"
"	background-color: #252525;\n"
"    width: 16px; \n"
"    border-width: 1px;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox::down-arrow\n"
"{\n"
"    image: url(://arrow-down.png);\n"
"    width: 7px;\n"
"    height: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"/*-----QComboBox-----*/\n"
"QComboBox\n"
"{\n"
"    \n"
"	background-color: rgb(95, 95, 112);\n"
"    padding-left: 6px;\n"
"    color: #fff;\n"
"    height: 20px;\n"
"	border-radius: 10px;\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"/*QComboBox::disabled\n"
"{\n"
"	background-color: #404	margin-right: 10px;040;\n"
"	color: #656565;\n"
"	border-color: #051a39;\n"
"\n"
"}*/\n"
"\n"
"QComboBox:on\n"
"{\n"
"    background-color: #4a5157;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"/*QComboBox QAbstractItemView\n"
"{\n"
"    background-color: #4a5157;\n"
"    color: #fff;\n"
"    selection-background-color: #002b2b;\n"
"	selection-color: #fff;\n"
"    outline: 0;\n"
"\n"
"}*/\n"
"\n"
"\n"
""
                        "QComboBox::drop-down\n"
"{\n"
"	background-color: #4a5157;\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"	border-radius: 6px;\n"
"    width: 30px;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox::down-arrow\n"
"{\n"
"    image: url(://arrow-down.png);\n"
"    width: 8px;\n"
"    height: 8px;\n"
"\n"
"}\n"
"\n"
"QComboBox::hover{\n"
"border: 2px solid rgb(43, 153, 213);\n"
"}\n"
"\n"
"QComboBox::focus{\n"
"border: 2px solid rgb(170, 255, 255);\n"
"background-color:rgb(43,45,56);\n"
"}"));
        comboBox->setEditable(false);
        addBookTabFrame = new QFrame(updateMember);
        addBookTabFrame->setObjectName(QString::fromUtf8("addBookTabFrame"));
        addBookTabFrame->setGeometry(QRect(132, 90, 191, 61));
        addBookTabFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 58, 68);\n"
"border-radius: 16px;"));
        addBookTabFrame->setFrameShape(QFrame::StyledPanel);
        addBookTabFrame->setFrameShadow(QFrame::Raised);
        addBookTtle = new QLabel(addBookTabFrame);
        addBookTtle->setObjectName(QString::fromUtf8("addBookTtle"));
        addBookTtle->setGeometry(QRect(10, 10, 171, 21));
        QFont font;
        font.setFamily({QString::fromUtf8("Century Gothic")});
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        addBookTtle->setFont(font);
        addBookTtle->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Century Gothic\";"));
        addBookTtle->setAlignment(Qt::AlignCenter);
        addBookTabFrame->raise();
        txtaddbook->raise();
        sideFrame->raise();
        btnSaveMember->raise();
        AddMemberFormFrame->raise();

        retranslateUi(updateMember);

        QMetaObject::connectSlotsByName(updateMember);
    } // setupUi

    void retranslateUi(QDialog *updateMember)
    {
        updateMember->setWindowTitle(QCoreApplication::translate("updateMember", "Dialog", nullptr));
        txtaddbook->setText(QString());
        txtaddbook->setPlaceholderText(QCoreApplication::translate("updateMember", "Title", nullptr));
        btnSaveMember->setText(QCoreApplication::translate("updateMember", "Save", nullptr));
        txtAddMemberName->setPlaceholderText(QCoreApplication::translate("updateMember", "Name", nullptr));
        txtAddMemberPhone->setPlaceholderText(QCoreApplication::translate("updateMember", "Phone Number", nullptr));
        txtAddMemberAddress->setPlaceholderText(QCoreApplication::translate("updateMember", "Address", nullptr));
        txtAddMemberEmail->setPlaceholderText(QCoreApplication::translate("updateMember", "Email", nullptr));

        addBookTtle->setText(QCoreApplication::translate("updateMember", "ADD MEMBER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class updateMember: public Ui_updateMember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEMEMBER_H
