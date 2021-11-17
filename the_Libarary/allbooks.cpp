#include "allbooks.h"


AllBooks::AllBooks(QString t, QString a, QString d, QString s, QString id, QString image, QString dd)
{
    title = t;
    author = a;
    dewey = d;
    status = s;
    uniqueid = id;
    bookimageFilePath = image;
    duedate = dd;
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

void AllBooks::setdd (QString dd)
{
    duedate = dd;
}
QString AllBooks::getdd() const
{
    return duedate;

}
