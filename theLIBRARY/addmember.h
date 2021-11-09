#ifndef ADDMEMBER_H
#define ADDMEMBER_H
#include "allmembers.h"
#include <QDialog>

namespace Ui {
class addMember;
}

class addMember : public QDialog
{
    Q_OBJECT

public:
    explicit addMember(AllMembers*& newMember, QWidget *parent = nullptr);
    ~addMember();

    //void confirmAdd();

private:
    Ui::addMember *ui;
    AllMembers** newMember;
    void on_btnSaveMember_clicked();
};

#endif // ADDMEMBER_H
