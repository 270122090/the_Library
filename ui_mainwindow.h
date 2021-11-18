/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *LoadMembersList;
    QAction *LoadBookList;
    QAction *LoadiBookList;
    QAction *LoadiMemberList;
    QAction *LoadoBookList;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *Home;
    QFrame *frame;
    QPushButton *btnIssueSearch;
    QLabel *label_26;
    QLabel *label_27;
    QListWidget *listSomething;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QFrame *frame_2;
    QPushButton *btniSearchBook;
    QLineEdit *txtiSearchBook;
    QLabel *label_31;
    QLabel *label_32;
    QListWidget *listiBooks;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLineEdit *iBookTitle;
    QLineEdit *iStatus;
    QLineEdit *txtiDate;
    QLineEdit *txtiDue;
    QLineEdit *inewStatus;
    QFrame *frame_3;
    QPushButton *btniSearchMember;
    QLineEdit *txtiSearchMember;
    QLabel *label_36;
    QLabel *label_37;
    QListWidget *listiMember;
    QLineEdit *txtiMemberName;
    QLineEdit *txtiMemberNumber;
    QPushButton *btnissuebook_2;
    QPushButton *btnissuedone;
    QLabel *addBookTtle_4;
    QLabel *addBookTtle_5;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_38;
    QLabel *label_8;
    QLabel *label_39;
    QWidget *Books;
    QFrame *addBookTabFrame_3;
    QLabel *addBookTtle_3;
    QFrame *frame_7;
    QListWidget *listBooks;
    QPushButton *btnSearchBook;
    QLineEdit *txtSearchBook;
    QLabel *label_17;
    QLabel *lbl_ID;
    QLabel *lblBookTitle;
    QLabel *lblDewey;
    QLabel *label_19;
    QLabel *label_24;
    QLabel *lblStatus;
    QLabel *label_16;
    QLabel *label_18;
    QLabel *lbldd;
    QLabel *label_21;
    QLabel *lblAuthor;
    QLabel *lblImage;
    QFrame *frame_9;
    QPushButton *btnRemoveBook;
    QFrame *ImageFrame;
    QToolButton *tabletButton;
    QPushButton *btnissuebook;
    QPushButton *btnUpdateBook;
    QPushButton *btnAddBook;
    QLabel *label_20;
    QLabel *label_23;
    QLabel *label_2;
    QLabel *label_25;
    QLabel *label_4;
    QLabel *label_3;
    QWidget *tab;
    QFrame *frame_5;
    QLabel *label_22;
    QListWidget *listMember;
    QLineEdit *txtSearchMember;
    QPushButton *btnSearchMember;
    QFrame *addBookTabFrame;
    QLabel *addBookTtle;
    QPushButton *btnAddMember;
    QFrame *frame_8;
    QLabel *label_43;
    QLabel *label_44;
    QLabel *label_45;
    QLineEdit *lblMemberBook1;
    QLineEdit *lblMemberBook2;
    QLineEdit *lblMemberBook3;
    QFrame *addBookTabFrame_2;
    QLabel *addBookTtle_2;
    QFrame *frame_6;
    QLabel *lblMemberName;
    QLabel *lblMemberNumber;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *lblMemberEmail;
    QLabel *label_14;
    QPushButton *btnEditMember;
    QLabel *label_13;
    QLabel *label_49;
    QLabel *label_15;
    QLabel *label_50;
    QWidget *Report;
    QListWidget *listoBooks;
    QPushButton *btnReminder;
    QLabel *label_48;
    QMenuBar *menubar;
    QMenu *menuAdmin_Centre;
    QMenu *menuautoLoads;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1342, 869);
        LoadMembersList = new QAction(MainWindow);
        LoadMembersList->setObjectName(QString::fromUtf8("LoadMembersList"));
        LoadBookList = new QAction(MainWindow);
        LoadBookList->setObjectName(QString::fromUtf8("LoadBookList"));
        LoadiBookList = new QAction(MainWindow);
        LoadiBookList->setObjectName(QString::fromUtf8("LoadiBookList"));
        LoadiMemberList = new QAction(MainWindow);
        LoadiMemberList->setObjectName(QString::fromUtf8("LoadiMemberList"));
        LoadoBookList = new QAction(MainWindow);
        LoadoBookList->setObjectName(QString::fromUtf8("LoadoBookList"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 1311, 811));
        Home = new QWidget();
        Home->setObjectName(QString::fromUtf8("Home"));
        frame = new QFrame(Home);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(15, 33, 521, 711));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 52, 61);\n"
"border-radius: 16px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        btnIssueSearch = new QPushButton(frame);
        btnIssueSearch->setObjectName(QString::fromUtf8("btnIssueSearch"));
        btnIssueSearch->setGeometry(QRect(380, 50, 101, 31));
        btnIssueSearch->setCursor(QCursor(Qt::OpenHandCursor));
        btnIssueSearch->setMouseTracking(true);
        btnIssueSearch->setStyleSheet(QString::fromUtf8("/*background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(54, 110, 140, 255), stop:0.747191 rgba(145, 192, 216, 255));\n"
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
        label_26 = new QLabel(frame);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(61, 138, 131, 35));
        QFont font;
        font.setFamilies({QString::fromUtf8("Century Gothic")});
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        label_26->setFont(font);
        label_26->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius: none;"));
        label_27 = new QLabel(frame);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(62, 97, 121, 36));
        label_27->setFont(font);
        label_27->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius: none;"));
        listSomething = new QListWidget(frame);
        listSomething->setObjectName(QString::fromUtf8("listSomething"));
        listSomething->setGeometry(QRect(40, 200, 441, 311));
        listSomething->setStyleSheet(QString::fromUtf8("background-color: rgb(95, 95, 112);"));
        label_28 = new QLabel(frame);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(60, 580, 131, 35));
        label_28->setFont(font);
        label_28->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius: none;"));
        label_29 = new QLabel(frame);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(61, 539, 121, 36));
        label_29->setFont(font);
        label_29->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius: none;"));
        label_30 = new QLabel(frame);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(57, 623, 141, 35));
        label_30->setFont(font);
        label_30->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius: none;"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 521, 711));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 52, 61);\n"
