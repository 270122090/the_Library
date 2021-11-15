#ifndef UPDATEMEMBER_H
#define UPDATEMEMBER_H

#include <QDialog>

namespace Ui {
class updateMember;
}

class updateMember : public QDialog
{
    Q_OBJECT

public:
    explicit updateMember(QWidget *parent = nullptr);
    ~updateMember();

private:
    Ui::updateMember *ui;
};

#endif // UPDATEMEMBER_H
