#include "Car.h"
#include "SportsCar.h"

int main()
{
    // Exercise01
    /*SportsCar sportsCar1;
    sportsCar1.make = "Volkswagen";
    sportsCar1.model = "Golf GTI";
    sportsCar1.year = 2024;
    sportsCar1.topSpeed = 300;
    sportsCar1.Drive();*/

    // Exercise02
    SportsCar sportsCar2("Volkswagen", "Golf GTI", 2024, 300);
    sportsCar2.Drive();

    return 0;
}
