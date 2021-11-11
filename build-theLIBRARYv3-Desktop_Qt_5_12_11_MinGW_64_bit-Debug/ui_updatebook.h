/********************************************************************************
** Form generated from reading UI file 'updatebook.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEBOOK_H
#define UI_UPDATEBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>

QT_BEGIN_NAMESPACE

class Ui_updatebook
{
public:
    QFrame *frame;
    QSplitter *splitter;
    QPushButton *btnupdatebook;
    QLabel *lbl_ID;
    QLabel *lblBookTitle;
    QLabel *addbookimagebox;
    QLabel *label_2;
    QLabel *lblDewey;
    QSpinBox *spinQty;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label;
    QPushButton *btnloadbookimage;
    QLabel *lblAuthor;
    QLineEdit *txtaddStatus;
    QLabel *label_4;
    QLabel *LibraryTitle_3;
    QLabel *label_6;

    void setupUi(QDialog *updatebook)
    {
        if (updatebook->objectName().isEmpty())
            updatebook->setObjectName(QString::fromUtf8("updatebook"));
        updatebook->resize(1103, 640);
        frame = new QFrame(updatebook);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(60, 10, 1001, 641));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(223, 233, 239);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        splitter = new QSplitter(frame);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(420, 570, 150, 23));
        splitter->setOrientation(Qt::Horizontal);
        btnupdatebook = new QPushButton(frame);
        btnupdatebook->setObjectName(QString::fromUtf8("btnupdatebook"));
        btnupdatebook->setGeometry(QRect(650, 380, 121, 23));
        lbl_ID = new QLabel(frame);
        lbl_ID->setObjectName(QString::fromUtf8("lbl_ID"));
        lbl_ID->setGeometry(QRect(500, 330, 271, 21));
        QFont font;
        font.setPointSize(12);
        lbl_ID->setFont(font);
        lbl_ID->setFrameShape(QFrame::Panel);
        lblBookTitle = new QLabel(frame);
        lblBookTitle->setObjectName(QString::fromUtf8("lblBookTitle"));
        lblBookTitle->setGeometry(QRect(500, 210, 271, 21));
        lblBookTitle->setFont(font);
        lblBookTitle->setFrameShape(QFrame::Panel);
        addbookimagebox = new QLabel(frame);
        addbookimagebox->setObjectName(QString::fromUtf8("addbookimagebox"));
        addbookimagebox->setGeometry(QRect(210, 200, 131, 201));
        addbookimagebox->setFrameShape(QFrame::Box);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(380, 240, 47, 14));
        lblDewey = new QLabel(frame);
        lblDewey->setObjectName(QString::fromUtf8("lblDewey"));
        lblDewey->setGeometry(QRect(500, 300, 271, 21));
        lblDewey->setFont(font);
        lblDewey->setFrameShape(QFrame::Panel);
        spinQty = new QSpinBox(frame);
        spinQty->setObjectName(QString::fromUtf8("spinQty"));
        spinQty->setGeometry(QRect(500, 380, 81, 22));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(380, 270, 47, 16));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(380, 330, 47, 16));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(380, 210, 47, 14));
        btnloadbookimage = new QPushButton(frame);
        btnloadbookimage->setObjectName(QString::fromUtf8("btnloadbookimage"));
        btnloadbookimage->setGeometry(QRect(210, 410, 131, 22));
        lblAuthor = new QLabel(frame);
        lblAuthor->setObjectName(QString::fromUtf8("lblAuthor"));
        lblAuthor->setGeometry(QRect(500, 240, 271, 21));
        lblAuthor->setFont(font);
        lblAuthor->setFrameShape(QFrame::Panel);
        txtaddStatus = new QLineEdit(frame);
        txtaddStatus->setObjectName(QString::fromUtf8("txtaddStatus"));
        txtaddStatus->setGeometry(QRect(500, 270, 271, 21));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(380, 300, 47, 16));
        LibraryTitle_3 = new QLabel(frame);
        LibraryTitle_3->setObjectName(QString::fromUtf8("LibraryTitle_3"));
        LibraryTitle_3->setGeometry(QRect(360, 100, 291, 30));
        LibraryTitle_3->setMaximumSize(QSize(16777215, 30));
        LibraryTitle_3->setStyleSheet(QString::fromUtf8("background: rgba(40, 83, 107, 1);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: white;"));
        LibraryTitle_3->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(380, 380, 101, 16));

        retranslateUi(updatebook);

        QMetaObject::connectSlotsByName(updatebook);
    } // setupUi

    void retranslateUi(QDialog *updatebook)
    {
        updatebook->setWindowTitle(QApplication::translate("updatebook", "Dialog", nullptr));
        btnupdatebook->setText(QApplication::translate("updatebook", "Save", nullptr));
        lbl_ID->setText(QString());
        lblBookTitle->setText(QString());
        addbookimagebox->setText(QString());
        label_2->setText(QApplication::translate("updatebook", "Author", nullptr));
        lblDewey->setText(QString());
        label_3->setText(QApplication::translate("updatebook", "Status", nullptr));
        label_5->setText(QApplication::translate("updatebook", "ID", nullptr));
        label->setText(QApplication::translate("updatebook", "Title", nullptr));
        btnloadbookimage->setText(QApplication::translate("updatebook", "Upload Image", nullptr));
        lblAuthor->setText(QString());
        label_4->setText(QApplication::translate("updatebook", "Dewey", nullptr));
        LibraryTitle_3->setText(QApplication::translate("updatebook", "UPDATE A BOOK", nullptr));
        label_6->setText(QApplication::translate("updatebook", "Number of Books", nullptr));
    } // retranslateUi

};

namespace Ui {
    class updatebook: public Ui_updatebook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEBOOK_H
