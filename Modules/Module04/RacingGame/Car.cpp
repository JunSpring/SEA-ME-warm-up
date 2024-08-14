#include "Car.h"

void Car::move()
{
    position += speed * direction;
    emit positionChanged(position);
}
