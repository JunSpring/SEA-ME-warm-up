#ifndef CONTACTLIST_H
#define CONTACTLIST_H


#include <QFile>
#include <QTextStream>
#include <QIODevice>
#include <vector>
#include "Contact.h"
using namespace std;

class ContactList
{
private:
    vector<Contact> contactList;

public:
    void addContact(const Contact &);

    void removeContact(const QString &name);

    vector<Contact> getAllContacts() const;

    void saveToFile(const QString& filename) const;

    void loadFromFile(const QString& filename);
};


#endif //CONTACTLIST_H
