#include "SportsCar.h"

// Constructor
SportsCar::SportsCar()
{
    cout << "Sports Car was Constructed." << endl;
}

// Constructor with Initialization Member Variables
SportsCar::SportsCar(const string &make, const string &model, const int &year, const int &topSpeed): Car(make, model, year), topSpeed(topSpeed)
{
    cout << "Sports Car(" << make << " " << model << " " << year << " edition / Top Speed : " << topSpeed <<") was Constructed." << endl;
}

void SportsCar::Drive()
{
    Car::Drive();
    cout << "Top Speed is " << topSpeed << "." << endl;
}
