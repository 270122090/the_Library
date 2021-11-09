#include "allbooks.h"


AllBooks::AllBooks(QString t, QString a, QString d, QString s, QString id, int q, QString image)
{
    title = t;
    author = a;
    dewey = d;
    status = s;
    uniqueid = id;
    qty = q;
    bookimageFilePath = image;
}


void AllBooks::settitle(QString t)
{
    title = t;
}
QString AllBooks::gettitle() const
{
    return title;
}

//
void AllBooks::setauthor(QString a)
{
    author = a;
}

QString AllBooks::getauthor() const
{
    return author;
}

//
void AllBooks::setdewey(QString d)
{
    dewey = d;
}

QString AllBooks::getdewey() const
{
    return dewey;
}

void AllBooks::setstatus(QString s)
{
    status = s;
}

QString AllBooks::getstatus() const
{
    return status;
}

void AllBooks::setimage(QString image)
{
    bookimageFilePath = image;
}

QString AllBooks::getimage() const
{
    return bookimageFilePath;
}

void AllBooks::setid (QString id)
{
    uniqueid = id;
}

QString AllBooks::getid() const
{
    return uniqueid;
}
void AllBooks::setqty (int q)
{
     qty = q;
}
int AllBooks::getqty() const
{
    return qty;
}
