/********************************************************************************
** Form generated from reading UI file 'addbook.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOK_H
#define UI_ADDBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddBook
{
public:
    QFrame *frame;
    QPushButton *btnloadbookimage;
    QLabel *addbookimagebox;
    QLabel *LibraryTitle_3;
    QSplitter *splitter;
    QPushButton *btnsavebook;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *txtaddid;
    QLabel *label_3;
    QLineEdit *txtaddbook;
    QLineEdit *txtadddewey;
    QLabel *label;
    QLineEdit *txtaddauthor;
    QComboBox *addstatus;

    void setupUi(QDialog *AddBook)
    {
        if (AddBook->objectName().isEmpty())
            AddBook->setObjectName(QString::fromUtf8("AddBook"));
        AddBook->resize(1042, 631);
        frame = new QFrame(AddBook);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 10, 1001, 611));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(223, 233, 239);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        btnloadbookimage = new QPushButton(frame);
        btnloadbookimage->setObjectName(QString::fromUtf8("btnloadbookimage"));
        btnloadbookimage->setGeometry(QRect(870, 460, 80, 22));
        addbookimagebox = new QLabel(frame);
        addbookimagebox->setObjectName(QString::fromUtf8("addbookimagebox"));
        addbookimagebox->setGeometry(QRect(680, 80, 271, 361));
        addbookimagebox->setFrameShape(QFrame::Box);
        LibraryTitle_3 = new QLabel(frame);
        LibraryTitle_3->setObjectName(QString::fromUtf8("LibraryTitle_3"));
        LibraryTitle_3->setGeometry(QRect(350, 10, 209, 30));
        LibraryTitle_3->setMaximumSize(QSize(16777215, 30));
        LibraryTitle_3->setStyleSheet(QString::fromUtf8("background: rgba(40, 83, 107, 1);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: white;"));
        LibraryTitle_3->setAlignment(Qt::AlignCenter);
        splitter = new QSplitter(frame);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(810, 560, 150, 23));
        splitter->setOrientation(Qt::Horizontal);
        btnsavebook = new QPushButton(splitter);
        btnsavebook->setObjectName(QString::fromUtf8("btnsavebook"));
        splitter->addWidget(btnsavebook);
        widget = new QWidget(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 90, 511, 361));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        txtaddid = new QLineEdit(widget);
        txtaddid->setObjectName(QString::fromUtf8("txtaddid"));

        gridLayout->addWidget(txtaddid, 4, 2, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        txtaddbook = new QLineEdit(widget);
        txtaddbook->setObjectName(QString::fromUtf8("txtaddbook"));

        gridLayout->addWidget(txtaddbook, 0, 2, 1, 1);

        txtadddewey = new QLineEdit(widget);
        txtadddewey->setObjectName(QString::fromUtf8("txtadddewey"));

        gridLayout->addWidget(txtadddewey, 3, 2, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        txtaddauthor = new QLineEdit(widget);
        txtaddauthor->setObjectName(QString::fromUtf8("txtaddauthor"));

        gridLayout->addWidget(txtaddauthor, 1, 2, 1, 1);

        addstatus = new QComboBox(widget);
        addstatus->setObjectName(QString::fromUtf8("addstatus"));

        gridLayout->addWidget(addstatus, 2, 2, 1, 1);


        retranslateUi(AddBook);

        QMetaObject::connectSlotsByName(AddBook);
    } // setupUi

    void retranslateUi(QDialog *AddBook)
    {
        AddBook->setWindowTitle(QCoreApplication::translate("AddBook", "Dialog", nullptr));
        btnloadbookimage->setText(QCoreApplication::translate("AddBook", "Upload Image", nullptr));
        addbookimagebox->setText(QString());
        LibraryTitle_3->setText(QCoreApplication::translate("AddBook", "ADD A BOOK", nullptr));
        btnsavebook->setText(QCoreApplication::translate("AddBook", "Save", nullptr));
        label_4->setText(QCoreApplication::translate("AddBook", "Dewey", nullptr));
        label_2->setText(QCoreApplication::translate("AddBook", "Author", nullptr));
        label_5->setText(QCoreApplication::translate("AddBook", "ID", nullptr));
        label_3->setText(QCoreApplication::translate("AddBook", "Status", nullptr));
        label->setText(QCoreApplication::translate("AddBook", "Title", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddBook: public Ui_AddBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOK_H
