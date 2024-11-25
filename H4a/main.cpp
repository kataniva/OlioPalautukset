#include "car.h"
#include <iostream>

using namespace std;

int main()
{

    Car objCar;
    objCar.setModel("Toyota");
    objCar.setBrand("Corolla");
    objCar.setEngine();
    objCar.setWheels();
    objCar.printDetails();

    return 0;
}
