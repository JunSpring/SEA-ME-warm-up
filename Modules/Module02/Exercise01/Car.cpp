#include "Car.h"

Car::Car()
{
    powerTrainParts_ = new PowerTrainParts;
    electricalElectronicParts_ = new ElectricalElectronicParts;
    brakingSterringParts_ = new BrakingSteeringParts;
}

void Car::printParts()
{
    powerTrainParts_->printParts();
    electricalElectronicParts_->printParts();
    brakingSterringParts_->printParts();
}

Car::~Car()
{
    delete powerTrainParts_;
    delete electricalElectronicParts_;
    delete brakingSterringParts_;
}