"border-radius: 16px;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        btniSearchBook = new QPushButton(frame_2);
        btniSearchBook->setObjectName(QString::fromUtf8("btniSearchBook"));
        btniSearchBook->setGeometry(QRect(380, 36, 101, 31));
        btniSearchBook->setCursor(QCursor(Qt::OpenHandCursor));
        btniSearchBook->setMouseTracking(true);
        btniSearchBook->setStyleSheet(QString::fromUtf8("/*background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(54, 110, 140, 255), stop:0.747191 rgba(145, 192, 216, 255));\n"
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
        txtiSearchBook = new QLineEdit(frame_2);
        txtiSearchBook->setObjectName(QString::fromUtf8("txtiSearchBook"));
        txtiSearchBook->setGeometry(QRect(50, 36, 321, 31));
        txtiSearchBook->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        txtiSearchBook->setFrame(false);
        txtiSearchBook->setClearButtonEnabled(true);
        label_31 = new QLabel(frame_2);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(61, 131, 91, 35));
        label_31->setFont(font);
        label_31->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius: none;"));
        label_32 = new QLabel(frame_2);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(62, 90, 91, 36));
        label_32->setFont(font);
        label_32->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius: none;"));
        listiBooks = new QListWidget(frame_2);
        listiBooks->setObjectName(QString::fromUtf8("listiBooks"));
        listiBooks->setGeometry(QRect(40, 200, 441, 311));
        listiBooks->setStyleSheet(QString::fromUtf8("background-color: rgb(95, 95, 112);\n"
"color: rgb(255, 255, 255);\n"
"padding-top: 5px;\n"
"padding-left: 10px;\n"
"padding-right: 10px;"));
        label_33 = new QLabel(frame_2);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(60, 580, 141, 35));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Century Gothic")});
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        label_33->setFont(font1);
        label_33->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius: none;"));
        label_34 = new QLabel(frame_2);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(61, 539, 141, 36));
        label_34->setFont(font1);
        label_34->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius: none;"));
        label_35 = new QLabel(frame_2);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(59, 623, 141, 35));
        label_35->setFont(font1);
        label_35->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius: none;"));
        iBookTitle = new QLineEdit(frame_2);
        iBookTitle->setObjectName(QString::fromUtf8("iBookTitle"));
        iBookTitle->setGeometry(QRect(152, 95, 301, 31));
        iBookTitle->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border:none;\n"
"color: rgb(193, 193, 193);\n"
"font: 15pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius:none;"));
        iStatus = new QLineEdit(frame_2);
        iStatus->setObjectName(QString::fromUtf8("iStatus"));
        iStatus->setGeometry(QRect(149, 135, 301, 31));
        iStatus->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border:none;\n"
"color: rgb(193, 193, 193);\n"
"font: 15pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius:none;"));
        txtiDate = new QLineEdit(frame_2);
        txtiDate->setObjectName(QString::fromUtf8("txtiDate"));
        txtiDate->setGeometry(QRect(197, 544, 261, 31));
        txtiDate->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border:none;\n"
"color: rgb(193, 193, 193);\n"
"font: 15pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius:none;"));
        txtiDue = new QLineEdit(frame_2);
        txtiDue->setObjectName(QString::fromUtf8("txtiDue"));
        txtiDue->setGeometry(QRect(196, 584, 261, 31));
        txtiDue->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border:none;\n"
"color: rgb(193, 193, 193);\n"
"font: 15pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius:none;"));
        inewStatus = new QLineEdit(frame_2);
        inewStatus->setObjectName(QString::fromUtf8("inewStatus"));
        inewStatus->setGeometry(QRect(193, 627, 261, 31));
        inewStatus->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border:none;\n"
"color: rgb(193, 193, 193);\n"
"font: 15pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius:none;"));
        btniSearchBook->raise();
        txtiSearchBook->raise();
        label_31->raise();
        label_32->raise();
        label_33->raise();
        label_34->raise();
        label_35->raise();
        iBookTitle->raise();
        iStatus->raise();
        txtiDate->raise();
        txtiDue->raise();
        inewStatus->raise();
        listiBooks->raise();
        frame_3 = new QFrame(Home);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(545, 35, 521, 711));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 52, 61);\n"
"border-radius: 16px;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        btniSearchMember = new QPushButton(frame_3);
        btniSearchMember->setObjectName(QString::fromUtf8("btniSearchMember"));
        btniSearchMember->setGeometry(QRect(380, 36, 101, 31));
        btniSearchMember->setCursor(QCursor(Qt::OpenHandCursor));
        btniSearchMember->setMouseTracking(true);
        btniSearchMember->setStyleSheet(QString::fromUtf8("/*background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(54, 110, 140, 255), stop:0.747191 rgba(145, 192, 216, 255));\n"
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
        txtiSearchMember = new QLineEdit(frame_3);
        txtiSearchMember->setObjectName(QString::fromUtf8("txtiSearchMember"));
        txtiSearchMember->setGeometry(QRect(50, 36, 321, 31));
        txtiSearchMember->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        txtiSearchMember->setFrame(false);
        txtiSearchMember->setClearButtonEnabled(true);
        label_36 = new QLabel(frame_3);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(61, 131, 111, 35));
        label_36->setFont(font);
        label_36->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius: none;"));
        label_37 = new QLabel(frame_3);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(62, 90, 101, 36));
        label_37->setFont(font);
        label_37->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius: none;"));
        listiMember = new QListWidget(frame_3);
        listiMember->setObjectName(QString::fromUtf8("listiMember"));
        listiMember->setGeometry(QRect(40, 200, 441, 311));
        listiMember->setStyleSheet(QString::fromUtf8("background-color: rgb(95, 95, 112);\n"
"color: rgb(255, 255, 255);\n"
"padding-top: 5px;\n"
"padding-left: 10px;\n"
"padding-right: 10px;"));
        txtiMemberName = new QLineEdit(frame_3);
        txtiMemberName->setObjectName(QString::fromUtf8("txtiMemberName"));
        txtiMemberName->setGeometry(QRect(163, 95, 281, 31));
        txtiMemberName->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border:none;\n"
