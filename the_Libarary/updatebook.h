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
    explicit updatebook(AllBooks* updatethebook, QWidget *parent = nullptr);
    ~updatebook();

    void update_a_Book();

private:
    Ui::updatebook *ui;
    AllBooks* updatethebook;
};

#endif // UPDATEBOOK_H
