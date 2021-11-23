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

    void save_the_member();


private:
    Ui::addmember *ui;
    QVector <AllMembers*> memberList;
    AllMembers** newmembers;
};

#endif // ADDMEMBER_H