"color: rgb(193, 193, 193);\n"
"font: 15pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius:none;"));
        txtiMemberNumber = new QLineEdit(frame_3);
        txtiMemberNumber->setObjectName(QString::fromUtf8("txtiMemberNumber"));
        txtiMemberNumber->setGeometry(QRect(166, 135, 281, 31));
        txtiMemberNumber->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border:none;\n"
"color: rgb(193, 193, 193);\n"
"font: 15pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius:none;"));
        btnissuebook_2 = new QPushButton(frame_3);
        btnissuebook_2->setObjectName(QString::fromUtf8("btnissuebook_2"));
        btnissuebook_2->setGeometry(QRect(50, 558, 191, 91));
        btnissuebook_2->setCursor(QCursor(Qt::OpenHandCursor));
        btnissuebook_2->setMouseTracking(true);
        btnissuebook_2->setStyleSheet(QString::fromUtf8("/*background: rgba(40, 83, 107, 1);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: white;*/\n"
"\n"
"/*background-color: rgb(52, 52, 61);\n"
"border-color: rgb(135, 83, 72);\n"
"border-radius:14px;\n"
"font: 8pt \"Nirmala UI\";\n"
"color: black;*/\n"
"\n"
"/*-----QPushButton-----*/\n"
"QPushButton\n"
"{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0.0995025 rgba(31, 168, 136, 255), stop:1 rgba(32, 197, 180, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"Century Gothic\";\n"
"min-width: 80px;\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 14px;\n"
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
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0.0995025 rgba(38, "
                        "208, 171, 255), stop:1 rgba(36, 222, 206, 255));\n"
"border: 1px solid rgb(41, 170, 182);}"));
        btnissuedone = new QPushButton(frame_3);
        btnissuedone->setObjectName(QString::fromUtf8("btnissuedone"));
        btnissuedone->setGeometry(QRect(270, 557, 201, 91));
        btnissuedone->setCursor(QCursor(Qt::OpenHandCursor));
        btnissuedone->setMouseTracking(true);
        btnissuedone->setStyleSheet(QString::fromUtf8("/*background: rgba(40, 83, 107, 1);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: white;*/\n"
"\n"
"/*background-color: rgb(52, 52, 61);\n"
"border-color: rgb(135, 83, 72);\n"
"border-radius:14px;\n"
"font: 8pt \"Nirmala UI\";\n"
"color: black;*/\n"
"\n"
"/*-----QPushButton-----*/\n"
"QPushButton\n"
"{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0.0995025 rgba(31, 168, 136, 255), stop:1 rgba(32, 197, 180, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"Century Gothic\";\n"
"min-width: 80px;\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 14px;\n"
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
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0.0995025 rgba(38, "
                        "208, 171, 255), stop:1 rgba(36, 222, 206, 255));\n"
"border: 1px solid rgb(41, 170, 182);}"));
        listiMember->raise();
        btniSearchMember->raise();
        txtiSearchMember->raise();
        label_36->raise();
        label_37->raise();
        txtiMemberName->raise();
        txtiMemberNumber->raise();
        btnissuebook_2->raise();
        btnissuedone->raise();
        addBookTtle_4 = new QLabel(Home);
        addBookTtle_4->setObjectName(QString::fromUtf8("addBookTtle_4"));
        addBookTtle_4->setGeometry(QRect(41, 15, 31, 21));
        addBookTtle_4->setFont(font);
        addBookTtle_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 12pt \"Century Gothic\";"));
        addBookTtle_4->setAlignment(Qt::AlignCenter);
        addBookTtle_5 = new QLabel(Home);
        addBookTtle_5->setObjectName(QString::fromUtf8("addBookTtle_5"));
        addBookTtle_5->setGeometry(QRect(568, 17, 31, 21));
        addBookTtle_5->setFont(font);
        addBookTtle_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 12pt \"Century Gothic\";"));
        addBookTtle_5->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(Home);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(21, 8, 61, 51));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/resources/Decorations/orangeBookmark.png")));
        label_5->setScaledContents(true);
        label_6 = new QLabel(Home);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(550, 10, 61, 51));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/resources/Decorations/orangeBookmark.png")));
        label_6->setScaledContents(true);
        label_7 = new QLabel(Home);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(607, 615, 51, 51));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/resources/Decorations/issueBook.png")));
        label_7->setScaledContents(true);
        label_38 = new QLabel(Home);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(655, 622, 121, 36));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Century Gothic")});
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(false);
        label_38->setFont(font2);
        label_38->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 75 10pt \"Century Gothic\";"));
        label_38->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(Home);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(826, 616, 41, 41));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/resources/Decorations/issueAnother.png")));
        label_8->setScaledContents(true);
        label_39 = new QLabel(Home);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(869, 620, 141, 36));
        label_39->setFont(font2);
        label_39->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 75 10pt \"Century Gothic\";"));
        label_39->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(Home, QString());
        frame->raise();
        frame_3->raise();
        label_5->raise();
        addBookTtle_4->raise();
        label_6->raise();
        addBookTtle_5->raise();
        label_7->raise();
        label_38->raise();
        label_8->raise();
        label_39->raise();
        Books = new QWidget();
        Books->setObjectName(QString::fromUtf8("Books"));
        addBookTabFrame_3 = new QFrame(Books);
        addBookTabFrame_3->setObjectName(QString::fromUtf8("addBookTabFrame_3"));
        addBookTabFrame_3->setGeometry(QRect(30, 21, 191, 61));
        addBookTabFrame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 58, 68);\n"
"border-radius: 16px;"));
        addBookTabFrame_3->setFrameShape(QFrame::StyledPanel);
        addBookTabFrame_3->setFrameShadow(QFrame::Raised);
        addBookTtle_3 = new QLabel(addBookTabFrame_3);
        addBookTtle_3->setObjectName(QString::fromUtf8("addBookTtle_3"));
        addBookTtle_3->setGeometry(QRect(11, 9, 171, 21));
        addBookTtle_3->setFont(font);
        addBookTtle_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Century Gothic\";"));
        addBookTtle_3->setAlignment(Qt::AlignCenter);
        frame_7 = new QFrame(Books);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(30, 60, 491, 611));
        frame_7->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 52, 61);\n"
