#include "Phonebook.h"

void Phonebook::add()
{
    Contact tempContact;
    string name;
    string phoneNumber;
    string nickname;

    cout << "Enter the Name : ";
    cin >> name;
    cout << "Enter the Phone Number : ";
    cin >> phoneNumber;
    cout << "Enter the Nickname : ";
    cin >> nickname;

    tempContact.name = name;
    tempContact.phoneNumber = phoneNumber;
    tempContact.nickname = nickname;

    if (any_of(phonebookVector.begin(), phonebookVector.end(), [tempContact](const Contact &contact)
    {
        return tempContact.phoneNumber == contact.phoneNumber;
    }))
    {
        cout << "There is the Same Phone Number in Phonebook. Please Retry." << endl;
        return;
    }

    phonebookVector.push_back(tempContact);
}

void Phonebook::search()
{
    for (int i = 0; i < phonebookVector.size(); i++)
        cout << i + 1 << ". " << phonebookVector[i].nickname << endl;
    cout << endl;

    int command;
    cout << "1. Display Details of the Contact" << endl;
    cout << "2. Bookmark the Contact" << endl;
    cout << "Enter the Command Number : ";
    cin >> command;
    cout << endl << endl;

    if (command == 1)
    {
        int i;
        cout << "Enter the Index Number : ";
        cin >> i;
        cout << endl << endl;
        i -= 1;

        if (i < 0 || i >= phonebookVector.size())
        {
            cout << "There is not the Index in Phonebook." << endl;
            return;
        }

        cout << "- Name : " << phonebookVector[i].name << endl;
        cout << "- Phone Number : " << phonebookVector[i].phoneNumber << endl;
        cout << "- Nickname : " << phonebookVector[i].nickname << endl;
    } else if (command == 2)
    {
        int i;
        cout << "Enter the Index Number : ";
        cin >> i;
        cout << endl << endl;
        i -= 1;

        if (i < 0 || i >= phonebookVector.size())
        {
            cout << "There is not the Index in Phonebook." << endl;
            return;
        }

        phonebookVector[i].isBookmarked = true;
        cout << "Successfully Bookmarked." << endl;
    } else
    {
        cout << "Please Enter the Correct Command Number." << endl;
    }
}

void Phonebook::remove()
{
    int command;
    cout << "1. Remove a Contact with an Index" << endl;
    cout << "2. Remove a Contact with a Phone Number" << endl;
    cout << "Enter the Command Number : ";
    cin >> command;
    cout << endl << endl;

    if (command == 1)
    {
        int i;
        cout << "Enter the Index Number : ";
        cin >> i;
        cout << endl << endl;
        i -= 1;

        if (i < 0 || i >= phonebookVector.size())
        {
            cout << "There is not the Index in Phonebook." << endl;
            return;
        }

        phonebookVector.erase(phonebookVector.begin() + i);
        cout << "Successfully Removed." << endl;
    } else if (command == 2)
    {
        string phoneNumber;
        cout << "Enter the Phone Number : ";
        cin >> phoneNumber;
        cout << endl << endl;

        vector<Contact>::iterator it = find_if(phonebookVector.begin(), phonebookVector.end(),
                                               [phoneNumber](const Contact &contact)
                                               {
                                                   return phoneNumber == contact.phoneNumber;
                                               });

        if (it == phonebookVector.end())
        {
            cout << "There is not the Phone Number in Phonebook." << endl;
            return;
        }

        phonebookVector.erase(it);
        cout << "Successfully Removed." << endl;
    } else
    {
        cout << "Please Enter the Correct Command Number." << endl;
    }
}

void Phonebook::bookmark()
{
    int i = 1;
    for(const Contact &contact : phonebookVector)
        if(contact.isBookmarked)
            cout << i++ << ". " << contact.nickname << endl;
}

void Phonebook::exit()
{
    running = false;
    cout << "Shut Down the Program." << endl;
}

Phonebook::Phonebook()
{
    running = true;

    cout << "Phonebook Created by Jun-Beom" << endl << endl;

    while (running)
    {
        int command;
        cout << "1. ADD" << endl;
        cout << "2. SEARCH" << endl;
        cout << "3. REMOVE" << endl;
        cout << "4. BOOKMARK" << endl;
        cout << "5. EXIT" << endl;
        cout << "Enter the Command Number : ";
        cin >> command;
        cout << endl << endl;

        switch (command)
        {
            case 1:
                add();
                break;
            case 2:
                search();
                break;
            case 3:
                remove();
                break;
            case 4:
                bookmark();
                break;
            case 5:
                exit();
                break;
            default:
                cout << "Please Enter the Correct Menu Number." << endl;
                break;
        }

        cout << endl << endl;
    }
}
