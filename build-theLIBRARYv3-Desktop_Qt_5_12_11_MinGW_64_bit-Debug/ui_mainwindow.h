/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLoad;
    QWidget *centralwidget;
    QFrame *SideBarFrmae;
    QListWidget *listBooks;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QFrame *line;
    QFrame *frame;
    QFrame *searchFrame;
    QLineEdit *txtSearchBook;
    QPushButton *btnSearchBook;
    QPushButton *btnRemoveBook;
    QLabel *lblImage;
    QPushButton *btnUpdateBook;
    QFrame *frame_4;
    QLabel *lblQuantity;
    QPushButton *btnAddBook;
    QPushButton *pushButton_13;
    QPushButton *pushButton_15;
    QLabel *lblStatus;
    QLabel *label_6;
    QLabel *label;
    QLabel *lblDewey;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *lblBookTitle;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *lblAuthor;
    QLabel *lbl_ID;
    QLabel *label_4;
    QFrame *frame_2;
    QLabel *label_11;
    QLabel *label_12;
    QFrame *line_2;
    QListWidget *listMember;
    QFrame *frame_3;
    QFrame *searchFrame_2;
    QLineEdit *txtSearchMember;
    QPushButton *btnSearchMember;
    QPushButton *btnEditMember;
    QPushButton *btnAddMember;
    QLabel *LibrarianAdminHeading;
    QLabel *LibraryHeading;
    QLabel *LibrarianHomeTitle;
    QMenuBar *menubar;
    QMenu *menuLibrarian;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1754, 700);
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        SideBarFrmae = new QFrame(centralwidget);
        SideBarFrmae->setObjectName(QString::fromUtf8("SideBarFrmae"));
        SideBarFrmae->setGeometry(QRect(20, 90, 300, 511));
        SideBarFrmae->setMaximumSize(QSize(300, 16777215));
        SideBarFrmae->setStyleSheet(QString::fromUtf8("background-color: rgb(223, 233, 239);"));
        SideBarFrmae->setFrameShape(QFrame::StyledPanel);
        SideBarFrmae->setFrameShadow(QFrame::Plain);
        listBooks = new QListWidget(SideBarFrmae);
        listBooks->setObjectName(QString::fromUtf8("listBooks"));
        listBooks->setGeometry(QRect(10, 140, 271, 361));
        listBooks->setStyleSheet(QString::fromUtf8("font: 10pt \"Yu Gothic UI\";"));
        listBooks->setFrameShape(QFrame::VLine);
        listBooks->setFrameShadow(QFrame::Raised);
        label_8 = new QLabel(SideBarFrmae);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 20, 231, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Yu Gothic UI"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("font: 10pt \"Yu Gothic UI\";"));
        label_9 = new QLabel(SideBarFrmae);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 100, 81, 21));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("font: 10pt \"Yu Gothic UI\";"));
        label_10 = new QLabel(SideBarFrmae);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(190, 100, 71, 21));
        label_10->setFont(font);
        label_10->setStyleSheet(QString::fromUtf8("font: 10pt \"Yu Gothic UI\";"));
        line = new QFrame(SideBarFrmae);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 120, 271, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(330, 90, 631, 511));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(223, 233, 239);\n"
"border: 1px solid #000000;\n"
"box-sizing: border-box;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        searchFrame = new QFrame(frame);
        searchFrame->setObjectName(QString::fromUtf8("searchFrame"));
        searchFrame->setGeometry(QRect(10, 90, 381, 31));
        searchFrame->setStyleSheet(QString::fromUtf8("border: 1px solid #000000;\n"
"border-radius: 14px;\n"
"background-color: rgb(246, 240, 237);"));
        searchFrame->setFrameShape(QFrame::StyledPanel);
        searchFrame->setFrameShadow(QFrame::Plain);
        txtSearchBook = new QLineEdit(searchFrame);
        txtSearchBook->setObjectName(QString::fromUtf8("txtSearchBook"));
        txtSearchBook->setGeometry(QRect(0, 0, 381, 31));
        txtSearchBook->setFrame(false);
        btnSearchBook = new QPushButton(frame);
        btnSearchBook->setObjectName(QString::fromUtf8("btnSearchBook"));
        btnSearchBook->setGeometry(QRect(410, 90, 131, 23));
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
        btnRemoveBook = new QPushButton(frame);
        btnRemoveBook->setObjectName(QString::fromUtf8("btnRemoveBook"));
        btnRemoveBook->setGeometry(QRect(410, 400, 151, 23));
        btnRemoveBook->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(81, 19, 22, 255), stop:0.662921 rgba(173, 60, 63, 255));\n"