"border-radius: 16px;"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        listBooks = new QListWidget(frame_7);
        listBooks->setObjectName(QString::fromUtf8("listBooks"));
        listBooks->setGeometry(QRect(30, 90, 431, 491));
        listBooks->setStyleSheet(QString::fromUtf8("background-color: rgb(95, 95, 112);\n"
"color: rgb(255, 255, 255);\n"
"padding-top: 5px;\n"
"padding-left: 10px;\n"
"padding-right: 10px;"));
        btnSearchBook = new QPushButton(frame_7);
        btnSearchBook->setObjectName(QString::fromUtf8("btnSearchBook"));
        btnSearchBook->setGeometry(QRect(360, 30, 101, 31));
        btnSearchBook->setCursor(QCursor(Qt::OpenHandCursor));
        btnSearchBook->setMouseTracking(true);
        btnSearchBook->setStyleSheet(QString::fromUtf8("/*background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(54, 110, 140, 255), stop:0.747191 rgba(145, 192, 216, 255));\n"
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
        txtSearchBook = new QLineEdit(frame_7);
        txtSearchBook->setObjectName(QString::fromUtf8("txtSearchBook"));
        txtSearchBook->setGeometry(QRect(30, 30, 321, 31));
        txtSearchBook->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        txtSearchBook->setFrame(false);
        txtSearchBook->setClearButtonEnabled(true);
        label_17 = new QLabel(Books);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(569, 316, 51, 36));
        label_17->setFont(font);
        label_17->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Century Gothic\";"));
        lbl_ID = new QLabel(Books);
        lbl_ID->setObjectName(QString::fromUtf8("lbl_ID"));
        lbl_ID->setGeometry(QRect(695, 441, 241, 36));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Century Gothic")});
        font3.setPointSize(15);
        font3.setBold(false);
        font3.setItalic(false);
        lbl_ID->setFont(font3);
        lbl_ID->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border:none;\n"
"color: rgb(193, 193, 193);\n"
"font: 15pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius:none;"));
        lbl_ID->setFrameShape(QFrame::Panel);
        lblBookTitle = new QLabel(Books);
        lblBookTitle->setObjectName(QString::fromUtf8("lblBookTitle"));
        lblBookTitle->setGeometry(QRect(695, 313, 241, 36));
        lblBookTitle->setFont(font3);
        lblBookTitle->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border:none;\n"
"color: rgb(193, 193, 193);\n"
"font: 15pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius:none;"));
        lblBookTitle->setFrameShape(QFrame::Panel);
        lblDewey = new QLabel(Books);
        lblDewey->setObjectName(QString::fromUtf8("lblDewey"));
        lblDewey->setGeometry(QRect(695, 398, 241, 36));
        lblDewey->setFont(font3);
        lblDewey->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border:none;\n"
"color: rgb(193, 193, 193);\n"
"font: 15pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius:none;"));
        lblDewey->setFrameShape(QFrame::Panel);
        label_19 = new QLabel(Books);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(567, 487, 71, 35));
        label_19->setFont(font);
        label_19->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Century Gothic\";"));
        label_24 = new QLabel(Books);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(566, 532, 111, 36));
        label_24->setFont(font);
        label_24->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Century Gothic\";"));
        lblStatus = new QLabel(Books);
        lblStatus->setObjectName(QString::fromUtf8("lblStatus"));
        lblStatus->setGeometry(QRect(695, 484, 241, 35));
        lblStatus->setFont(font3);
        lblStatus->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border:none;\n"
"color: rgb(193, 193, 193);\n"
"font: 15pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius:none;"));
        lblStatus->setFrameShape(QFrame::Panel);
        label_16 = new QLabel(Books);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(567, 359, 71, 35));
        label_16->setFont(font);
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Century Gothic\";"));
        label_18 = new QLabel(Books);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(567, 443, 81, 36));
        label_18->setFont(font);
        label_18->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Century Gothic\";"));
        lbldd = new QLabel(Books);
        lbldd->setObjectName(QString::fromUtf8("lbldd"));
        lbldd->setGeometry(QRect(694, 526, 241, 36));
        lbldd->setFont(font3);
        lbldd->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border:none;\n"
"color: rgb(193, 193, 193);\n"
"font: 15pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius:none;"));
        lbldd->setFrameShape(QFrame::Panel);
        label_21 = new QLabel(Books);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(567, 400, 81, 36));
        label_21->setFont(font);
        label_21->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Century Gothic\";"));
        lblAuthor = new QLabel(Books);
        lblAuthor->setObjectName(QString::fromUtf8("lblAuthor"));
        lblAuthor->setGeometry(QRect(695, 356, 241, 35));
        lblAuthor->setFont(font3);
        lblAuthor->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border:none;\n"
"color: rgb(193, 193, 193);\n"
"font: 15pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius:none;"));
        lblAuthor->setFrameShape(QFrame::Panel);
        lblImage = new QLabel(Books);
        lblImage->setObjectName(QString::fromUtf8("lblImage"));
        lblImage->setGeometry(QRect(996, 334, 141, 201));
        lblImage->setStyleSheet(QString::fromUtf8("background-color: rgb(95, 95, 112);\n"
"border:none;"));
        lblImage->setFrameShape(QFrame::Box);
        frame_9 = new QFrame(Books);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setGeometry(QRect(530, 260, 661, 411));
        frame_9->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 52, 61);\n"
"border-radius: 16px;"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        btnRemoveBook = new QPushButton(frame_9);
        btnRemoveBook->setObjectName(QString::fromUtf8("btnRemoveBook"));
        btnRemoveBook->setGeometry(QRect(452, 344, 171, 31));
        btnRemoveBook->setCursor(QCursor(Qt::OpenHandCursor));
        btnRemoveBook->setMouseTracking(true);
        btnRemoveBook->setStyleSheet(QString::fromUtf8("background-color: rgb(208, 0, 0);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 15px;"));
        ImageFrame = new QFrame(frame_9);
        ImageFrame->setObjectName(QString::fromUtf8("ImageFrame"));
        ImageFrame->setGeometry(QRect(452, 57, 171, 251));
        ImageFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(72, 72, 85);\n"
