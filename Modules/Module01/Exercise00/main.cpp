#include "Car.h"

int main()
{
    Car car1("car1", 100); // Constructor Test
    Car car2(car1); // Constructor and Copy Constructor Test
    Car car3 = car1; // Constructor and Copy Constructor Test
    car1 = car2; // Copy Assignment Operator Override Test

    return 0;
}
