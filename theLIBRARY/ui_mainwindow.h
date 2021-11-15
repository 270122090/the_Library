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
#include <QAction>
#include <QtWidgets/QApplication>
#include <QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLoad;
    QAction *autoLoadLoans;
    QWidget *centralwidget;
    QLabel *label_4;
    QTabWidget *the_HOME;
    QWidget *tab_3;
    QListView *listView;
    QListView *listReceivebook;
    QLabel *LibrarianAdminHeading_2;
    QPushButton *pushButton;
    QLabel *LibraryHeading_3;
    QLabel *LibraryHeading_4;
    QWidget *books;
    QFrame *frame_4;
    QPushButton *btnRemoveBook;
    QLabel *lblImage;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *lblDewey;
    QLabel *label_24;
    QLabel *lblAuthor;
    QLabel *lblBookTitle;
    QLabel *lbldd;
    QLabel *label_17;
    QLabel *label_21;
    QLabel *label_16;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *lbl_ID;
    QLabel *lblStatus;
    QLabel *LibraryHeading_2;
    QFrame *frame;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *listBooks_id;
    QListWidget *listBooks;
    QListWidget *listBooks_aut;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAddBook;
    QPushButton *btnIssueBook;
    QPushButton *btnSearchBook;
    QLineEdit *txtSearchBook;
    QPushButton *btnUpdateBook;
    QWidget *Members;
    QFrame *frame_5;
    QLabel *label_22;
    QLabel *label_23;
    QFrame *line_4;
    QListWidget *listMember;
    QLabel *LibrarianHomeTitle_3;
    QFrame *frame_6;
    QFrame *searchFrame_4;
    QLineEdit *txtSearchMember;
    QPushButton *btnSearchMember;
    QPushButton *btnEditMember;
    QPushButton *btnAddMember;
    QMenuBar *menubar;
    QMenu *menuLibrarian;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1038, 689);
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        autoLoadLoans = new QAction(MainWindow);
        autoLoadLoans->setObjectName(QString::fromUtf8("autoLoadLoans"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(1020, 430, 51, 21));
        QFont font;
        font.setPointSize(12);
        label_4->setFont(font);
        the_HOME = new QTabWidget(centralwidget);
        the_HOME->setObjectName(QString::fromUtf8("the_HOME"));
        the_HOME->setGeometry(QRect(10, 10, 1011, 621));
        the_HOME->setStyleSheet(QString::fromUtf8(""));
        the_HOME->setTabShape(QTabWidget::Rounded);
        the_HOME->setIconSize(QSize(12, 12));
        the_HOME->setDocumentMode(false);
        the_HOME->setMovable(true);
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tab_3->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 225, 214);"));
        listView = new QListView(tab_3);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(30, 140, 256, 421));
        listReceivebook = new QListView(tab_3);
        listReceivebook->setObjectName(QString::fromUtf8("listReceivebook"));
        listReceivebook->setGeometry(QRect(430, 140, 256, 421));
        LibrarianAdminHeading_2 = new QLabel(tab_3);
        LibrarianAdminHeading_2->setObjectName(QString::fromUtf8("LibrarianAdminHeading_2"));
        LibrarianAdminHeading_2->setGeometry(QRect(410, 10, 209, 30));
        LibrarianAdminHeading_2->setMaximumSize(QSize(16777215, 30));
        LibrarianAdminHeading_2->setStyleSheet(QString::fromUtf8("background: rgba(40, 83, 107, 1);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: white;"));
        LibrarianAdminHeading_2->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(tab_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(850, 520, 151, 34));
        pushButton->setStyleSheet(QString::fromUtf8("background: rgba(40, 83, 107, 1);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: white;"));
        LibraryHeading_3 = new QLabel(tab_3);
        LibraryHeading_3->setObjectName(QString::fromUtf8("LibraryHeading_3"));
        LibraryHeading_3->setGeometry(QRect(30, 100, 139, 30));
        LibraryHeading_3->setMaximumSize(QSize(16777215, 30));
        LibraryHeading_3->setStyleSheet(QString::fromUtf8("background: rgba(40, 83, 107, 1);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: white;"));
        LibraryHeading_3->setAlignment(Qt::AlignCenter);
        LibraryHeading_4 = new QLabel(tab_3);
        LibraryHeading_4->setObjectName(QString::fromUtf8("LibraryHeading_4"));
        LibraryHeading_4->setGeometry(QRect(430, 100, 139, 30));
        LibraryHeading_4->setMaximumSize(QSize(16777215, 30));
        LibraryHeading_4->setStyleSheet(QString::fromUtf8("background: rgba(40, 83, 107, 1);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: white;"));
        LibraryHeading_4->setAlignment(Qt::AlignCenter);
        the_HOME->addTab(tab_3, QString());
        books = new QWidget();
        books->setObjectName(QString::fromUtf8("books"));
        books->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 225, 214);"));
        frame_4 = new QFrame(books);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(380, 60, 611, 511));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(223, 233, 239);\n"
