#ifndef CAR_H
#define CAR_H


#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
    // Member Variables
    string name;
    int speed{};

    // Member Functions
    Car(); // Constructor

    Car(const string &, const int &); // Constructor with Initialization Member Variables

    Car(const Car &); // Copy Constructor

    Car &operator=(const Car &); // Copy Assignment Operator Override

    ~Car(); // Destructor
};


#endif //CAR_H
