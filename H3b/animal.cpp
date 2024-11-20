#include "animal.h"
#include <iostream>
using namespace std;

Animal::Animal()
{

}

Animal::~Animal()
{
    cout << "Animal olio tuhoutuu" << endl;
}

void Animal::callOut()
{
    cout << "Elain aantelee" << endl;
}
