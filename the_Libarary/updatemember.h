#ifndef UPDATEMEMBER_H
#define UPDATEMEMBER_H

#include <QDialog>

#include "allmembers.h"

namespace Ui {
class updatemember;
}

class updatemember : public QDialog
{
    Q_OBJECT

public:
    explicit updatemember(AllMembers* updatethemember, QWidget *parent = nullptr);
    ~updatemember();

     void update_a_member();



private:
    Ui::updatemember *ui;
    AllMembers* updatethemember;
 };

#endif // UPDATEMEMBER_H
