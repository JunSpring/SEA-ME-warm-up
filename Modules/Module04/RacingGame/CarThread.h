#ifndef CARTHREAD_H
#define CARTHREAD_H


#include <thread>
#include <mutex>
#include "QThread"
#include "Car.h"
#include "RaceTrack.h"

inline std::mutex mutex;

class CarThread : public QThread
{
private:
    Car *car;
    RaceTrack *raceTrack;

public:
    CarThread(Car *car) : car(car) {}

    void run();

    void updatePosition();
};


#endif //CARTHREAD_H
