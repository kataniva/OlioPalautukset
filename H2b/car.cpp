#include "car.h"
#include <iostream>
using namespace std;

Car::Car()
{

}

void Car::printData()
{
    cout << "merkki=" << brand << " malli=" << model << " valmistumisvuosi=" << yearModel << endl;
}

Car::Car(string b, string m, int y)
{
    brand = b;
    model = m;
    yearModel = y;
}
