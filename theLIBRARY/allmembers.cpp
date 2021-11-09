#include "allmembers.h"

AllMembers::AllMembers(QString Name, QString Number, QString Email)
{
    this->Name = Name;
    this->Number = Number;
    this->Email = Email;
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