"border: 1px solid #000000;\n"
"box-sizing: border-box;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Plain);
        btnRemoveBook = new QPushButton(frame_4);
        btnRemoveBook->setObjectName(QString::fromUtf8("btnRemoveBook"));
        btnRemoveBook->setGeometry(QRect(480, 480, 117, 24));
        btnRemoveBook->setStyleSheet(QString::fromUtf8("background: rgba(40, 83, 107, 1);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: red;"));
        lblImage = new QLabel(frame_4);
        lblImage->setObjectName(QString::fromUtf8("lblImage"));
        lblImage->setGeometry(QRect(360, 120, 241, 351));
        lblImage->setFrameShape(QFrame::Box);
        layoutWidget = new QWidget(frame_4);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 120, 341, 251));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lblDewey = new QLabel(layoutWidget);
        lblDewey->setObjectName(QString::fromUtf8("lblDewey"));
        lblDewey->setFont(font);
        lblDewey->setFrameShape(QFrame::Panel);

        gridLayout->addWidget(lblDewey, 2, 1, 1, 1);

        label_24 = new QLabel(layoutWidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setFont(font);

        gridLayout->addWidget(label_24, 5, 0, 1, 1);

        lblAuthor = new QLabel(layoutWidget);
        lblAuthor->setObjectName(QString::fromUtf8("lblAuthor"));
        lblAuthor->setFont(font);
        lblAuthor->setFrameShape(QFrame::Panel);

        gridLayout->addWidget(lblAuthor, 1, 1, 1, 1);

        lblBookTitle = new QLabel(layoutWidget);
        lblBookTitle->setObjectName(QString::fromUtf8("lblBookTitle"));
        lblBookTitle->setFont(font);
        lblBookTitle->setFrameShape(QFrame::Panel);

        gridLayout->addWidget(lblBookTitle, 0, 1, 1, 1);

        lbldd = new QLabel(layoutWidget);
        lbldd->setObjectName(QString::fromUtf8("lbldd"));
        lbldd->setFont(font);
        lbldd->setFrameShape(QFrame::Panel);

        gridLayout->addWidget(lbldd, 5, 1, 1, 1);

        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        QFont font1;
        font1.setFamily({QString::fromUtf8("Yu Gothic UI")});
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        label_17->setFont(font1);
        label_17->setStyleSheet(QString::fromUtf8("font: 11pt \"Yu Gothic UI\";"));

        gridLayout->addWidget(label_17, 0, 0, 1, 1);

        label_21 = new QLabel(layoutWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font);

        gridLayout->addWidget(label_21, 2, 0, 1, 1);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font);

        gridLayout->addWidget(label_16, 1, 0, 1, 1);

        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font);

        gridLayout->addWidget(label_18, 3, 0, 1, 1);

        label_19 = new QLabel(layoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font);

        gridLayout->addWidget(label_19, 4, 0, 1, 1);

        lbl_ID = new QLabel(layoutWidget);
        lbl_ID->setObjectName(QString::fromUtf8("lbl_ID"));
        lbl_ID->setFont(font);
        lbl_ID->setFrameShape(QFrame::Panel);

        gridLayout->addWidget(lbl_ID, 3, 1, 1, 1);

        lblStatus = new QLabel(layoutWidget);
        lblStatus->setObjectName(QString::fromUtf8("lblStatus"));
        lblStatus->setFont(font);
        lblStatus->setFrameShape(QFrame::Panel);

        gridLayout->addWidget(lblStatus, 4, 1, 1, 1);

        LibraryHeading_2 = new QLabel(books);
        LibraryHeading_2->setObjectName(QString::fromUtf8("LibraryHeading_2"));
        LibraryHeading_2->setGeometry(QRect(10, 10, 139, 30));
        LibraryHeading_2->setMaximumSize(QSize(16777215, 30));
        LibraryHeading_2->setStyleSheet(QString::fromUtf8("background: rgba(40, 83, 107, 1);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: white;"));
        LibraryHeading_2->setAlignment(Qt::AlignCenter);
        frame = new QFrame(books);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 60, 361, 511));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(223, 233, 239);\n"