"border-radius: 16px;"));
        ImageFrame->setFrameShape(QFrame::StyledPanel);
        ImageFrame->setFrameShadow(QFrame::Raised);
        tabletButton = new QToolButton(ImageFrame);
        tabletButton->setObjectName(QString::fromUtf8("tabletButton"));
        tabletButton->setGeometry(QRect(75, 225, 21, 21));
        tabletButton->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: rgb(37, 149, 195);"));
        tabletButton->setIconSize(QSize(64, 64));
        btnissuebook = new QPushButton(Books);
        btnissuebook->setObjectName(QString::fromUtf8("btnissuebook"));
        btnissuebook->setGeometry(QRect(978, 61, 211, 191));
        btnissuebook->setCursor(QCursor(Qt::OpenHandCursor));
        btnissuebook->setMouseTracking(true);
        btnissuebook->setStyleSheet(QString::fromUtf8("/*background: rgba(40, 83, 107, 1);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: white;*/\n"
"\n"
"/*background-color: rgb(52, 52, 61);\n"
"border-color: rgb(135, 83, 72);\n"
"border-radius:14px;\n"
"font: 8pt \"Nirmala UI\";\n"
"color: black;*/\n"
"\n"
"/*-----QPushButton-----*/\n"
"QPushButton\n"
"{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0.0995025 rgba(31, 168, 136, 255), stop:1 rgba(32, 197, 180, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"Century Gothic\";\n"
"min-width: 80px;\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 14px;\n"
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
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0.0995025 rgba(38, "
                        "208, 171, 255), stop:1 rgba(36, 222, 206, 255));\n"
"border: 1px solid rgb(41, 170, 182);}"));
        btnUpdateBook = new QPushButton(Books);
        btnUpdateBook->setObjectName(QString::fromUtf8("btnUpdateBook"));
        btnUpdateBook->setGeometry(QRect(754, 60, 211, 191));
        btnUpdateBook->setCursor(QCursor(Qt::OpenHandCursor));
        btnUpdateBook->setStyleSheet(QString::fromUtf8("/*background: rgba(40, 83, 107, 1);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: white;*/\n"
"\n"
"/*background-color: rgb(52, 52, 61);\n"
"border-color: rgb(135, 83, 72);\n"
"border-radius:14px;\n"
"font: 8pt \"Nirmala UI\";\n"
"color: black;*/\n"
"\n"
"/*-----QPushButton-----*/\n"
"QPushButton\n"
"{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0.0995025 rgba(31, 168, 136, 255), stop:1 rgba(32, 197, 180, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"Century Gothic\";\n"
"min-width: 80px;\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 14px;\n"
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
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0.0995025 rgba(38, "
                        "208, 171, 255), stop:1 rgba(36, 222, 206, 255));\n"
"border: 1px solid rgb(41, 170, 182);}"));
        btnAddBook = new QPushButton(Books);
        btnAddBook->setObjectName(QString::fromUtf8("btnAddBook"));
        btnAddBook->setGeometry(QRect(530, 60, 211, 191));
        btnAddBook->setCursor(QCursor(Qt::OpenHandCursor));
        btnAddBook->setMouseTracking(true);
        btnAddBook->setStyleSheet(QString::fromUtf8("/*background: rgba(40, 83, 107, 1);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: white;*/\n"
"\n"
"/*background-color: rgb(52, 52, 61);\n"
"border-color: rgb(135, 83, 72);\n"
"border-radius:14px;\n"
"font: 8pt \"Nirmala UI\";\n"
"color: black;*/\n"
"\n"
"/*-----QPushButton-----*/\n"
"QPushButton\n"
"{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0.0995025 rgba(31, 168, 136, 255), stop:1 rgba(32, 197, 180, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"Century Gothic\";\n"
"min-width: 80px;\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 14px;\n"
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
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0.0995025 rgba(38, "
                        "208, 171, 255), stop:1 rgba(36, 222, 206, 255));\n"
"border: 1px solid rgb(41, 170, 182);}"));
        label_20 = new QLabel(Books);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(543, 188, 181, 36));
        label_20->setFont(font);
        label_20->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 75 12pt \"Century Gothic\";"));
        label_20->setAlignment(Qt::AlignCenter);
        label_23 = new QLabel(Books);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(994, 191, 181, 36));
        label_23->setFont(font);
        label_23->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 75 12pt \"Century Gothic\";"));
        label_23->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Books);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1045, 100, 81, 81));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/resources/Decorations/returnBook.png")));
        label_2->setScaledContents(true);
        label_25 = new QLabel(Books);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(767, 191, 181, 36));
        label_25->setFont(font);
        label_25->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 75 12pt \"Century Gothic\";"));
        label_25->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(Books);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(590, 89, 81, 81));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/resources/Decorations/openBook.png")));
        label_4->setScaledContents(true);
        label_3 = new QLabel(Books);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(816, 97, 81, 81));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/resources/Decorations/editBook.png")));
        label_3->setScaledContents(true);
        tabWidget->addTab(Books, QString());
        frame_9->raise();
        addBookTabFrame_3->raise();
        frame_7->raise();
        label_17->raise();
        lbl_ID->raise();
        lblBookTitle->raise();
        lblDewey->raise();
        label_19->raise();
        label_24->raise();
        lblStatus->raise();
        label_16->raise();
        label_18->raise();
        lbldd->raise();
        label_21->raise();
        lblAuthor->raise();
        lblImage->raise();
        btnissuebook->raise();
        btnUpdateBook->raise();
        btnAddBook->raise();
        label_20->raise();
        label_23->raise();
        label_2->raise();
        label_25->raise();
        label_4->raise();
        label_3->raise();
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        frame_5 = new QFrame(tab);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(40, 70, 491, 611));
        frame_5->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 52, 61);\n"