"\n"
"\n"
"border-color: rgb(127, 30, 32);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 10px;\n"
"font: 75 8pt \"Nirmala UI\";"));
        lblImage = new QLabel(frame);
        lblImage->setObjectName(QString::fromUtf8("lblImage"));
        lblImage->setGeometry(QRect(410, 140, 151, 241));
        lblImage->setFrameShape(QFrame::Box);
        btnUpdateBook = new QPushButton(frame);
        btnUpdateBook->setObjectName(QString::fromUtf8("btnUpdateBook"));
        btnUpdateBook->setGeometry(QRect(410, 430, 151, 23));
        btnUpdateBook->setStyleSheet(QString::fromUtf8("/*background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(54, 110, 140, 255), stop:0.747191 rgba(145, 192, 216, 255));\n"
"border-color: rgb(81, 130, 157);\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 10px;\n"
"font: 8pt \"Nirmala UI\";*/\n"
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
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(47,"
                        " 160, 194, 255), stop:1 rgba(57, 209, 209, 255));\n"
"border: 1px solid rgb(41, 170, 182);}\n"
""));
        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(20, 470, 101, 25));
        frame_4->setMaximumSize(QSize(16777215, 25));
        frame_4->setStyleSheet(QString::fromUtf8("border-radius: 12px;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        lblQuantity = new QLabel(frame);
        lblQuantity->setObjectName(QString::fromUtf8("lblQuantity"));
        lblQuantity->setGeometry(QRect(140, 380, 91, 20));
        QFont font1;
        font1.setPointSize(12);
        lblQuantity->setFont(font1);
        lblQuantity->setStyleSheet(QString::fromUtf8("border-radius: 10px;"));
        lblQuantity->setFrameShape(QFrame::Panel);
        lblQuantity->setMargin(1);
        btnAddBook = new QPushButton(frame);
        btnAddBook->setObjectName(QString::fromUtf8("btnAddBook"));
        btnAddBook->setGeometry(QRect(10, 10, 91, 23));
        btnAddBook->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0.0730337 rgba(178, 123, 112, 255), stop:0.814607 rgba(230, 190, 182, 255));\n"
"border-color: rgb(135, 83, 72);\n"
"font: 8pt \"Nirmala UI\";\n"
"color: black;"));
        pushButton_13 = new QPushButton(frame);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(140, 10, 101, 23));
        pushButton_13->setStyleSheet(QString::fromUtf8("\n"
"border-color: rgb(135, 83, 72);\n"
"font: 8pt \"Nirmala UI\";\n"
"color: black;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0.0730337 rgba(178, 123, 112, 255), stop:0.814607 rgba(230, 190, 182, 255));\n"
"\n"
""));
        pushButton_15 = new QPushButton(frame);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(320, 10, 81, 23));
        pushButton_15->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0.0730337 rgba(178, 123, 112, 255), stop:0.814607 rgba(230, 190, 182, 255));\n"
