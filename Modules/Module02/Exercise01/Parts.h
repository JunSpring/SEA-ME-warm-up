#ifndef PARTS_H
#define PARTS_H


#include "Part.h"

class Parts
{
public:
    virtual void printParts() = 0;

    virtual ~Parts() = default;
};

class PowerTrainParts : public Parts
{
private:
    Engine *engine_;
    Transmission *transmission_;
    Driveshaft *driveshafts_;

public:
    PowerTrainParts();

    void printParts() override;

    ~PowerTrainParts() override;
};

class ElectricalElectronicParts : public Parts
{
private:
    ElectronicControlUnit *electronicControlUnit;
    Battery *battery_;
    Light *light_;

public:
    ElectricalElectronicParts();

    void printParts() override;

    ~ElectricalElectronicParts() override;
};

class BrakingSteeringParts : public Parts
{
private:
    Wheel *wheels_;
    Brake *brakes_;
    Steering *steering_;
    Suspension *suspensions_;

public:
    BrakingSteeringParts();

    void printParts() override;

    ~BrakingSteeringParts() override;
};


#endif //PARTS_H
