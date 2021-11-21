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
    //MainWindow(AllMembers* &ptrmembers, QWidget *parent = nullptr);
    //MainWindow(AllMembers* ptreditmember, QWidget *parent = nullptr);
    ~MainWindow();

//*********** M E M B E R S ***********

    void add_a_member();
    void update_a_member();
    void search_a_member();
    void display_membersdetails();
    void display_memberlist();


//*********** B O O K S***********

    void add_a_Book();
    void search_a_Book();
    void remove_a_Book();
    void update_a_Book();
    void return_a_Book();
    void display_booklist();
    void display_bookdetails();


    void display_memberilist();
    void display_membersidetails();
    void display_bookidetails();
    void search_i_member();
    void search_i_Book();

    void issue_a_Book();

    void display_overduebooks();
    void overdue_BookQINFO();


private:
    Ui::MainWindow *ui;

    QVector <AllBooks*> booklist;
    QVector <AllMembers*> memberList;

};
#endif // MAINWINDOW_H


