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
    int qty;


public:
    AllBooks(QString t, QString a, QString d, QString s, QString id, int q, QString image = "none.png");

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

    void setqty (int q);
    int getqty() const;


};
#endif // ALLBOOKS_H
