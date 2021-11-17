#ifndef ADDBOOK_H
#define ADDBOOK_H

#include <QDialog>

#include "allbooks.h"


namespace Ui {
class addbook;
}

class addbook : public QDialog
{
    Q_OBJECT

public:
    explicit addbook(AllBooks*& newbook, QWidget *parent);
    ~addbook();

    void loadbookimage();
    void save_a_book();

private:
    Ui::addbook *ui;

    AllBooks** newbook;
    QString bookpath;
};

#endif // ADDBOOK_H
