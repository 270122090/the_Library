/********************************************************************************
** Form generated from reading UI file 'addbook.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
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
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AddBook
{
public:
    QFrame *frame;
    QPushButton *btnloadbookimage;
    QLineEdit *txtaddbook;
    QLineEdit *txtaddauthor;
    QLineEdit *txtaddid;
    QFrame *AddBookFormFrame;
    QLineEdit *txtaddStatus;
    QLineEdit *txtadddewey;
    QSpinBox *spinQty;
    QLabel *label_6;
    QFrame *addBookTabFrame;
    QLabel *label;
    QLabel *addbookimagebox;
    QFrame *ImageFrame;
    QPushButton *btnsavebook;

    void setupUi(QDialog *AddBook)
    {
        if (AddBook->objectName().isEmpty())
            AddBook->setObjectName(QString::fromUtf8("AddBook"));
        AddBook->resize(1315, 641);
        frame = new QFrame(AddBook);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(130, 20, 1001, 611));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        btnloadbookimage = new QPushButton(frame);
        btnloadbookimage->setObjectName(QString::fromUtf8("btnloadbookimage"));
        btnloadbookimage->setGeometry(QRect(610, 90, 141, 31));
        btnloadbookimage->setStyleSheet(QString::fromUtf8("/*-----QPushButton-----*/\n"
"QPushButton\n"
"{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(37, 147, 194, 255), stop:1 rgba(45, 196, 226, 255));\n"
"color: black;\n"
"font: 8pt \"Century Gothic\";\n"
"min-width: 80px;\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"/*border-radius: 10px;*/\n"
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
        txtaddbook = new QLineEdit(frame);
        txtaddbook->setObjectName(QString::fromUtf8("txtaddbook"));
        txtaddbook->setGeometry(QRect(290, 110, 271, 31));
        txtaddbook->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border:none;\n"
"color: white;\n"
"font: 12pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius:none;"));
        txtaddauthor = new QLineEdit(frame);
        txtaddauthor->setObjectName(QString::fromUtf8("txtaddauthor"));
        txtaddauthor->setGeometry(QRect(290, 150, 271, 31));
        txtaddauthor->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border:none;\n"
"color: white;\n"
"font: 12pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius:none;"));
        txtaddid = new QLineEdit(frame);
        txtaddid->setObjectName(QString::fromUtf8("txtaddid"));
        txtaddid->setGeometry(QRect(290, 270, 271, 31));
        txtaddid->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border:none;\n"
"color: white;\n"
"font: 12pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius:none;"));
        AddBookFormFrame = new QFrame(frame);
        AddBookFormFrame->setObjectName(QString::fromUtf8("AddBookFormFrame"));
        AddBookFormFrame->setGeometry(QRect(260, 90, 331, 291));
        AddBookFormFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 52, 61);\n"
"border-radius: 16px;"));
        AddBookFormFrame->setFrameShape(QFrame::StyledPanel);
        AddBookFormFrame->setFrameShadow(QFrame::Raised);
        txtaddStatus = new QLineEdit(AddBookFormFrame);
        txtaddStatus->setObjectName(QString::fromUtf8("txtaddStatus"));
        txtaddStatus->setGeometry(QRect(30, 140, 271, 31));
        txtaddStatus->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border:none;\n"
"color: white;\n"
"font: 12pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius:none;"));
        txtadddewey = new QLineEdit(AddBookFormFrame);
        txtadddewey->setObjectName(QString::fromUtf8("txtadddewey"));
        txtadddewey->setGeometry(QRect(30, 100, 271, 31));
        txtadddewey->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border:none;\n"
