#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <iostream>
#include <memory>
using namespace std;

int main()
{
    Car objCar;
    objCar.setBrand("Toyota");
    objCar.setModel("Corolla");
    objCar.setYearModel(2008);
    objCar.printData();

    Rectangle *objRectangle=new Rectangle;
    objRectangle->setHeight(3);
    objRectangle->setWidth(6);
    cout << "Suorakulmion pinta-ala=" << objRectangle->getArea() << endl;
    cout << "Suorakulmion ymparysmitta=" << objRectangle->getCircum() << endl;
    delete objRectangle;
    objRectangle=nullptr;

    unique_ptr<Student> objStudent=make_unique<Student>();
    objStudent->setName("Teppo Testi");
    objStudent->setStudentNumber(12);
    objStudent->setAverage(8.5);
    cout << "nimi="<< objStudent->getName() << " opiskelijanumero=" << objStudent->getStudentNumber() << " keskiarvo=" << objStudent->getAverage() << endl;
    return 0;
}
