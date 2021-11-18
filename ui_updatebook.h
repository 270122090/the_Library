/********************************************************************************
** Form generated from reading UI file 'updatebook.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEBOOK_H
#define UI_UPDATEBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_updatebook
{
public:
    QFrame *UpdateBookFormFrame;
    QLabel *bookCopyLabel_2;
    QComboBox *boxupdateBook_2;
    QPushButton *btnupdatebook_2;
    QLabel *label_19;
    QLabel *label_17;
    QLabel *lbluStatus;
    QLabel *lbluBookTitle;

    void setupUi(QDialog *updatebook)
    {
        if (updatebook->objectName().isEmpty())
            updatebook->setObjectName(QString::fromUtf8("updatebook"));
        updatebook->resize(701, 343);
        UpdateBookFormFrame = new QFrame(updatebook);
        UpdateBookFormFrame->setObjectName(QString::fromUtf8("UpdateBookFormFrame"));
        UpdateBookFormFrame->setGeometry(QRect(20, 20, 451, 291));
        UpdateBookFormFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 52, 61);\n"
"border-radius: 16px;"));
        UpdateBookFormFrame->setFrameShape(QFrame::StyledPanel);
        UpdateBookFormFrame->setFrameShadow(QFrame::Raised);
        bookCopyLabel_2 = new QLabel(UpdateBookFormFrame);
        bookCopyLabel_2->setObjectName(QString::fromUtf8("bookCopyLabel_2"));
        bookCopyLabel_2->setGeometry(QRect(40, 160, 111, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Century Gothic")});
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        bookCopyLabel_2->setFont(font);
        bookCopyLabel_2->setStyleSheet(QString::fromUtf8("color: rgb(175, 175, 184);\n"
"font: 12pt \"Century Gothic\";"));
        boxupdateBook_2 = new QComboBox(UpdateBookFormFrame);
        boxupdateBook_2->setObjectName(QString::fromUtf8("boxupdateBook_2"));
        boxupdateBook_2->setGeometry(QRect(40, 200, 241, 22));
        boxupdateBook_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(95, 95, 112);\n"
""));
        btnupdatebook_2 = new QPushButton(UpdateBookFormFrame);
        btnupdatebook_2->setObjectName(QString::fromUtf8("btnupdatebook_2"));
        btnupdatebook_2->setGeometry(QRect(170, 240, 101, 31));
        btnupdatebook_2->setCursor(QCursor(Qt::OpenHandCursor));
        btnupdatebook_2->setMouseTracking(true);
        btnupdatebook_2->setStyleSheet(QString::fromUtf8("/*background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(54, 110, 140, 255), stop:0.747191 rgba(145, 192, 216, 255));\n"
"\n"
"border-color: rgb(81, 130, 157);\n"
"font: 8pt \"Nirmala UI\";\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 10px;*/\n"
"\n"
"/*-----QPushButton-----*/\n"
"QPushButton\n"
"{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(37, 147, 194, 255), stop:1 rgba(45, 196, 226, 255));\n"
"color: rgb(255, 255, 255);\n"
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
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgb"
                        "a(47, 160, 194, 255), stop:1 rgba(57, 209, 209, 255));\n"
"border: 1px solid rgb(41, 170, 182);}\n"
""));
        label_19 = new QLabel(UpdateBookFormFrame);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(40, 90, 71, 35));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Century Gothic")});
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        label_19->setFont(font1);
        label_19->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Century Gothic\";"));
        label_17 = new QLabel(UpdateBookFormFrame);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(40, 40, 51, 36));
        label_17->setFont(font1);
        label_17->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Century Gothic\";"));
        lbluStatus = new QLabel(UpdateBookFormFrame);
        lbluStatus->setObjectName(QString::fromUtf8("lbluStatus"));
        lbluStatus->setGeometry(QRect(160, 80, 241, 35));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Century Gothic")});
        font2.setPointSize(15);
        font2.setBold(false);
        font2.setItalic(false);
        lbluStatus->setFont(font2);
        lbluStatus->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border:none;\n"
"color: rgb(193, 193, 193);\n"
"font: 15pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius:none;"));
        lbluStatus->setFrameShape(QFrame::Panel);
        lbluBookTitle = new QLabel(UpdateBookFormFrame);
        lbluBookTitle->setObjectName(QString::fromUtf8("lbluBookTitle"));
        lbluBookTitle->setGeometry(QRect(159, 30, 241, 36));
        lbluBookTitle->setFont(font2);
        lbluBookTitle->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border:none;\n"
"color: rgb(193, 193, 193);\n"
"font: 15pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius:none;"));
        lbluBookTitle->setFrameShape(QFrame::Panel);

        retranslateUi(updatebook);

        QMetaObject::connectSlotsByName(updatebook);
    } // setupUi

    void retranslateUi(QDialog *updatebook)
    {
        updatebook->setWindowTitle(QCoreApplication::translate("updatebook", "Dialog", nullptr));
        bookCopyLabel_2->setText(QCoreApplication::translate("updatebook", "New Status", nullptr));
        btnupdatebook_2->setText(QCoreApplication::translate("updatebook", "Update", nullptr));
        label_19->setText(QCoreApplication::translate("updatebook", "Status", nullptr));
        label_17->setText(QCoreApplication::translate("updatebook", "Title", nullptr));
        lbluStatus->setText(QString());
        lbluBookTitle->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class updatebook: public Ui_updatebook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEBOOK_H
