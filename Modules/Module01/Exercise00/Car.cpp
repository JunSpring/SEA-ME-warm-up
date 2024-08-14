#include "Car.h"

// Constructor
Car::Car()
{
    cout << "Car was Constructed.";
}

// Constructor with Initialization Member Variables
Car::Car(const string &name, const int &speed) : name(name), speed(speed)
{
    cout << "Car with the Name '" << name << "' and the Speed of '" << speed << "' was Constructed." << endl;
}

// Copy Constructor
Car::Car(const Car &oldCar)
{
    name = oldCar.name;
    speed = oldCar.speed;

    cout << "Car with the Name '" << name << "' and the Speed of '" << speed << "' was Copied and New Constructed." <<
            endl;
}

// Copy Assignment Operator Override
Car &Car::operator=(const Car &oldCar)
{
    if (this != &oldCar)
        cout << "Car with the Name '" << name << "' and the Speed of '" << speed << "' was Copied." << endl;

    return *this;
}

// Destructor
Car::~Car()
{
    cout << "Car with the Name '" << name << "' was Destructed." << endl;
}
