#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QListWidgetItem>

#include <addbook.h>
#include <updatebook.h>
#include <allbooks.h>
#include <allmembers.h>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void add_a_Book();// NH
    void search_a_Book();//JdS
    void remove_a_Book();// NH
    void update_a_Book();//JdS
    void loadbooks(); //NH
    void displayBookDetails();// NH

    void issue_a_Book();// NH
    void clear_a_Book();

    void load_i_book();// NH
    void display_i_BookDetails();// NH
    void search_i_Book(); //JdS

    void load_o_Book();// NH
    void display_o_BookDetails();// NH

    void add_a_member();//JdS // NH
    void search_a_member();//JdS
    void loadmembers(); // NH
    void displayMemberDetails();// NH

    void search_i_member();// NH
    void load_i_members();// NH
    void display_i_MemberDetails();// NH


    void overduereminder();


private:
    Ui::MainWindow *ui;

    QVector <AllBooks*> booklist;
    QVector <AllMembers*> memberList;

};
#endif // MAINWINDOW_H
