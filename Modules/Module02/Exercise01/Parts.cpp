#include "Parts.h"

PowerTrainParts::PowerTrainParts()
{
    engine_ = new Engine();
    transmission_ = new Transmission();
    driveshafts_ = new Driveshaft[2];
}

void PowerTrainParts::printParts()
{
    cout << "PowerTrain Parts" << endl;

    engine_->print();
    transmission_->print();
    for (int i = 0; i < 2; i++)
        driveshafts_[i].print();

    cout << endl;
}

PowerTrainParts::~PowerTrainParts()
{
    delete engine_;
    delete transmission_;
    delete [] driveshafts_;
}

ElectricalElectronicParts::ElectricalElectronicParts()
{
    electronicControlUnit = new ElectronicControlUnit;
    battery_ = new Battery;
    light_ = new Light;
}

void ElectricalElectronicParts::printParts()
{
    cout << "Electrical and Electronic Parts" << endl;

    electronicControlUnit->print();
    battery_->print();
    light_->print();

    cout << endl;
}

ElectricalElectronicParts::~ElectricalElectronicParts()
{
    delete electronicControlUnit;
    delete battery_;
    delete light_;
}

BrakingSteeringParts::BrakingSteeringParts()
{
    wheels_ = new Wheel[4];
    brakes_ = new Brake[4];
    steering_ = new Steering;
    suspensions_ = new Suspension[4];
}

void BrakingSteeringParts::printParts()
{
    cout << "Braking and Steering Parts" << endl;

    for (int i = 0; i < 4; i++)
        wheels_[i].print();
    for (int i = 0; i < 4; i++)
        brakes_->print();
    steering_->print();
    for (int i = 0; i < 4; i++)
        suspensions_->print();

    cout << endl;
}

BrakingSteeringParts::~BrakingSteeringParts()
{
    delete [] wheels_;
    delete [] brakes_;
    delete steering_;
    delete [] suspensions_;
}
