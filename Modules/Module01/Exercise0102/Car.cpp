#include "Car.h"

void Car::Drive()
{
    cout << "Drive " << make << " " << model << " " << year << " edition." << endl;
}

// Constructor
Car::Car()
{
    cout << "Car was Constructed." << endl;
}

// Constructor with Initialization Member Variables
Car::Car(const string &make, const string &model, const int &year)
    : make(make), model(model), year(year)
{
    cout << "Car(" << make << " " << model << " " << year << " edition) was Constructed." << endl;
}
