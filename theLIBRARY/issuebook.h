#ifndef ISSUEBOOK_H
#define ISSUEBOOK_H

#include <QDialog>

namespace Ui {
class issuebook;
}

class issuebook : public QDialog
{
    Q_OBJECT

public:
    explicit issuebook(QWidget *parent = nullptr);
    ~issuebook();

private:
    Ui::issuebook *ui;
};

#endif // ISSUEBOOK_H
