#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QListWidgetItem>

#include <addbook.h>
#include <updatebook.h>
#include <allbooks.h>
#include <allmembers.h>
#include <addmember.h>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void add_a_Book();
    void search_a_Book();
    void remove_a_Book();

    void add_a_member();

    //void loaditem();
    void displayBookDetails();
    void update_a_Book();


private:
    Ui::MainWindow *ui;
    AddBook *admin_addbook;
    updatebook *admin_updatebook;

    QVector <AllBooks*> booklist;
    QVector <AllMembers*> memberList;


};
#endif // MAINWINDOW_H