"border-color: rgb(135, 83, 72);\n"
"font: 8pt \"Nirmala UI\";\n"
"color: black;"));
        lblStatus = new QLabel(frame);
        lblStatus->setObjectName(QString::fromUtf8("lblStatus"));
        lblStatus->setGeometry(QRect(144, 331, 91, 21));
        lblStatus->setFont(font1);
        lblStatus->setStyleSheet(QString::fromUtf8("border-radius: 10px;"));
        lblStatus->setFrameShape(QFrame::Panel);
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 283, 38, 21));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"border: none;"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 140, 41, 22));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Yu Gothic UI"));
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("font: 11pt \"Yu Gothic UI\";\n"
"color: rgb(0, 0, 0);\n"
"border: none;"));
        lblDewey = new QLabel(frame);
        lblDewey->setObjectName(QString::fromUtf8("lblDewey"));
        lblDewey->setGeometry(QRect(144, 236, 91, 21));
        lblDewey->setFont(font1);
        lblDewey->setStyleSheet(QString::fromUtf8("border-radius: 10px;"));
        lblDewey->setFrameShape(QFrame::Panel);
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(50, 330, 59, 21));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"border: none;"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 188, 65, 21));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"border: none;"));
        lblBookTitle = new QLabel(frame);
        lblBookTitle->setObjectName(QString::fromUtf8("lblBookTitle"));
        lblBookTitle->setGeometry(QRect(144, 141, 231, 21));
        lblBookTitle->setFont(font1);
        lblBookTitle->setStyleSheet(QString::fromUtf8("border-radius: 10px;"));
        lblBookTitle->setFrameShape(QFrame::Panel);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 235, 63, 21));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"border: none;"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 378, 63, 21));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"border: none;"));
        lblAuthor = new QLabel(frame);
        lblAuthor->setObjectName(QString::fromUtf8("lblAuthor"));
        lblAuthor->setGeometry(QRect(144, 189, 231, 21));
        lblAuthor->setFont(font1);
        lblAuthor->setStyleSheet(QString::fromUtf8("border-radius: 10px;"));
        lblAuthor->setFrameShape(QFrame::Panel);
        lbl_ID = new QLabel(frame);
        lbl_ID->setObjectName(QString::fromUtf8("lbl_ID"));
        lbl_ID->setGeometry(QRect(144, 284, 231, 21));
        lbl_ID->setFont(font1);
        lbl_ID->setStyleSheet(QString::fromUtf8("border-radius: 10px;"));
        lbl_ID->setFrameShape(QFrame::Panel);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(1020, 430, 51, 21));
        label_4->setFont(font1);
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(970, 320, 631, 281));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 225, 214);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_11 = new QLabel(frame_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(140, 10, 51, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Nirmala UI"));
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        label_11->setFont(font3);
        label_11->setStyleSheet(QString::fromUtf8("font: 10pt \"Nirmala UI\";\n"
"color: rgb(0, 0, 0);"));
        label_12 = new QLabel(frame_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(450, 10, 51, 21));
        label_12->setFont(font3);
        label_12->setStyleSheet(QString::fromUtf8("font: 10pt \"Nirmala UI\";\n"
"color: rgb(0, 0, 0);"));
        line_2 = new QFrame(frame_2);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(20, 30, 741, 2));
        line_2->setMaximumSize(QSize(16777215, 2));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setLineWidth(1);
        line_2->setFrameShape(QFrame::HLine);
        listMember = new QListWidget(frame_2);
        listMember->setObjectName(QString::fromUtf8("listMember"));
        listMember->setGeometry(QRect(20, 40, 601, 231));
        listMember->setMinimumSize(QSize(0, 200));
        listMember->setMaximumSize(QSize(800, 250));
        listMember->setStyleSheet(QString::fromUtf8("font: 10pt \"Yu Gothic UI\";"));
        listMember->setFrameShape(QFrame::VLine);
        listMember->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(970, 90, 631, 191));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 225, 214);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        searchFrame_2 = new QFrame(frame_3);
        searchFrame_2->setObjectName(QString::fromUtf8("searchFrame_2"));
        searchFrame_2->setGeometry(QRect(20, 20, 451, 31));
        searchFrame_2->setStyleSheet(QString::fromUtf8("border: 1px solid #000000;\n"
"border-radius: 14px;\n"
"background-color: rgb(246, 240, 237);"));
        searchFrame_2->setFrameShape(QFrame::StyledPanel);
        searchFrame_2->setFrameShadow(QFrame::Plain);
        txtSearchMember = new QLineEdit(searchFrame_2);
        txtSearchMember->setObjectName(QString::fromUtf8("txtSearchMember"));
        txtSearchMember->setGeometry(QRect(10, 5, 421, 21));
        txtSearchMember->setStyleSheet(QString::fromUtf8("border: none;"));
        txtSearchMember->setFrame(false);
        txtSearchMember->setClearButtonEnabled(true);
        btnSearchMember = new QPushButton(frame_3);
        btnSearchMember->setObjectName(QString::fromUtf8("btnSearchMember"));
        btnSearchMember->setGeometry(QRect(490, 20, 121, 23));
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
        btnEditMember = new QPushButton(frame_3);
        btnEditMember->setObjectName(QString::fromUtf8("btnEditMember"));
        btnEditMember->setGeometry(QRect(230, 150, 141, 31));
        btnEditMember->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0.0730337 rgba(178, 123, 112, 255), stop:0.814607 rgba(230, 190, 182, 255));\n"
"border-color: rgb(135, 83, 72);\n"
"border-radius:14px;\n"
"font: 8pt \"Nirmala UI\";\n"
"color: black;"));
        btnAddMember = new QPushButton(frame_3);
        btnAddMember->setObjectName(QString::fromUtf8("btnAddMember"));
        btnAddMember->setGeometry(QRect(30, 150, 141, 31));
        btnAddMember->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0.0730337 rgba(178, 123, 112, 255), stop:0.814607 rgba(230, 190, 182, 255));\n"
