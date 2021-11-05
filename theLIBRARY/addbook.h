#ifndef ADDBOOK_H
#define ADDBOOK_H
#include <QDialog>
#include <allbooks.h>

namespace Ui {
class AddBook;
}

class AddBook : public QDialog
{
    Q_OBJECT

public:
    explicit AddBook(AllBooks*& newbook, QWidget *parent = nullptr);
    ~AddBook();

       void loadbookimage();
       void on_btnexitaddbook_clicked();
       void on_btnsavebook_clicked();



private:
    Ui::AddBook *ui;

    AllBooks** newbook;
    QString bookpath;

};

#endif // ADDBOOK_H
