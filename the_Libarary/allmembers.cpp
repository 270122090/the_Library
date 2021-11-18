
#include "allmembers.h"


AllMembers::AllMembers(QString Name, QString Number, QString Email, QString one,QString two,QString three)
{
    this->Name = Name;
    this->Number = Number;
    this->Email = Email;
    book1 = one;
    book2 = two;
    book3 = three;
}

// Name
void AllMembers::setMemberName(QString MemberName)
{
    this->Name = MemberName;
}

QString AllMembers::getMemberName() const
{
    return Name;
}



// Phone Number
void AllMembers::setPhoneNumber(QString number)
{
    Number = number;
}

QString AllMembers::getPhoneNumber() const
{
    return Number;
}


// Email
void AllMembers::setEmail(QString email)
{
    Email = email;
}

QString AllMembers::getEmail() const
{
    return Email;
}

void AllMembers::setBook1(QString one)
{
    book1=one;
}
QString AllMembers::getBook1() const
{
   return book1;
}

void AllMembers::setBook2(QString two)
{
    book2=two;
}
QString AllMembers::getBook2() const
{
    return book2;
}

void AllMembers::setBook3(QString three)
{
    book3=three;
}
QString AllMembers::getBook3() const
{
    return book3;
}
