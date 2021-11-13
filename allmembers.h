#ifndef ALLMEMBERS_H
#define ALLMEMBERS_H
#include <QString>


class AllMembers
{
public:
    AllMembers(QString Name, QString PhoneNumber, QString Email);

    void setMemberName(QString Name);
    QString getMemberName() const;

    void setPhoneNumber(QString Number);
    QString getPhoneNumber() const;

    void setEmail(QString Email);
    QString getEmail() const;

private:
    QString Name;
    QString Number;
    QString Email;
};

#endif // ALLMEMBERS_H
