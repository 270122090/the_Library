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
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *SideBarFrmae;
    QFrame *MemberFrame;
    QVBoxLayout *verticalLayout;
    QLabel *LibrarianHomeTitle;
    QFrame *MemberBackground;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QFrame *LibraryFrame;
    QVBoxLayout *verticalLayout_2;
    QLabel *LibraryHeading;
    QFrame *LibraryBackground;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btnAddBook;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_16;
    QPushButton *pushButton_15;
    QFrame *frame;
    QLabel *LibrarianAdminHeading;
    QListWidget *listBooks;
    QFrame *searchFrame;
    QPushButton *pushButton;
    QPushButton *btnRemove;
    QLabel *lblStatus;
    QLabel *label;
    QLabel *lbl_ID;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *lblDewey;
    QLabel *lblAuthor;
    QLabel *label_5;
    QLabel *lblProductName;
    QLabel *lblImage;
    QLabel *label_2;
    QLabel *lblQuantity;
    QLabel *label_8;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1315, 807);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        SideBarFrmae = new QFrame(centralwidget);
        SideBarFrmae->setObjectName(QString::fromUtf8("SideBarFrmae"));
        SideBarFrmae->setGeometry(QRect(40, 0, 250, 741));
        SideBarFrmae->setMaximumSize(QSize(250, 16777215));
        SideBarFrmae->setStyleSheet(QString::fromUtf8("background-color: rgb(223, 233, 239);"));
        SideBarFrmae->setFrameShape(QFrame::StyledPanel);
        SideBarFrmae->setFrameShadow(QFrame::Plain);
        MemberFrame = new QFrame(SideBarFrmae);
        MemberFrame->setObjectName(QString::fromUtf8("MemberFrame"));
        MemberFrame->setGeometry(QRect(20, 340, 211, 161));
        MemberFrame->setFrameShape(QFrame::StyledPanel);
        MemberFrame->setFrameShadow(QFrame::Plain);
        verticalLayout = new QVBoxLayout(MemberFrame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        LibrarianHomeTitle = new QLabel(MemberFrame);
        LibrarianHomeTitle->setObjectName(QString::fromUtf8("LibrarianHomeTitle"));
        LibrarianHomeTitle->setMaximumSize(QSize(16777215, 30));
        LibrarianHomeTitle->setStyleSheet(QString::fromUtf8("color: rgb(246, 240, 237);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"background-color: rgb(42, 83, 106);"));
        LibrarianHomeTitle->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(LibrarianHomeTitle);

        MemberBackground = new QFrame(MemberFrame);
        MemberBackground->setObjectName(QString::fromUtf8("MemberBackground"));
        MemberBackground->setStyleSheet(QString::fromUtf8("background: white;\n"
"background-color: rgb(229, 225, 214);"));
        MemberBackground->setFrameShape(QFrame::StyledPanel);
        MemberBackground->setFrameShadow(QFrame::Raised);
        pushButton_9 = new QPushButton(MemberBackground);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(10, 10, 191, 28));
        pushButton_9->setStyleSheet(QString::fromUtf8("font: 9pt \"Yu Gothic UI\";\n"
"color: rgb(0, 0, 0);"));
        pushButton_10 = new QPushButton(MemberBackground);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(10, 50, 191, 28));
        pushButton_10->setStyleSheet(QString::fromUtf8("font: 9pt \"Yu Gothic UI\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(MemberBackground);

        LibraryFrame = new QFrame(SideBarFrmae);
        LibraryFrame->setObjectName(QString::fromUtf8("LibraryFrame"));
        LibraryFrame->setGeometry(QRect(20, 30, 211, 271));
        LibraryFrame->setFrameShape(QFrame::StyledPanel);
        LibraryFrame->setFrameShadow(QFrame::Plain);
        verticalLayout_2 = new QVBoxLayout(LibraryFrame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        LibraryHeading = new QLabel(LibraryFrame);
        LibraryHeading->setObjectName(QString::fromUtf8("LibraryHeading"));
        LibraryHeading->setMaximumSize(QSize(16777215, 30));
        LibraryHeading->setStyleSheet(QString::fromUtf8("background: rgba(40, 83, 107, 1);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: white;"));
        LibraryHeading->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(LibraryHeading);

        LibraryBackground = new QFrame(LibraryFrame);
        LibraryBackground->setObjectName(QString::fromUtf8("LibraryBackground"));
        LibraryBackground->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"background-color: rgb(229, 225, 214);"));
        LibraryBackground->setFrameShape(QFrame::StyledPanel);
        LibraryBackground->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(LibraryBackground);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 0, 191, 231));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        btnAddBook = new QPushButton(layoutWidget);
        btnAddBook->setObjectName(QString::fromUtf8("btnAddBook"));

        verticalLayout_3->addWidget(btnAddBook);

        pushButton_13 = new QPushButton(layoutWidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setStyleSheet(QString::fromUtf8("font: 9pt \"Yu Gothic UI\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(pushButton_13);

        pushButton_14 = new QPushButton(layoutWidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setStyleSheet(QString::fromUtf8("font: 9pt \"Yu Gothic UI\";\n"
"color: rgb(0, 0, 0);\n"
""));

        verticalLayout_3->addWidget(pushButton_14);

        pushButton_16 = new QPushButton(layoutWidget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setStyleSheet(QString::fromUtf8("font: 9pt \"Yu Gothic UI\";\n"
"color: rgb(0, 0, 0);\n"
""));

        verticalLayout_3->addWidget(pushButton_16);

        pushButton_15 = new QPushButton(layoutWidget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setStyleSheet(QString::fromUtf8("font: 9pt \"Yu Gothic UI\";\n"
"color: rgb(0, 0, 0);\n"
""));

        verticalLayout_3->addWidget(pushButton_15);


        verticalLayout_2->addWidget(LibraryBackground);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(290, 0, 981, 741));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(223, 233, 239);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        LibrarianAdminHeading = new QLabel(frame);
        LibrarianAdminHeading->setObjectName(QString::fromUtf8("LibrarianAdminHeading"));
        LibrarianAdminHeading->setGeometry(QRect(410, 30, 209, 30));
        LibrarianAdminHeading->setMaximumSize(QSize(16777215, 30));
        LibrarianAdminHeading->setStyleSheet(QString::fromUtf8("background: rgba(40, 83, 107, 1);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: white;"));
        LibrarianAdminHeading->setAlignment(Qt::AlignCenter);
        listBooks = new QListWidget(frame);
        listBooks->setObjectName(QString::fromUtf8("listBooks"));
        listBooks->setGeometry(QRect(40, 230, 256, 431));
        searchFrame = new QFrame(frame);
        searchFrame->setObjectName(QString::fromUtf8("searchFrame"));
        searchFrame->setGeometry(QRect(230, 80, 551, 31));
        searchFrame->setStyleSheet(QString::fromUtf8("border: 1px solid #000000;\n"
"border-radius: 14px;\n"
"background-color: rgb(246, 240, 237);"));
        searchFrame->setFrameShape(QFrame::StyledPanel);
        searchFrame->setFrameShadow(QFrame::Plain);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(800, 80, 91, 31));
        QFont font;
        font.setPointSize(12);
        pushButton->setFont(font);
        btnRemove = new QPushButton(frame);
        btnRemove->setObjectName(QString::fromUtf8("btnRemove"));
        btnRemove->setGeometry(QRect(50, 690, 241, 31));
        btnRemove->setFont(font);
        lblStatus = new QLabel(frame);
        lblStatus->setObjectName(QString::fromUtf8("lblStatus"));
        lblStatus->setGeometry(QRect(450, 430, 221, 31));
        lblStatus->setFont(font);
        lblStatus->setFrameShape(QFrame::Panel);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(380, 240, 51, 21));
        label->setFont(font);
        lbl_ID = new QLabel(frame);
        lbl_ID->setObjectName(QString::fromUtf8("lbl_ID"));
        lbl_ID->setGeometry(QRect(450, 380, 221, 31));
        lbl_ID->setFont(font);
        lbl_ID->setFrameShape(QFrame::Panel);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(380, 290, 61, 21));
        label_3->setFont(font);
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(380, 430, 61, 21));
        label_7->setFont(font);
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(400, 390, 41, 21));
        label_6->setFont(font);
        lblDewey = new QLabel(frame);
        lblDewey->setObjectName(QString::fromUtf8("lblDewey"));
        lblDewey->setGeometry(QRect(450, 330, 221, 31));
        lblDewey->setFont(font);
        lblDewey->setFrameShape(QFrame::Panel);
        lblAuthor = new QLabel(frame);
        lblAuthor->setObjectName(QString::fromUtf8("lblAuthor"));
        lblAuthor->setGeometry(QRect(450, 280, 221, 31));
        lblAuthor->setFont(font);
        lblAuthor->setFrameShape(QFrame::Panel);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(380, 340, 61, 21));
        label_5->setFont(font);
        lblProductName = new QLabel(frame);
        lblProductName->setObjectName(QString::fromUtf8("lblProductName"));
        lblProductName->setGeometry(QRect(450, 230, 221, 31));
        lblProductName->setFont(font);
        lblProductName->setFrameShape(QFrame::Panel);
        lblImage = new QLabel(frame);
        lblImage->setObjectName(QString::fromUtf8("lblImage"));
        lblImage->setGeometry(QRect(770, 230, 121, 221));
        lblImage->setFrameShape(QFrame::Panel);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(380, 490, 51, 21));
        label_2->setFont(font);
        lblQuantity = new QLabel(frame);
        lblQuantity->setObjectName(QString::fromUtf8("lblQuantity"));
        lblQuantity->setGeometry(QRect(590, 490, 71, 31));
        lblQuantity->setFont(font);
        lblQuantity->setFrameShape(QFrame::Panel);
        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(50, 180, 111, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Yu Gothic UI")});
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("font: 12pt \"Yu Gothic UI\";"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(1020, 430, 51, 21));
        label_4->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1315, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        LibrarianHomeTitle->setText(QCoreApplication::translate("MainWindow", "M E M B E R S", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Add Member", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Edit Member Details", nullptr));
        LibraryHeading->setText(QCoreApplication::translate("MainWindow", "L I B R A R Y", nullptr));
        btnAddBook->setText(QCoreApplication::translate("MainWindow", "ADD A BOOK", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "ISSUE A BOOK", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "SEARCH A BOOK", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "UPDATE A BOOK", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "DUE DATES", nullptr));
        LibrarianAdminHeading->setText(QCoreApplication::translate("MainWindow", "LIBRARIAN HOME PAGE", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        btnRemove->setText(QCoreApplication::translate("MainWindow", "Remove Selected Product", nullptr));
        lblStatus->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Title:", nullptr));
        lbl_ID->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Author:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Status:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "ID :", nullptr));
        lblDewey->setText(QString());
        lblAuthor->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "Dewey:", nullptr));
        lblProductName->setText(QString());
        lblImage->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Copies:", nullptr));
        lblQuantity->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "List of Books", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
