#ifndef ISSUEBOOK_H
#define ISSUEBOOK_H

#include <QDialog>

#include "allbooks.h"
#include "allmembers.h"

namespace Ui {
class issuebook;
}

class issuebook : public QDialog
{
    Q_OBJECT

public:
    explicit issuebook(AllBooks* issueBook, QWidget *parent = nullptr);
    explicit issuebook(AllMembers* issueMember, QWidget *parent = nullptr);

    ~issuebook();

    void search_i_member();
    void Bookissue();
    void exit();


private:
    Ui::issuebook *ui;
    AllBooks* issueBook;
    AllMembers* issueMember;
};

#endif // ISSUEBOOK_H
