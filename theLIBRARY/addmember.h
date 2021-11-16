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

    void on_btnSaveMember_clicked(); // NH moved from private to public

private:
    Ui::addMember *ui;
    AllMembers** newMember;

};

#endif // ADDMEMBER_H
