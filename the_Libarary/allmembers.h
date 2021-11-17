#ifndef ALLMEMBERS_H
#define ALLMEMBERS_H
#include <QString>


class AllMembers
{
public:
   // AllMembers(QString Name, QString PhoneNumber, QString Email);
    AllMembers(QString Name, QString PhoneNumber, QString Email,QString one = "",QString two="",QString three="");

    void setMemberName(QString Name);
    QString getMemberName() const;

    void setPhoneNumber(QString Number);
    QString getPhoneNumber() const;

    void setEmail(QString Email);
    QString getEmail() const;

    void setBook1(QString one);
    QString getBook1() const;

    void setBook2(QString two);
    QString getBook2() const;

    void setBook3(QString three);
    QString getBook3() const;

private:
    QString Name;
    QString Number;
    QString Email;
    QString book1;
    QString book2;
    QString book3;
};

#endif // ALLMEMBERS_H
