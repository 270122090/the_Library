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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_addbook
{
public:
    QComboBox *addstatus;
    QFrame *AddBookFormFrame;
    QLineEdit *txtaddbook;
    QLineEdit *txtaddauthor;
    QLineEdit *txtadddewey;
    QLineEdit *txtaddid;
    QLabel *bookCopyLabel;
    QComboBox *addBookstatus;
    QPushButton *btnloadbookimage;
    QFrame *ImageFrame;
    QToolButton *tabletButton;
    QLabel *lblImage;
    QLabel *addbookimagebox;
    QSplitter *splitter;
    QPushButton *btnsavebook;
    QFrame *addBookTabFrame;
    QLabel *addBookTtle;

    void setupUi(QDialog *addbook)
    {
        if (addbook->objectName().isEmpty())
            addbook->setObjectName(QString::fromUtf8("addbook"));
        addbook->resize(694, 425);
        addstatus = new QComboBox(addbook);
        addstatus->setObjectName(QString::fromUtf8("addstatus"));
        addstatus->setGeometry(QRect(291, 244, 161, 21));
        addstatus->setStyleSheet(QString::fromUtf8("	QComboBox{\n"
"	border: 1px solid #1d1d1d;\n"
"	background-color: rgb(95, 95, 112);\n"
"	color : #fff;\n"
"	/*color: rgb(0, 0, 0);*/\n"
"	\n"
"	padding: 3px;\n"
"	padding-left: 8px;\n"
"	padding-right: 15px;\n"
"	border: none;\n"
"}\n"
"\n"
"QComboBox::down\n"
"{\n"
"	background-color: transparent;\n"
"	color : #fff;\n"
"}\n"
"\n"
"/*QComboBox::down-button\n"
"{\n"
"	height: 5px;\n"
"}\n"
"\n"
"\n"
"/*QComboBox::down-button:hover\n"
"{\n"
"	\n"
"	background-color: rgb(95, 95, 112);\n"
"\n"
"}*/\n"
"\n"
"\n"
"QComboBox::down-button:pressed\n"
"{\n"
"	\n"
"    width: 16px; \n"
"    border-width: 1px;\n"
"\n"
"}\n"
"\n"
""));
        AddBookFormFrame = new QFrame(addbook);
        AddBookFormFrame->setObjectName(QString::fromUtf8("AddBookFormFrame"));
        AddBookFormFrame->setGeometry(QRect(60, 56, 451, 291));
        AddBookFormFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 52, 61);\n"
"border-radius: 16px;"));
        AddBookFormFrame->setFrameShape(QFrame::StyledPanel);
        AddBookFormFrame->setFrameShadow(QFrame::Raised);
        txtaddbook = new QLineEdit(AddBookFormFrame);
        txtaddbook->setObjectName(QString::fromUtf8("txtaddbook"));
        txtaddbook->setGeometry(QRect(30, 40, 371, 31));
        txtaddbook->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        txtaddauthor = new QLineEdit(AddBookFormFrame);
        txtaddauthor->setObjectName(QString::fromUtf8("txtaddauthor"));
        txtaddauthor->setGeometry(QRect(30, 87, 371, 31));
        txtaddauthor->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        txtadddewey = new QLineEdit(AddBookFormFrame);
        txtadddewey->setObjectName(QString::fromUtf8("txtadddewey"));
        txtadddewey->setGeometry(QRect(30, 135, 371, 31));
        txtadddewey->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        txtaddid = new QLineEdit(AddBookFormFrame);
        txtaddid->setObjectName(QString::fromUtf8("txtaddid"));
        txtaddid->setGeometry(QRect(30, 230, 371, 31));
        txtaddid->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        bookCopyLabel = new QLabel(AddBookFormFrame);
        bookCopyLabel->setObjectName(QString::fromUtf8("bookCopyLabel"));
        bookCopyLabel->setGeometry(QRect(54, 188, 101, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Century Gothic")});
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        bookCopyLabel->setFont(font);
        bookCopyLabel->setStyleSheet(QString::fromUtf8("color: rgb(175, 175, 184);\n"
"font: 12pt \"Century Gothic\";"));
        addBookstatus = new QComboBox(AddBookFormFrame);
        addBookstatus->setObjectName(QString::fromUtf8("addBookstatus"));
        addBookstatus->setGeometry(QRect(160, 190, 241, 22));
        addBookstatus->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(95, 95, 112);\n"
""));
        btnloadbookimage = new QPushButton(addbook);
        btnloadbookimage->setObjectName(QString::fromUtf8("btnloadbookimage"));
        btnloadbookimage->setGeometry(QRect(534, 56, 141, 31));
        btnloadbookimage->setStyleSheet(QString::fromUtf8("/*-----QPushButton-----*/\n"
"QPushButton\n"
"{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(37, 147, 194, 255), stop:1 rgba(45, 196, 226, 255));\n"
"color: black;\n"
"font: 8pt \"Century Gothic\";\n"
"min-width: 80px;\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 5px;\n"
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
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(47, 160, 194, 255), stop:1 rgba(57, 209, 209, 255));\n"
"border: 1px solid rgb(41, 170, 182);}"));
        ImageFrame = new QFrame(addbook);
        ImageFrame->setObjectName(QString::fromUtf8("ImageFrame"));
        ImageFrame->setGeometry(QRect(520, 100, 171, 251));
        ImageFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 52, 61);\n"
