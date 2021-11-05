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
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>

QT_BEGIN_NAMESPACE

class Ui_AddBook
{
public:
    QFrame *frame;
    QLineEdit *txtaddauthor;
    QLineEdit *txtadddewey;
    QPushButton *btnloadbookimage;
    QLabel *addbookimagebox;
    QLineEdit *txtaddid;
    QLineEdit *txtaddbook;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *txtaddStatus;
    QLabel *LibraryTitle_3;
    QSplitter *splitter;
    QPushButton *btnsavebook;
    QPushButton *btnexitaddbook;

    void setupUi(QDialog *AddBook)
    {
        if (AddBook->objectName().isEmpty())
            AddBook->setObjectName(QString::fromUtf8("AddBook"));
        AddBook->resize(1315, 641);
        frame = new QFrame(AddBook);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(100, 10, 1001, 611));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(223, 233, 239);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        txtaddauthor = new QLineEdit(frame);
        txtaddauthor->setObjectName(QString::fromUtf8("txtaddauthor"));
        txtaddauthor->setGeometry(QRect(300, 190, 271, 21));
        txtadddewey = new QLineEdit(frame);
        txtadddewey->setObjectName(QString::fromUtf8("txtadddewey"));
        txtadddewey->setGeometry(QRect(300, 250, 271, 21));
        btnloadbookimage = new QPushButton(frame);
        btnloadbookimage->setObjectName(QString::fromUtf8("btnloadbookimage"));
        btnloadbookimage->setGeometry(QRect(170, 320, 80, 22));
        addbookimagebox = new QLabel(frame);
        addbookimagebox->setObjectName(QString::fromUtf8("addbookimagebox"));
        addbookimagebox->setGeometry(QRect(300, 320, 271, 171));
        addbookimagebox->setFrameShape(QFrame::Box);
        txtaddid = new QLineEdit(frame);
        txtaddid->setObjectName(QString::fromUtf8("txtaddid"));
        txtaddid->setGeometry(QRect(300, 280, 271, 21));
        txtaddbook = new QLineEdit(frame);
        txtaddbook->setObjectName(QString::fromUtf8("txtaddbook"));
        txtaddbook->setGeometry(QRect(300, 160, 271, 21));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 160, 47, 14));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(180, 220, 47, 16));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(180, 250, 47, 16));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 190, 47, 14));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(180, 280, 47, 16));
        txtaddStatus = new QLineEdit(frame);
        txtaddStatus->setObjectName(QString::fromUtf8("txtaddStatus"));
        txtaddStatus->setGeometry(QRect(300, 220, 271, 21));
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
        splitter->setGeometry(QRect(500, 510, 150, 23));
        splitter->setOrientation(Qt::Horizontal);
        btnsavebook = new QPushButton(splitter);
        btnsavebook->setObjectName(QString::fromUtf8("btnsavebook"));
        splitter->addWidget(btnsavebook);
        btnexitaddbook = new QPushButton(splitter);
        btnexitaddbook->setObjectName(QString::fromUtf8("btnexitaddbook"));
        splitter->addWidget(btnexitaddbook);

        retranslateUi(AddBook);

        QMetaObject::connectSlotsByName(AddBook);
    } // setupUi

    void retranslateUi(QDialog *AddBook)
    {
        AddBook->setWindowTitle(QCoreApplication::translate("AddBook", "Dialog", nullptr));
        btnloadbookimage->setText(QCoreApplication::translate("AddBook", "Upload Image", nullptr));
        addbookimagebox->setText(QString());
        label->setText(QCoreApplication::translate("AddBook", "Title", nullptr));
        label_3->setText(QCoreApplication::translate("AddBook", "Status", nullptr));
        label_4->setText(QCoreApplication::translate("AddBook", "Dewey", nullptr));
        label_2->setText(QCoreApplication::translate("AddBook", "Author", nullptr));
        label_5->setText(QCoreApplication::translate("AddBook", "ID", nullptr));
        LibraryTitle_3->setText(QCoreApplication::translate("AddBook", "ADD A BOOK", nullptr));
        btnsavebook->setText(QCoreApplication::translate("AddBook", "Save", nullptr));
        btnexitaddbook->setText(QCoreApplication::translate("AddBook", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddBook: public Ui_AddBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOK_H