"border-color: rgb(135, 83, 72);\n"
"border-radius:14px;\n"
"font: 8pt \"Nirmala UI\";\n"
"color: black;"));
        LibrarianAdminHeading = new QLabel(centralwidget);
        LibrarianAdminHeading->setObjectName(QString::fromUtf8("LibrarianAdminHeading"));
        LibrarianAdminHeading->setGeometry(QRect(20, 0, 1701, 30));
        LibrarianAdminHeading->setMaximumSize(QSize(16777215, 30));
        LibrarianAdminHeading->setStyleSheet(QString::fromUtf8("background: rgba(40, 83, 107, 1);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: white;"));
        LibrarianAdminHeading->setAlignment(Qt::AlignCenter);
        LibraryHeading = new QLabel(centralwidget);
        LibraryHeading->setObjectName(QString::fromUtf8("LibraryHeading"));
        LibraryHeading->setGeometry(QRect(20, 60, 301, 30));
        LibraryHeading->setMaximumSize(QSize(16777215, 30));
        LibraryHeading->setStyleSheet(QString::fromUtf8("background: rgba(40, 83, 107, 1);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: white;\n"
""));
        LibraryHeading->setAlignment(Qt::AlignCenter);
        LibrarianHomeTitle = new QLabel(centralwidget);
        LibrarianHomeTitle->setObjectName(QString::fromUtf8("LibrarianHomeTitle"));
        LibrarianHomeTitle->setGeometry(QRect(970, 290, 631, 30));
        LibrarianHomeTitle->setMaximumSize(QSize(16777215, 30));
        LibrarianHomeTitle->setStyleSheet(QString::fromUtf8("color: rgb(246, 240, 237);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"background-color: rgb(42, 83, 106);"));
        LibrarianHomeTitle->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1754, 21));
        menuLibrarian = new QMenu(menubar);
        menuLibrarian->setObjectName(QString::fromUtf8("menuLibrarian"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuLibrarian->menuAction());
        menuLibrarian->addAction(actionLoad);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionLoad->setText(QApplication::translate("MainWindow", "autoLoadBooks", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600; color:#000000;\">the_LIST</span></p><p align=\"center\"><span style=\" font-weight:600; color:#000000;\">Books</span></p></body></html>", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#000000;\">Book Title </span></p><p align=\"center\"><span style=\" font-weight:600;\"><br/></span></p></body></html>", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Author</p></body></html>", nullptr));
        btnSearchBook->setText(QApplication::translate("MainWindow", "Search", nullptr));
        btnRemoveBook->setText(QApplication::translate("MainWindow", "REMOVE THIS  BOOK", nullptr));
        lblImage->setText(QString());
        btnUpdateBook->setText(QApplication::translate("MainWindow", "UPDATE THIS BOOK", nullptr));
        lblQuantity->setText(QString());
        btnAddBook->setText(QApplication::translate("MainWindow", "ADD A BOOK", nullptr));
        pushButton_13->setText(QApplication::translate("MainWindow", "ISSUE A BOOK", nullptr));
        pushButton_15->setText(QApplication::translate("MainWindow", "DUE DATES", nullptr));
        lblStatus->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "ID :", nullptr));
        label->setText(QApplication::translate("MainWindow", "Title:", nullptr));
        lblDewey->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "Status:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Author:", nullptr));
        lblBookTitle->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "Dewey:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Copies:", nullptr));
        lblAuthor->setText(QString());
        lbl_ID->setText(QString());
        label_4->setText(QString());
        label_11->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Name</p><p align=\"center\"><span style=\" font-weight:600;\"><br/></span></p></body></html>", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Phone</p></body></html>", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        txtSearchMember->setAccessibleName(QApplication::translate("MainWindow", "Type here", nullptr));
#endif // QT_NO_ACCESSIBILITY
        btnSearchMember->setText(QApplication::translate("MainWindow", "SEARCH", nullptr));
        btnEditMember->setText(QApplication::translate("MainWindow", "Edit Member Details", nullptr));
        btnAddMember->setText(QApplication::translate("MainWindow", "Add Member", nullptr));
        LibrarianAdminHeading->setText(QApplication::translate("MainWindow", "LIBRARIAN HOME PAGE", nullptr));
        LibraryHeading->setText(QApplication::translate("MainWindow", "S T O C K", nullptr));
        LibrarianHomeTitle->setText(QApplication::translate("MainWindow", "M E M B E R S", nullptr));
        menuLibrarian->setTitle(QApplication::translate("MainWindow", "Librarian", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
