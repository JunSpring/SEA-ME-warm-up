#ifndef CONTACT_H
#define CONTACT_H


#include <string>
using namespace std;

class Contact
{
public:
    Contact();

    string name;
    string phoneNumber;
    string nickname;
    bool isBookmarked;
};


#endif //CONTACT_H
