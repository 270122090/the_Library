#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>

#include "allmembers.h"
#include "allbooks.h"



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

//*********** M E M B E R S ***********\\

    void add_a_member();
    void update_a_member();
    void search_a_member();
    void display_membersdetails();
    void display_memberlist();

//*********** B O O K S***********\\



private:
    Ui::MainWindow *ui;

    QVector <AllBooks*> booklist;
    QVector <AllMembers*> memberList;

};
#endif // MAINWINDOW_H