"border-radius: 16px;"));
        ImageFrame->setFrameShape(QFrame::StyledPanel);
        ImageFrame->setFrameShadow(QFrame::Raised);
        tabletButton = new QToolButton(ImageFrame);
        tabletButton->setObjectName(QString::fromUtf8("tabletButton"));
        tabletButton->setGeometry(QRect(75, 220, 21, 21));
        tabletButton->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: rgb(43, 153, 213);"));
        tabletButton->setIconSize(QSize(64, 64));
        lblImage = new QLabel(ImageFrame);
        lblImage->setObjectName(QString::fromUtf8("lblImage"));
        lblImage->setGeometry(QRect(130, 90, 241, 351));
        lblImage->setFrameShape(QFrame::Box);
        addbookimagebox = new QLabel(ImageFrame);
        addbookimagebox->setObjectName(QString::fromUtf8("addbookimagebox"));
        addbookimagebox->setGeometry(QRect(20, 20, 131, 191));
        addbookimagebox->setStyleSheet(QString::fromUtf8("background-color: rgb(75, 75, 88);\n"
"border:none;"));
        addbookimagebox->setFrameShape(QFrame::Box);
        splitter = new QSplitter(addbook);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(70, 366, 601, 31));
        splitter->setOrientation(Qt::Horizontal);
        btnsavebook = new QPushButton(splitter);
        btnsavebook->setObjectName(QString::fromUtf8("btnsavebook"));
        btnsavebook->setStyleSheet(QString::fromUtf8("/*-----QPushButton-----*/\n"
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
        splitter->addWidget(btnsavebook);
        addBookTabFrame = new QFrame(addbook);
        addBookTabFrame->setObjectName(QString::fromUtf8("addBookTabFrame"));
        addBookTabFrame->setGeometry(QRect(60, 20, 191, 61));
        addBookTabFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 52, 61);\n"
"border-radius: 16px;"));
        addBookTabFrame->setFrameShape(QFrame::StyledPanel);
        addBookTabFrame->setFrameShadow(QFrame::Raised);
        addBookTtle = new QLabel(addBookTabFrame);
        addBookTtle->setObjectName(QString::fromUtf8("addBookTtle"));
        addBookTtle->setGeometry(QRect(10, 10, 171, 21));
        addBookTtle->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Century Gothic\";"));
        addBookTtle->setAlignment(Qt::AlignCenter);
        ImageFrame->raise();
        addBookTabFrame->raise();
        addstatus->raise();
        AddBookFormFrame->raise();
        btnloadbookimage->raise();
        splitter->raise();

        retranslateUi(addbook);

        QMetaObject::connectSlotsByName(addbook);
    } // setupUi

    void retranslateUi(QDialog *addbook)
    {
        addbook->setWindowTitle(QCoreApplication::translate("addbook", "Dialog", nullptr));
        addstatus->setPlaceholderText(QCoreApplication::translate("addbook", "Status", nullptr));
        txtaddbook->setPlaceholderText(QCoreApplication::translate("addbook", "Title", nullptr));
        txtaddauthor->setPlaceholderText(QCoreApplication::translate("addbook", "Author", nullptr));
        txtadddewey->setPlaceholderText(QCoreApplication::translate("addbook", "Dewey", nullptr));
        txtaddid->setPlaceholderText(QCoreApplication::translate("addbook", "Book ID", nullptr));
        bookCopyLabel->setText(QCoreApplication::translate("addbook", "Book Status:", nullptr));
        btnloadbookimage->setText(QCoreApplication::translate("addbook", "Upload Image", nullptr));
        tabletButton->setText(QString());
        lblImage->setText(QString());
        addbookimagebox->setText(QString());
        btnsavebook->setText(QCoreApplication::translate("addbook", "Save", nullptr));
        addBookTtle->setText(QCoreApplication::translate("addbook", "ADD BOOK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addbook: public Ui_addbook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOK_H
