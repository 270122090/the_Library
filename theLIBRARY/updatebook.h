#ifndef UPDATEBOOK_H
#define UPDATEBOOK_H

#include <QDialog>

#include "allbooks.h"

namespace Ui {
class updatebook;
}

class updatebook : public QDialog
{
    Q_OBJECT

public:
    explicit updatebook (AllBooks* updateBook, QWidget *parent = nullptr);

    void Bookupdate();

    ~updatebook();

private:
    Ui::updatebook *ui;
    AllBooks* updateBook;
    QString bookpath;
};

#endif // UPDATEBOOK_H
