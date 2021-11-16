/********************************************************************************
** Form generated from reading UI file 'issuebook.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ISSUEBOOK_H
#define UI_ISSUEBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_issuebook
{
public:
    QFrame *frame;
    QPushButton *btnissuebook;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *iStatus;
    QLabel *LibraryTitle_3;
    QLineEdit *iBookTitle;
    QPushButton *btniMember;
    QFrame *searchFrame;
    QLineEdit *txtSearchMember;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *txtMemberName;
    QLineEdit *txtMemberNumber;
    QListWidget *listMember;
    QLineEdit *txtiDate;
    QLineEdit *txtiDue;
    QFrame *line;
    QLabel *label_8;
    QLineEdit *inewStatus;
    QPushButton *btnexitissue;

    void setupUi(QDialog *issuebook)
    {
        if (issuebook->objectName().isEmpty())
            issuebook->setObjectName(QString::fromUtf8("issuebook"));
        issuebook->resize(1041, 622);
        frame = new QFrame(issuebook);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 10, 1001, 601));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(223, 233, 239);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        btnissuebook = new QPushButton(frame);
        btnissuebook->setObjectName(QString::fromUtf8("btnissuebook"));
        btnissuebook->setGeometry(QRect(830, 290, 150, 23));
        btnissuebook->setStyleSheet(QString::fromUtf8("font: 75 9pt \"Yu Gothic UI\";"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 180, 47, 16));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 9pt \"Yu Gothic UI\";"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 110, 47, 14));
        label->setStyleSheet(QString::fromUtf8("font: 75 9pt \"Yu Gothic UI\";"));
        iStatus = new QLineEdit(frame);
        iStatus->setObjectName(QString::fromUtf8("iStatus"));
        iStatus->setGeometry(QRect(120, 180, 271, 21));
        LibraryTitle_3 = new QLabel(frame);
        LibraryTitle_3->setObjectName(QString::fromUtf8("LibraryTitle_3"));
        LibraryTitle_3->setGeometry(QRect(390, 20, 209, 30));
        LibraryTitle_3->setMaximumSize(QSize(16777215, 30));
        LibraryTitle_3->setStyleSheet(QString::fromUtf8("background: rgba(40, 83, 107, 1);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: white;"));
        LibraryTitle_3->setAlignment(Qt::AlignCenter);
        iBookTitle = new QLineEdit(frame);
        iBookTitle->setObjectName(QString::fromUtf8("iBookTitle"));
        iBookTitle->setGeometry(QRect(120, 110, 271, 21));
        btniMember = new QPushButton(frame);
        btniMember->setObjectName(QString::fromUtf8("btniMember"));
        btniMember->setGeometry(QRect(800, 100, 114, 21));
        btniMember->setStyleSheet(QString::fromUtf8("font: 75 9pt \"Yu Gothic UI\";"));
        searchFrame = new QFrame(frame);
        searchFrame->setObjectName(QString::fromUtf8("searchFrame"));
        searchFrame->setGeometry(QRect(550, 100, 241, 31));
        searchFrame->setStyleSheet(QString::fromUtf8("border: 1px solid #000000;\n"
"border-radius: 14px;\n"
"background-color: rgb(246, 240, 237);"));
        searchFrame->setFrameShape(QFrame::StyledPanel);
        searchFrame->setFrameShadow(QFrame::Plain);
        txtSearchMember = new QLineEdit(searchFrame);
        txtSearchMember->setObjectName(QString::fromUtf8("txtSearchMember"));
        txtSearchMember->setGeometry(QRect(0, 0, 241, 31));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(540, 210, 47, 14));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 9pt \"Yu Gothic UI\";"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(540, 250, 47, 14));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 9pt \"Yu Gothic UI\";"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(540, 370, 71, 16));
        label_6->setStyleSheet(QString::fromUtf8("font: 75 9pt \"Yu Gothic UI\";"));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(540, 420, 71, 16));
        label_7->setStyleSheet(QString::fromUtf8("font: 75 9pt \"Yu Gothic UI\";"));
        txtMemberName = new QLineEdit(frame);
        txtMemberName->setObjectName(QString::fromUtf8("txtMemberName"));
        txtMemberName->setGeometry(QRect(640, 200, 271, 21));
        txtMemberNumber = new QLineEdit(frame);
        txtMemberNumber->setObjectName(QString::fromUtf8("txtMemberNumber"));
        txtMemberNumber->setGeometry(QRect(640, 250, 271, 21));
        listMember = new QListWidget(frame);
        listMember->setObjectName(QString::fromUtf8("listMember"));
        listMember->setGeometry(QRect(540, 140, 441, 41));
        txtiDate = new QLineEdit(frame);
        txtiDate->setObjectName(QString::fromUtf8("txtiDate"));
        txtiDate->setGeometry(QRect(640, 370, 271, 21));
        txtiDue = new QLineEdit(frame);
        txtiDue->setObjectName(QString::fromUtf8("txtiDue"));
        txtiDue->setGeometry(QRect(640, 420, 271, 21));
        txtiDue->setStyleSheet(QString::fromUtf8("font: 75 9pt \"Yu Gothic UI\";\n"
"color: red;"));
        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(50, 320, 931, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(540, 480, 71, 16));
        label_8->setStyleSheet(QString::fromUtf8("font: 75 9pt \"Yu Gothic UI\";"));
        inewStatus = new QLineEdit(frame);
        inewStatus->setObjectName(QString::fromUtf8("inewStatus"));
        inewStatus->setGeometry(QRect(640, 480, 271, 21));
        btnexitissue = new QPushButton(frame);
        btnexitissue->setObjectName(QString::fromUtf8("btnexitissue"));
        btnexitissue->setGeometry(QRect(830, 560, 150, 23));
        btnexitissue->setStyleSheet(QString::fromUtf8("font: 75 9pt \"Yu Gothic UI\";"));

        retranslateUi(issuebook);

        QMetaObject::connectSlotsByName(issuebook);
    } // setupUi

    void retranslateUi(QDialog *issuebook)
    {
        issuebook->setWindowTitle(QCoreApplication::translate("issuebook", "Dialog", nullptr));
        btnissuebook->setText(QCoreApplication::translate("issuebook", "Issue", nullptr));
        label_3->setText(QCoreApplication::translate("issuebook", "Status", nullptr));
        label->setText(QCoreApplication::translate("issuebook", "Title", nullptr));
        LibraryTitle_3->setText(QCoreApplication::translate("issuebook", "Issue Book", nullptr));
        btniMember->setText(QCoreApplication::translate("issuebook", "Search Member", nullptr));
        label_2->setText(QCoreApplication::translate("issuebook", "Name", nullptr));
        label_4->setText(QCoreApplication::translate("issuebook", "Number", nullptr));
        label_6->setText(QCoreApplication::translate("issuebook", "Date Issued", nullptr));
        label_7->setText(QCoreApplication::translate("issuebook", "Date Due", nullptr));
        label_8->setText(QCoreApplication::translate("issuebook", "New Status", nullptr));
        btnexitissue->setText(QCoreApplication::translate("issuebook", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class issuebook: public Ui_issuebook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ISSUEBOOK_H