"border-radius: 16px;"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_22 = new QLabel(frame_5);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(40, 100, 51, 21));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Nirmala UI")});
        font4.setPointSize(10);
        font4.setBold(false);
        font4.setItalic(false);
        label_22->setFont(font4);
        label_22->setStyleSheet(QString::fromUtf8("font: 10pt \"Nirmala UI\";\n"
"color: rgb(255, 255, 255);"));
        listMember = new QListWidget(frame_5);
        listMember->setObjectName(QString::fromUtf8("listMember"));
        listMember->setGeometry(QRect(30, 130, 431, 451));
        listMember->setStyleSheet(QString::fromUtf8("background-color: rgb(95, 95, 112);\n"
"color: rgb(255, 255, 255);\n"
"padding-top: 5px;\n"
"padding-left: 10px;\n"
"padding-right: 10px;"));
        txtSearchMember = new QLineEdit(frame_5);
        txtSearchMember->setObjectName(QString::fromUtf8("txtSearchMember"));
        txtSearchMember->setGeometry(QRect(30, 30, 321, 31));
        txtSearchMember->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        txtSearchMember->setFrame(false);
        txtSearchMember->setClearButtonEnabled(true);
        btnSearchMember = new QPushButton(frame_5);
        btnSearchMember->setObjectName(QString::fromUtf8("btnSearchMember"));
        btnSearchMember->setGeometry(QRect(360, 30, 101, 31));
        btnSearchMember->setCursor(QCursor(Qt::OpenHandCursor));
        btnSearchMember->setMouseTracking(true);
        btnSearchMember->setStyleSheet(QString::fromUtf8("/*background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(54, 110, 140, 255), stop:0.747191 rgba(145, 192, 216, 255));\n"
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
        addBookTabFrame = new QFrame(tab);
        addBookTabFrame->setObjectName(QString::fromUtf8("addBookTabFrame"));
        addBookTabFrame->setGeometry(QRect(40, 31, 191, 61));
        addBookTabFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 58, 68);\n"
"border-radius: 16px;"));
        addBookTabFrame->setFrameShape(QFrame::StyledPanel);
        addBookTabFrame->setFrameShadow(QFrame::Raised);
        addBookTtle = new QLabel(addBookTabFrame);
        addBookTtle->setObjectName(QString::fromUtf8("addBookTtle"));
        addBookTtle->setGeometry(QRect(11, 9, 171, 21));
        addBookTtle->setFont(font);
        addBookTtle->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Century Gothic\";"));
        addBookTtle->setAlignment(Qt::AlignCenter);
        btnAddMember = new QPushButton(tab);
        btnAddMember->setObjectName(QString::fromUtf8("btnAddMember"));
        btnAddMember->setGeometry(QRect(560, 490, 211, 191));
        btnAddMember->setCursor(QCursor(Qt::OpenHandCursor));
        btnAddMember->setStyleSheet(QString::fromUtf8("/*background: rgba(40, 83, 107, 1);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: white;*/\n"
"\n"
"/*background-color: rgb(52, 52, 61);\n"
"border-color: rgb(135, 83, 72);\n"
"border-radius:14px;\n"
"font: 8pt \"Nirmala UI\";\n"
"color: black;*/\n"
"\n"
"/*-----QPushButton-----*/\n"
"QPushButton\n"
"{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0.0995025 rgba(31, 168, 136, 255), stop:1 rgba(32, 197, 180, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"Century Gothic\";\n"
"min-width: 80px;\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 14px;\n"
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
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0.0995025 rgba(38, "
                        "208, 171, 255), stop:1 rgba(36, 222, 206, 255));\n"
"border: 1px solid rgb(41, 170, 182);}"));
        frame_8 = new QFrame(tab);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setGeometry(QRect(540, 270, 491, 201));
        frame_8->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 52, 61);\n"
"border-radius: 16px;"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        label_43 = new QLabel(frame_8);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setGeometry(QRect(42, 114, 121, 35));
        label_43->setFont(font);
        label_43->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius: none;"));
        label_44 = new QLabel(frame_8);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(42, 71, 121, 35));
        label_44->setFont(font);
        label_44->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius: none;"));
        label_45 = new QLabel(frame_8);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(43, 30, 121, 36));
        label_45->setFont(font);
        label_45->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius: none;"));
        lblMemberBook1 = new QLineEdit(frame_8);
        lblMemberBook1->setObjectName(QString::fromUtf8("lblMemberBook1"));
        lblMemberBook1->setGeometry(QRect(145, 35, 291, 31));
        lblMemberBook1->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border:none;\n"
"color: rgb(193, 193, 193);\n"
"font: 15pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius:none;"));
        lblMemberBook2 = new QLineEdit(frame_8);
        lblMemberBook2->setObjectName(QString::fromUtf8("lblMemberBook2"));
        lblMemberBook2->setGeometry(QRect(147, 75, 291, 31));
        lblMemberBook2->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border:none;\n"
"color: rgb(193, 193, 193);\n"
"font: 15pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius:none;"));
        lblMemberBook3 = new QLineEdit(frame_8);
        lblMemberBook3->setObjectName(QString::fromUtf8("lblMemberBook3"));
        lblMemberBook3->setGeometry(QRect(146, 118, 291, 31));
        lblMemberBook3->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border:none;\n"
"color: rgb(193, 193, 193);\n"
"font: 15pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius:none;"));
        addBookTabFrame_2 = new QFrame(tab);
        addBookTabFrame_2->setObjectName(QString::fromUtf8("addBookTabFrame_2"));
        addBookTabFrame_2->setGeometry(QRect(840, 31, 191, 61));
        addBookTabFrame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 58, 68);\n"
"border-radius: 16px;"));
        addBookTabFrame_2->setFrameShape(QFrame::StyledPanel);
        addBookTabFrame_2->setFrameShadow(QFrame::Raised);
        addBookTtle_2 = new QLabel(addBookTabFrame_2);
        addBookTtle_2->setObjectName(QString::fromUtf8("addBookTtle_2"));
        addBookTtle_2->setGeometry(QRect(10, 10, 171, 21));
        addBookTtle_2->setFont(font);
        addBookTtle_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Century Gothic\";"));
        addBookTtle_2->setAlignment(Qt::AlignCenter);
        frame_6 = new QFrame(tab);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(540, 70, 491, 191));
        frame_6->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 52, 61);\n"