"border: 1px solid #000000;\n"
"box-sizing: border-box;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_25 = new QLabel(frame);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(130, 40, 51, 21));
        QFont font2;
        font2.setFamily({QString::fromUtf8("Nirmala UI")});
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(false);
        label_25->setFont(font2);
        label_25->setStyleSheet(QString::fromUtf8("font: 10pt \"Nirmala UI\";\n"
"color: rgb(0, 0, 0);"));
        label_26 = new QLabel(frame);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(240, 40, 51, 21));
        label_26->setFont(font2);
        label_26->setStyleSheet(QString::fromUtf8("font: 10pt \"Nirmala UI\";\n"
"color: rgb(0, 0, 0);"));
        label_27 = new QLabel(frame);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(10, 40, 51, 21));
        label_27->setFont(font2);
        label_27->setStyleSheet(QString::fromUtf8("font: 10pt \"Nirmala UI\";\n"
"color: rgb(0, 0, 0);"));
        layoutWidget1 = new QWidget(frame);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 70, 341, 421));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        listBooks_id = new QListWidget(layoutWidget1);
        listBooks_id->setObjectName(QString::fromUtf8("listBooks_id"));

        horizontalLayout_2->addWidget(listBooks_id);

        listBooks = new QListWidget(layoutWidget1);
        listBooks->setObjectName(QString::fromUtf8("listBooks"));

        horizontalLayout_2->addWidget(listBooks);

        listBooks_aut = new QListWidget(layoutWidget1);
        listBooks_aut->setObjectName(QString::fromUtf8("listBooks_aut"));

        horizontalLayout_2->addWidget(listBooks_aut);

        layoutWidget2 = new QWidget(books);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(170, 10, 811, 35));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnAddBook = new QPushButton(layoutWidget2);
        btnAddBook->setObjectName(QString::fromUtf8("btnAddBook"));
        btnAddBook->setStyleSheet(QString::fromUtf8("background: rgba(40, 83, 107, 1);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: white;"));

        horizontalLayout->addWidget(btnAddBook);

        btnIssueBook = new QPushButton(layoutWidget2);
        btnIssueBook->setObjectName(QString::fromUtf8("btnIssueBook"));
        btnIssueBook->setStyleSheet(QString::fromUtf8("background: rgba(40, 83, 107, 1);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: white;"));

        horizontalLayout->addWidget(btnIssueBook);

        btnSearchBook = new QPushButton(layoutWidget2);
        btnSearchBook->setObjectName(QString::fromUtf8("btnSearchBook"));
        btnSearchBook->setStyleSheet(QString::fromUtf8("background: rgba(40, 83, 107, 1);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: white;"));

        horizontalLayout->addWidget(btnSearchBook);

        txtSearchBook = new QLineEdit(layoutWidget2);
        txtSearchBook->setObjectName(QString::fromUtf8("txtSearchBook"));

        horizontalLayout->addWidget(txtSearchBook);

        btnUpdateBook = new QPushButton(layoutWidget2);
        btnUpdateBook->setObjectName(QString::fromUtf8("btnUpdateBook"));
        btnUpdateBook->setStyleSheet(QString::fromUtf8("background: rgba(40, 83, 107, 1);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: white;"));

        horizontalLayout->addWidget(btnUpdateBook);

        the_HOME->addTab(books, QString());
        Members = new QWidget();
        Members->setObjectName(QString::fromUtf8("Members"));
        frame_5 = new QFrame(Members);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(20, 70, 451, 321));
        frame_5->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 225, 214);"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_22 = new QLabel(frame_5);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(30, 10, 51, 21));
        label_22->setFont(font2);
        label_22->setStyleSheet(QString::fromUtf8("font: 10pt \"Nirmala UI\";\n"
"color: rgb(0, 0, 0);"));
        label_23 = new QLabel(frame_5);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(340, 10, 51, 21));
        label_23->setFont(font2);
        label_23->setStyleSheet(QString::fromUtf8("font: 10pt \"Nirmala UI\";\n"
"color: rgb(0, 0, 0);"));
        line_4 = new QFrame(frame_5);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(20, 30, 401, 2));
        line_4->setMaximumSize(QSize(16777215, 2));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setLineWidth(1);
        line_4->setFrameShape(QFrame::HLine);
        listMember = new QListWidget(frame_5);
        listMember->setObjectName(QString::fromUtf8("listMember"));
        listMember->setGeometry(QRect(10, 50, 421, 231));
        LibrarianHomeTitle_3 = new QLabel(Members);
        LibrarianHomeTitle_3->setObjectName(QString::fromUtf8("LibrarianHomeTitle_3"));
        LibrarianHomeTitle_3->setGeometry(QRect(20, 10, 149, 30));
        LibrarianHomeTitle_3->setMaximumSize(QSize(16777215, 30));
        LibrarianHomeTitle_3->setStyleSheet(QString::fromUtf8("color: rgb(246, 240, 237);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"background-color: rgb(42, 83, 106);"));
        LibrarianHomeTitle_3->setAlignment(Qt::AlignCenter);
        frame_6 = new QFrame(Members);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(500, 70, 491, 141));
        frame_6->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 225, 214);"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        searchFrame_4 = new QFrame(frame_6);
        searchFrame_4->setObjectName(QString::fromUtf8("searchFrame_4"));
        searchFrame_4->setGeometry(QRect(20, 20, 311, 31));
        searchFrame_4->setStyleSheet(QString::fromUtf8("border: 1px solid #000000;\n"
"border-radius: 14px;\n"
"background-color: rgb(246, 240, 237);"));
        searchFrame_4->setFrameShape(QFrame::StyledPanel);
        searchFrame_4->setFrameShadow(QFrame::Plain);
        txtSearchMember = new QLineEdit(searchFrame_4);
        txtSearchMember->setObjectName(QString::fromUtf8("txtSearchMember"));
        txtSearchMember->setGeometry(QRect(10, 5, 291, 21));
        txtSearchMember->setStyleSheet(QString::fromUtf8("border: none;"));
        txtSearchMember->setFrame(false);
        txtSearchMember->setClearButtonEnabled(true);
        btnSearchMember = new QPushButton(frame_6);
        btnSearchMember->setObjectName(QString::fromUtf8("btnSearchMember"));
        btnSearchMember->setGeometry(QRect(350, 20, 121, 23));
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
        btnEditMember = new QPushButton(frame_6);
        btnEditMember->setObjectName(QString::fromUtf8("btnEditMember"));
        btnEditMember->setGeometry(QRect(210, 70, 141, 31));
        btnEditMember->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0.0730337 rgba(178, 123, 112, 255), stop:0.814607 rgba(230, 190, 182, 255));\n"
