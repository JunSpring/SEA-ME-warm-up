#ifndef CAR_H
#define CAR_H


#include "Parts.h"

class Car
{
private:
    PowerTrainParts *powerTrainParts_;
    ElectricalElectronicParts *electricalElectronicParts_;
    BrakingSteeringParts *brakingSterringParts_;

public:
    Car();

    void printParts();

    ~Car();
};


#endif //CAR_H
