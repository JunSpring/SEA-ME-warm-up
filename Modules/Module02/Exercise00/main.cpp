#include <memory>
#include "Car.h"
#include "SportsCar.h"

int main()
{
    unique_ptr<SportsCar> sportsCarPtr1(new SportsCar("Volkswagen", "Golf GTI", 2024, 300));
    sportsCarPtr1->Drive();
    cout << endl;

    unique_ptr<SportsCar> sportsCarPtr2(new SportsCar("Ford", "Mustang Shelby GT500", 2024, 290));
    sportsCarPtr2->Drive();
    cout << endl;

    sportsCarPtr2 = move(sportsCarPtr1);
    sportsCarPtr2->Drive();
    cout << endl;

    sportsCarPtr1->Drive(); // Can't Access

    return 0;
}
