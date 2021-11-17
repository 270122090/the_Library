#ifndef ADDMEMBER_H
#define ADDMEMBER_H

#include <QDialog>

#include "allmembers.h"

namespace Ui {
class addmember;
}

class addmember : public QDialog
{
    Q_OBJECT

public:
    explicit addmember(AllMembers*& newmembers, QWidget *parent = nullptr);
    ~addmember();

    void save_a_member();
    void btn_exit_adding_member();

private:
    Ui::addmember *ui;

    AllMembers** newmembers;
};

#endif // ADDMEMBER_H