"border-radius: 16px;"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        lblMemberName = new QLabel(frame_6);
        lblMemberName->setObjectName(QString::fromUtf8("lblMemberName"));
        lblMemberName->setGeometry(QRect(150, 26, 271, 35));
        lblMemberName->setFont(font3);
        lblMemberName->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border:none;\n"
"color: rgb(193, 193, 193);\n"
"font: 15pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius:none;"));
        lblMemberName->setFrameShape(QFrame::Panel);
        lblMemberNumber = new QLabel(frame_6);
        lblMemberNumber->setObjectName(QString::fromUtf8("lblMemberNumber"));
        lblMemberNumber->setGeometry(QRect(150, 68, 271, 35));
        lblMemberNumber->setFont(font3);
        lblMemberNumber->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border:none;\n"
"color: rgb(193, 193, 193);\n"
"font: 15pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius:none;"));
        lblMemberNumber->setFrameShape(QFrame::Panel);
        label_11 = new QLabel(frame_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(52, 26, 101, 35));
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius: none;"));
        label_12 = new QLabel(frame_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(52, 68, 101, 35));
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius: none;"));
        lblMemberEmail = new QLabel(frame_6);
        lblMemberEmail->setObjectName(QString::fromUtf8("lblMemberEmail"));
        lblMemberEmail->setGeometry(QRect(150, 110, 271, 35));
        lblMemberEmail->setFont(font3);
        lblMemberEmail->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border:none;\n"
