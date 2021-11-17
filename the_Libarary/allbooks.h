#ifndef ALLBOOKS_H
#define ALLBOOKS_H

#include <QString>

class AllBooks
{
private:

    QString title;
    QString author;
    QString dewey;
    QString status;
    QString bookimageFilePath;
    QString uniqueid;
    QString duedate;


public:
    AllBooks(QString t, QString a, QString d, QString s, QString id, QString image = "none.png", QString dd = "");

    void settitle(QString t);
    QString gettitle() const;

    void setauthor(QString a);
    QString getauthor() const;

    void setdewey(QString d);
    QString getdewey() const;

    void setstatus(QString s);
    QString getstatus() const;

    void setimage(QString image);
    QString getimage() const;

    void setid (QString id);
    QString getid() const;


    void setdd (QString dd);
    QString getdd() const;


};
#endif // ALLBOOKS_H
