#ifndef CAR_H
#define CAR_H


#include <iostream>
#include <string>
using namespace std;

class Car
{
// Encapsulation
protected:
    // Member Variables
    string make;
    string model;
    int year;

    // Member Function
    void Drive();

public:
    // Member Functions
    // Function Overloading
    Car(); // Constructor

    Car(const string &, const string &, const int &); // Constructor with Initialization Member Variables
};


#endif //CAR_H
