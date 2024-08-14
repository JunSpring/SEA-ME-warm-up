#ifndef PHONEBOOK_H
#define PHONEBOOK_H


#include <iostream>
#include <algorithm>
#include "Contact.h"
using namespace std;

class Phonebook
{
private:
    void add();
    void search();
    void remove();
    void bookmark();
    void exit();

    vector<Contact> phonebookVector;
    bool running;

public:
    Phonebook();
};


#endif //PHONEBOOK_H
