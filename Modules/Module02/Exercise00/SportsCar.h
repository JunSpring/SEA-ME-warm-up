#ifndef SPORTSCAR_H
#define SPORTSCAR_H


#include "Car.h"

// Inheritance
class SportsCar : public Car
{
// Encapsulation
private:
    // Member Variable
    int topSpeed;

public:
    // Member Functions
    // Function Overloading
    SportsCar(); // Constructor

    SportsCar(const string &, const string &, const int &, const int &); // Constructor with Initialization Member Variables

    void Drive();
};


#endif //SPORTSCAR_H
