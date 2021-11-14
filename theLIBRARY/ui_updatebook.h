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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_updatebook
{
public:
    QFrame *frame;
    QPushButton *btnupdatebook;
    QLabel *label_3;
    QLabel *label;
    QLabel *LibraryTitle_3;
    QLineEdit *uBookTitle;
    QComboBox *updatecombo;
    QLineEdit *currentstatus;
    QLabel *label_4;

    void setupUi(QDialog *updatebook)
    {
        if (updatebook->objectName().isEmpty())
            updatebook->setObjectName(QString::fromUtf8("updatebook"));
        updatebook->resize(1041, 635);
        frame = new QFrame(updatebook);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 10, 1001, 601));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(223, 233, 239);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        btnupdatebook = new QPushButton(frame);
        btnupdatebook->setObjectName(QString::fromUtf8("btnupdatebook"));
        btnupdatebook->setGeometry(QRect(440, 260, 150, 23));
        btnupdatebook->setStyleSheet(QString::fromUtf8("font: 75 9pt \"Yu Gothic UI\";"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(290, 390, 71, 16));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 9pt \"Yu Gothic UI\";"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 110, 47, 14));
        label->setStyleSheet(QString::fromUtf8("font: 75 9pt \"Yu Gothic UI\";"));
        LibraryTitle_3 = new QLabel(frame);
        LibraryTitle_3->setObjectName(QString::fromUtf8("LibraryTitle_3"));
        LibraryTitle_3->setGeometry(QRect(390, 20, 209, 30));
        LibraryTitle_3->setMaximumSize(QSize(16777215, 30));
        LibraryTitle_3->setStyleSheet(QString::fromUtf8("background: rgba(40, 83, 107, 1);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: white;"));
        LibraryTitle_3->setAlignment(Qt::AlignCenter);
        uBookTitle = new QLineEdit(frame);
        uBookTitle->setObjectName(QString::fromUtf8("uBookTitle"));
        uBookTitle->setGeometry(QRect(400, 110, 271, 21));
        updatecombo = new QComboBox(frame);
        updatecombo->setObjectName(QString::fromUtf8("updatecombo"));
        updatecombo->setGeometry(QRect(400, 380, 261, 34));
        currentstatus = new QLineEdit(frame);
        currentstatus->setObjectName(QString::fromUtf8("currentstatus"));
        currentstatus->setGeometry(QRect(400, 170, 271, 21));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(280, 170, 91, 16));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 9pt \"Yu Gothic UI\";"));

        retranslateUi(updatebook);

        QMetaObject::connectSlotsByName(updatebook);
    } // setupUi

    void retranslateUi(QDialog *updatebook)
    {
        updatebook->setWindowTitle(QCoreApplication::translate("updatebook", "Dialog", nullptr));
        btnupdatebook->setText(QCoreApplication::translate("updatebook", "Save", nullptr));
        label_3->setText(QCoreApplication::translate("updatebook", "New Status", nullptr));
        label->setText(QCoreApplication::translate("updatebook", "Title", nullptr));
        LibraryTitle_3->setText(QCoreApplication::translate("updatebook", "UPDATE A BOOK", nullptr));
        label_4->setText(QCoreApplication::translate("updatebook", "Current Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class updatebook: public Ui_updatebook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEBOOK_H
