/********************************************************************************
** Form generated from reading UI file 'updatemember.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEMEMBER_H
#define UI_UPDATEMEMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_updatemember
{
public:
    QWidget *layoutWidget_9;
    QGridLayout *gridLayout_5;
    QLabel *label_10;
    QLineEdit *lbluMemberName;
    QLabel *label_9;
    QLineEdit *lbluMemberNumber;
    QLabel *label_14;
    QLineEdit *lbluMemberEmail;
    QPushButton *btnsaveupdatemember;

    void setupUi(QDialog *updatemember)
    {
        if (updatemember->objectName().isEmpty())
            updatemember->setObjectName(QString::fromUtf8("updatemember"));
        updatemember->resize(518, 370);
        layoutWidget_9 = new QWidget(updatemember);
        layoutWidget_9->setObjectName(QString::fromUtf8("layoutWidget_9"));
        layoutWidget_9->setGeometry(QRect(70, 70, 351, 121));
        gridLayout_5 = new QGridLayout(layoutWidget_9);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget_9);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8("font: 75 9pt \"Yu Gothic UI\";"));

        gridLayout_5->addWidget(label_10, 0, 0, 1, 1);

        lbluMemberName = new QLineEdit(layoutWidget_9);
        lbluMemberName->setObjectName(QString::fromUtf8("lbluMemberName"));

        gridLayout_5->addWidget(lbluMemberName, 0, 2, 1, 1);

        label_9 = new QLabel(layoutWidget_9);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("font: 75 9pt \"Yu Gothic UI\";"));

        gridLayout_5->addWidget(label_9, 1, 0, 1, 1);

        lbluMemberNumber = new QLineEdit(layoutWidget_9);
        lbluMemberNumber->setObjectName(QString::fromUtf8("lbluMemberNumber"));

        gridLayout_5->addWidget(lbluMemberNumber, 1, 2, 1, 1);

        label_14 = new QLabel(layoutWidget_9);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setStyleSheet(QString::fromUtf8("font: 75 9pt \"Yu Gothic UI\";"));

        gridLayout_5->addWidget(label_14, 2, 0, 1, 1);

        lbluMemberEmail = new QLineEdit(layoutWidget_9);
        lbluMemberEmail->setObjectName(QString::fromUtf8("lbluMemberEmail"));

        gridLayout_5->addWidget(lbluMemberEmail, 2, 2, 1, 1);

        btnsaveupdatemember = new QPushButton(updatemember);
        btnsaveupdatemember->setObjectName(QString::fromUtf8("btnsaveupdatemember"));
        btnsaveupdatemember->setGeometry(QRect(340, 200, 80, 21));

        retranslateUi(updatemember);

        QMetaObject::connectSlotsByName(updatemember);
    } // setupUi

    void retranslateUi(QDialog *updatemember)
    {
        updatemember->setWindowTitle(QCoreApplication::translate("updatemember", "Dialog", nullptr));
        label_10->setText(QCoreApplication::translate("updatemember", "Name", nullptr));
        label_9->setText(QCoreApplication::translate("updatemember", "Number", nullptr));
        label_14->setText(QCoreApplication::translate("updatemember", "Email", nullptr));
        btnsaveupdatemember->setText(QCoreApplication::translate("updatemember", "SAVE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class updatemember: public Ui_updatemember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEMEMBER_H
