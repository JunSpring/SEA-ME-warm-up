#ifndef CONTACT_H
#define CONTACT_H


#include <QString>
using namespace std;

class Contact
{
private:
    QString name;
    QString phoneNumber;
    QString emailAddress;

public:
    Contact(const QString &, const QString &, const QString &);

    QString getName() const;

    void setName(const QString &);

    QString getPhoneNumber() const;

    void setPhoneNumber(const QString &);

    QString getEmailAddress() const;

    void setEmailAddress(const QString &);
};


#endif //CONTACT_H
