#include "ContactList.h"

void ContactList::addContact(const Contact &newContact)
{
    contactList.push_back(newContact);
}

void ContactList::removeContact(const QString &name)
{
    contactList.erase(std::remove_if(contactList.begin(), contactList.end(),
                                     [&name](const Contact &c) { return c.getName() == name; }),
                      contactList.end());
}

vector<Contact> ContactList::getAllContacts() const
{
    return contactList;
}

void ContactList::saveToFile(const QString &filename) const
{
    QFile file(filename);
    if (file.open(QIODevice::WriteOnly))
    {
        QTextStream out(&file);
        for (const auto &contact: contactList)
        {
            out << contact.getName() << "," << contact.getPhoneNumber() << "," << contact.getEmailAddress() << endl;
        }
    }
    file.close();
}

void ContactList::loadFromFile(const QString &filename)
{
    QFile file(filename);
    if (file.open(QIODevice::ReadOnly))
    {
        contactList.clear();
        QTextStream in(&file);
        while (!in.atEnd())
        {
            QString line = in.readLine();
            QStringList parts = line.split(",");
            if (parts.size() == 3)
            {
                contactList.emplace_back(parts[0], parts[1], parts[2]);
            }
        }
    }
    file.close();
}
