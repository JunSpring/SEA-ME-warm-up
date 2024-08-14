#include "Contact.h"

Contact::Contact(const QString &name, const QString &phoneNumber, const QString &emailAddress)
    : name(name), phoneNumber(phoneNumber), emailAddress(emailAddress)
{
}

QString Contact::getName() const
{
    return name;
}

void Contact::setName(const QString &name)
{
    this->name = name;
}

QString Contact::getPhoneNumber() const
{
    return phoneNumber;
}

void Contact::setPhoneNumber(const QString &phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

QString Contact::getEmailAddress() const
{
    return emailAddress;
}

void Contact::setEmailAddress(const QString &emailAddress)
{
    this->emailAddress = emailAddress;
}