"color: white;\n"
"font: 12pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius:none;"));
        spinQty = new QSpinBox(AddBookFormFrame);
        spinQty->setObjectName(QString::fromUtf8("spinQty"));
        spinQty->setGeometry(QRect(190, 230, 111, 22));
        spinQty->setStyleSheet(QString::fromUtf8("/*-----QDoubleSpinBox -*/\n"
"QSpinBox \n"
"{\n"
"	background-color: #242424;\n"
"	color : #fff;\n"
"	border: 1px solid #1d1d1d;\n"
"	border-radius: 4px;\n"
"	padding: 3px;\n"
"	padding-left: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::up-button\n"
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
"QSpinBox::up-button:hover\n"
"{\n"
"	background-color: #585858;\n"
"\n"
"}\n"
"\n"
"QSpinBox::up-button:pressed\n"
"{\n"
"	background-color: #252525;\n"
"    width: 16px; \n"
"    border-width: 1px;\n"
"\n"
"}\n"
"\n"
"\n"
" QSpinBox::up-arrow\n"
"{\n"
"    image: url(://arrow-up.png);\n"
"    width: 7px;\n"
"    height: 7px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::down-button\n"
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
"QSpinBox::down-button:hover\n"
"{\n"
"	background-color"
                        ": #585858;\n"
"\n"
"}\n"
"\n"
"\n"
" QSpinBox::down-button:pressed\n"
"{\n"
"	background-color: #252525;\n"
"    width: 16px; \n"
"    border-width: 1px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::down-arrow\n"
"{\n"
"    image: url(://arrow-down.png);\n"
"    width: 7px;\n"
"    height: 7px;\n"
"\n"
"}"));
        label_6 = new QLabel(AddBookFormFrame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 230, 131, 21));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(193, 193, 193);\n"
"font: 12pt \"Century Gothic\";"));
        addBookTabFrame = new QFrame(frame);
        addBookTabFrame->setObjectName(QString::fromUtf8("addBookTabFrame"));
        addBookTabFrame->setGeometry(QRect(260, 54, 191, 61));
        addBookTabFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 58, 68);\n"
"border-radius: 16px;"));
        addBookTabFrame->setFrameShape(QFrame::StyledPanel);
        addBookTabFrame->setFrameShadow(QFrame::Raised);
        label = new QLabel(addBookTabFrame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 171, 21));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Century Gothic\";"));
        label->setAlignment(Qt::AlignCenter);
        addbookimagebox = new QLabel(frame);
        addbookimagebox->setObjectName(QString::fromUtf8("addbookimagebox"));
        addbookimagebox->setGeometry(QRect(619, 159, 131, 191));
        addbookimagebox->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 135);\n"
"border: none;"));
        addbookimagebox->setFrameShape(QFrame::Box);
        ImageFrame = new QFrame(frame);
        ImageFrame->setObjectName(QString::fromUtf8("ImageFrame"));
        ImageFrame->setGeometry(QRect(600, 130, 171, 251));
        ImageFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 52, 61);\n"
"border-radius: 16px;"));
        ImageFrame->setFrameShape(QFrame::StyledPanel);
        ImageFrame->setFrameShadow(QFrame::Raised);
        btnsavebook = new QPushButton(frame);
        btnsavebook->setObjectName(QString::fromUtf8("btnsavebook"));
        btnsavebook->setGeometry(QRect(270, 400, 501, 31));
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
        ImageFrame->raise();
        addBookTabFrame->raise();
        AddBookFormFrame->raise();
        btnloadbookimage->raise();
        txtaddbook->raise();
        txtaddauthor->raise();
        txtaddid->raise();
        addbookimagebox->raise();

        retranslateUi(AddBook);

        QMetaObject::connectSlotsByName(AddBook);
    } // setupUi

    void retranslateUi(QDialog *AddBook)
    {
        AddBook->setWindowTitle(QApplication::translate("AddBook", "Dialog", nullptr));
        btnloadbookimage->setText(QApplication::translate("AddBook", "Upload Image", nullptr));
        txtaddbook->setText(QString());
        txtaddbook->setPlaceholderText(QApplication::translate("AddBook", "Title", nullptr));
        txtaddauthor->setText(QString());
        txtaddauthor->setPlaceholderText(QApplication::translate("AddBook", "Author", nullptr));
        txtaddid->setText(QString());
        txtaddid->setPlaceholderText(QApplication::translate("AddBook", "Book ID", nullptr));
        txtaddStatus->setText(QString());
        txtaddStatus->setPlaceholderText(QApplication::translate("AddBook", "Status", nullptr));
        txtadddewey->setText(QString());
        txtadddewey->setPlaceholderText(QApplication::translate("AddBook", "Dewey", nullptr));
        label_6->setText(QApplication::translate("AddBook", "Number of Books", nullptr));
        label->setText(QApplication::translate("AddBook", "ADD BOOK", nullptr));
        addbookimagebox->setText(QString());
        btnsavebook->setText(QApplication::translate("AddBook", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddBook: public Ui_AddBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOK_H