"border-color: rgb(135, 83, 72);\n"
"border-radius:14px;\n"
"font: 8pt \"Nirmala UI\";\n"
"color: black;"));
        btnAddMember = new QPushButton(frame_6);
        btnAddMember->setObjectName(QString::fromUtf8("btnAddMember"));
        btnAddMember->setGeometry(QRect(30, 70, 141, 31));
        btnAddMember->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0.0730337 rgba(178, 123, 112, 255), stop:0.814607 rgba(230, 190, 182, 255));\n"
"border-color: rgb(135, 83, 72);\n"
"border-radius:14px;\n"
"font: 8pt \"Nirmala UI\";\n"
"color: black;"));
        the_HOME->addTab(Members, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1038, 26));
        menuLibrarian = new QMenu(menubar);
        menuLibrarian->setObjectName(QString::fromUtf8("menuLibrarian"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuLibrarian->menuAction());
        menuLibrarian->addAction(actionLoad);
        menuLibrarian->addAction(autoLoadLoans);

        retranslateUi(MainWindow);

        the_HOME->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionLoad->setText(QCoreApplication::translate("MainWindow", "autoLoadBooks", nullptr));
        autoLoadLoans->setText(QCoreApplication::translate("MainWindow", "autoLoadLoans", nullptr));
        label_4->setText(QString());
#if QT_CONFIG(whatsthis)
        tab_3->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#aa007f;\">HOME</span></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        LibrarianAdminHeading_2->setText(QCoreApplication::translate("MainWindow", "LIBRARIAN HOME PAGE", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Receive Book", nullptr));
        LibraryHeading_3->setText(QCoreApplication::translate("MainWindow", "overdue_B O O K S", nullptr));
        LibraryHeading_4->setText(QCoreApplication::translate("MainWindow", "out_B O O K S", nullptr));
        the_HOME->setTabText(the_HOME->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Home", nullptr));
        btnRemoveBook->setText(QCoreApplication::translate("MainWindow", "REMOVE THIS  BOOK", nullptr));
        lblImage->setText(QString());
        lblDewey->setText(QString());
        label_24->setText(QCoreApplication::translate("MainWindow", "Due Date", nullptr));
        lblAuthor->setText(QString());
        lblBookTitle->setText(QString());
        lbldd->setText(QString());
        label_17->setText(QCoreApplication::translate("MainWindow", "Title:", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Dewey:", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Author:", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "ID :", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Status:", nullptr));
        lbl_ID->setText(QString());
        lblStatus->setText(QString());
        LibraryHeading_2->setText(QCoreApplication::translate("MainWindow", "the_B O O K S", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Title</p><p align=\"center\"><span style=\" font-weight:600;\"><br/></span></p></body></html>", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>ID</p></body></html>", nullptr));
        btnAddBook->setText(QCoreApplication::translate("MainWindow", "ADD A BOOK", nullptr));
        btnIssueBook->setText(QCoreApplication::translate("MainWindow", "ISSUE A BOOK", nullptr));
        btnSearchBook->setText(QCoreApplication::translate("MainWindow", "SEARCH A BOOK", nullptr));
        btnUpdateBook->setText(QCoreApplication::translate("MainWindow", "UPDATE THIS BOOK", nullptr));
        the_HOME->setTabText(the_HOME->indexOf(books), QCoreApplication::translate("MainWindow", "Books", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Name</p><p align=\"center\"><span style=\" font-weight:600;\"><br/></span></p></body></html>", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Phone</p></body></html>", nullptr));
        LibrarianHomeTitle_3->setText(QCoreApplication::translate("MainWindow", "the_M E M B E R S", nullptr));
#if QT_CONFIG(accessibility)
        txtSearchMember->setAccessibleName(QCoreApplication::translate("MainWindow", "Type here", nullptr));
#endif // QT_CONFIG(accessibility)
        btnSearchMember->setText(QCoreApplication::translate("MainWindow", "SEARCH", nullptr));
        btnEditMember->setText(QCoreApplication::translate("MainWindow", "Edit Member Details", nullptr));
        btnAddMember->setText(QCoreApplication::translate("MainWindow", "Add Member", nullptr));
        the_HOME->setTabText(the_HOME->indexOf(Members), QCoreApplication::translate("MainWindow", "Members", nullptr));
        menuLibrarian->setTitle(QCoreApplication::translate("MainWindow", "Librarian", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
