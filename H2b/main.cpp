#include "car.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<Car> carList;
    Car objCar_1=Car("Toyota", "Corolla", 2009);
    Car objCar_2=Car("Mersu", "Sedan", 1988);
    Car objCar_3=Car("BMW", "Coupe", 2006);

    carList.push_back(objCar_1);
    carList.push_back(objCar_2);
    carList.push_back(objCar_3);

    carList[1].printData();

    cout<<"Autot:"<<endl;
    for (int x=0; x<=2; x++){

        carList[x].printData();
    }

    return 0;
}