"color: rgb(193, 193, 193);\n"
"font: 15pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius:none;"));
        lblMemberEmail->setFrameShape(QFrame::Panel);
        label_14 = new QLabel(frame_6);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(52, 110, 101, 35));
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Century Gothic\";\n"
"border-bottom: 1px solid rgb(193, 193, 193);\n"
"border-radius: none;"));
        btnEditMember = new QPushButton(tab);
        btnEditMember->setObjectName(QString::fromUtf8("btnEditMember"));
        btnEditMember->setGeometry(QRect(800, 490, 211, 191));
        btnEditMember->setCursor(QCursor(Qt::OpenHandCursor));
        btnEditMember->setStyleSheet(QString::fromUtf8("/*background: rgba(40, 83, 107, 1);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: white;*/\n"
"\n"
"/*background-color: rgb(52, 52, 61);\n"
"border-color: rgb(135, 83, 72);\n"
"border-radius:14px;\n"
"font: 8pt \"Nirmala UI\";\n"
"color: black;*/\n"
"\n"
"/*-----QPushButton-----*/\n"
"QPushButton\n"
"{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0.0995025 rgba(31, 168, 136, 255), stop:1 rgba(32, 197, 180, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"Century Gothic\";\n"
"min-width: 80px;\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 14px;\n"
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
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0.0995025 rgba(38, "
                        "208, 171, 255), stop:1 rgba(36, 222, 206, 255));\n"
"border: 1px solid rgb(41, 170, 182);}"));
        label_13 = new QLabel(tab);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(630, 530, 71, 71));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/resources/Decorations/flyingAstronaut.png")));
        label_13->setScaledContents(true);
        label_49 = new QLabel(tab);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setGeometry(QRect(592, 627, 141, 21));
        label_49->setFont(font);
        label_49->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 75 12pt \"Century Gothic\";"));
        label_49->setAlignment(Qt::AlignCenter);
        label_15 = new QLabel(tab);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(870, 530, 71, 71));
        label_15->setPixmap(QPixmap(QString::fromUtf8(":/resources/Decorations/stars.png")));
        label_15->setScaledContents(true);
        label_50 = new QLabel(tab);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setGeometry(QRect(830, 629, 151, 21));
        label_50->setFont(font1);
        label_50->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 75 11pt \"Century Gothic\";"));
        label_50->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab, QString());
        addBookTabFrame->raise();
        frame_5->raise();
        btnAddMember->raise();
        frame_8->raise();
        addBookTabFrame_2->raise();
        frame_6->raise();
        btnEditMember->raise();
        label_13->raise();
        label_49->raise();
        label_15->raise();
        label_50->raise();
        Report = new QWidget();
        Report->setObjectName(QString::fromUtf8("Report"));
        listoBooks = new QListWidget(Report);
        listoBooks->setObjectName(QString::fromUtf8("listoBooks"));
        listoBooks->setGeometry(QRect(380, 180, 341, 421));
        btnReminder = new QPushButton(Report);
        btnReminder->setObjectName(QString::fromUtf8("btnReminder"));
        btnReminder->setGeometry(QRect(430, 60, 211, 91));
        btnReminder->setCursor(QCursor(Qt::OpenHandCursor));
        btnReminder->setMouseTracking(true);
        btnReminder->setStyleSheet(QString::fromUtf8("/*background: rgba(40, 83, 107, 1);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: white;*/\n"
"\n"
"/*background-color: rgb(52, 52, 61);\n"
"border-color: rgb(135, 83, 72);\n"
"border-radius:14px;\n"
"font: 8pt \"Nirmala UI\";\n"
"color: black;*/\n"
"\n"
"/*-----QPushButton-----*/\n"
"QPushButton\n"
"{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0.0995025 rgba(31, 168, 136, 255), stop:1 rgba(32, 197, 180, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"Century Gothic\";\n"
"min-width: 80px;\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 14px;\n"
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
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0.0995025 rgba(38, "
                        "208, 171, 255), stop:1 rgba(36, 222, 206, 255));\n"
"border: 1px solid rgb(41, 170, 182);}"));
        label_48 = new QLabel(Report);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setGeometry(QRect(450, 90, 181, 36));
        label_48->setFont(font);
        label_48->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 75 12pt \"Century Gothic\";"));
        label_48->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(Report, QString());
        btnReminder->raise();
        listoBooks->raise();
        label_48->raise();
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1342, 25));
        menuAdmin_Centre = new QMenu(menubar);
        menuAdmin_Centre->setObjectName(QString::fromUtf8("menuAdmin_Centre"));
        menuautoLoads = new QMenu(menuAdmin_Centre);
        menuautoLoads->setObjectName(QString::fromUtf8("menuautoLoads"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuAdmin_Centre->menuAction());
        menuAdmin_Centre->addAction(menuautoLoads->menuAction());
        menuautoLoads->addAction(LoadMembersList);
        menuautoLoads->addAction(LoadBookList);
        menuautoLoads->addAction(LoadiBookList);
        menuautoLoads->addAction(LoadiMemberList);
        menuautoLoads->addAction(LoadoBookList);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        LoadMembersList->setText(QCoreApplication::translate("MainWindow", "LoadMembersList", nullptr));
        LoadBookList->setText(QCoreApplication::translate("MainWindow", "LoadBookList", nullptr));
        LoadiBookList->setText(QCoreApplication::translate("MainWindow", "LoadiBookList", nullptr));
        LoadiMemberList->setText(QCoreApplication::translate("MainWindow", "LoadiMemberList", nullptr));
        LoadoBookList->setText(QCoreApplication::translate("MainWindow", "LoadoBookList", nullptr));
        btnIssueSearch->setText(QCoreApplication::translate("MainWindow", "SEARCH", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Title", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "Due Date", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "Date Issued", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "New Status", nullptr));
        btniSearchBook->setText(QCoreApplication::translate("MainWindow", "SEARCH", nullptr));
#if QT_CONFIG(accessibility)
        txtiSearchBook->setAccessibleName(QCoreApplication::translate("MainWindow", "Type here", nullptr));
#endif // QT_CONFIG(accessibility)
        txtiSearchBook->setPlaceholderText(QCoreApplication::translate("MainWindow", "Book title here...", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "Title", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "Due Date", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "Date Issued", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "New Status", nullptr));
        btniSearchMember->setText(QCoreApplication::translate("MainWindow", "SEARCH", nullptr));
#if QT_CONFIG(accessibility)
        txtiSearchMember->setAccessibleName(QCoreApplication::translate("MainWindow", "Type here", nullptr));
#endif // QT_CONFIG(accessibility)
        txtiSearchMember->setPlaceholderText(QCoreApplication::translate("MainWindow", "Member name here...", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "Phone #", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        btnissuebook_2->setText(QString());
        btnissuedone->setText(QString());
        addBookTtle_4->setText(QCoreApplication::translate("MainWindow", "01", nullptr));
        addBookTtle_5->setText(QCoreApplication::translate("MainWindow", "02", nullptr));
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_38->setText(QCoreApplication::translate("MainWindow", "ISSUE BOOK", nullptr));
        label_8->setText(QString());
        label_39->setText(QCoreApplication::translate("MainWindow", "ISSUE ANOTHER", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Home), QCoreApplication::translate("MainWindow", "Issue Book", nullptr));
        addBookTtle_3->setText(QCoreApplication::translate("MainWindow", "STOCK", nullptr));
        btnSearchBook->setText(QCoreApplication::translate("MainWindow", "SEARCH", nullptr));
#if QT_CONFIG(accessibility)
        txtSearchBook->setAccessibleName(QCoreApplication::translate("MainWindow", "Type here", nullptr));
#endif // QT_CONFIG(accessibility)
        label_17->setText(QCoreApplication::translate("MainWindow", "Title", nullptr));
        lbl_ID->setText(QString());
        lblBookTitle->setText(QString());
        lblDewey->setText(QString());
        label_19->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Due Date", nullptr));
        lblStatus->setText(QString());
        label_16->setText(QCoreApplication::translate("MainWindow", "Author", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Book ID", nullptr));
        lbldd->setText(QString());
        label_21->setText(QCoreApplication::translate("MainWindow", "Dewey", nullptr));
        lblAuthor->setText(QString());
        lblImage->setText(QString());
        btnRemoveBook->setText(QCoreApplication::translate("MainWindow", "Remove Book", nullptr));
        tabletButton->setText(QString());
        btnissuebook->setText(QString());
        btnUpdateBook->setText(QString());
        btnAddBook->setText(QString());
        label_20->setText(QCoreApplication::translate("MainWindow", "ADD BOOK", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "RETURN BOOK", nullptr));
        label_2->setText(QString());
        label_25->setText(QCoreApplication::translate("MainWindow", "EDIT BOOK", nullptr));
        label_4->setText(QString());
        label_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Books), QCoreApplication::translate("MainWindow", "Books", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Name</p><p align=\"center\"><span style=\" font-weight:600;\"><br/></span></p></body></html>", nullptr));
#if QT_CONFIG(accessibility)
        txtSearchMember->setAccessibleName(QCoreApplication::translate("MainWindow", "Type here", nullptr));
#endif // QT_CONFIG(accessibility)
        btnSearchMember->setText(QCoreApplication::translate("MainWindow", "SEARCH", nullptr));
        addBookTtle->setText(QCoreApplication::translate("MainWindow", "MEMBERS", nullptr));
        btnAddMember->setText(QString());
        label_43->setText(QCoreApplication::translate("MainWindow", "Book 3", nullptr));
        label_44->setText(QCoreApplication::translate("MainWindow", "Book 2", nullptr));
        label_45->setText(QCoreApplication::translate("MainWindow", "Book 1", nullptr));
        addBookTtle_2->setText(QCoreApplication::translate("MainWindow", "DETAILS", nullptr));
        lblMemberName->setText(QString());
        lblMemberNumber->setText(QString());
        label_11->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Number", nullptr));
        lblMemberEmail->setText(QString());
        label_14->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        btnEditMember->setText(QString());
        label_13->setText(QString());
        label_49->setText(QCoreApplication::translate("MainWindow", "ADD MEMBER", nullptr));
        label_15->setText(QString());
        label_50->setText(QCoreApplication::translate("MainWindow", "UPDATE MEMBER", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Members", nullptr));
        btnReminder->setText(QString());
        label_48->setText(QCoreApplication::translate("MainWindow", "RETURN BOOK", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Report), QCoreApplication::translate("MainWindow", "Report", nullptr));
        menuAdmin_Centre->setTitle(QCoreApplication::translate("MainWindow", "Admin Centre", nullptr));
        menuautoLoads->setTitle(QCoreApplication::translate("MainWindow", "autoLoads", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
