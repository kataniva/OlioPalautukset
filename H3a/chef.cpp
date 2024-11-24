#include "chef.h"

Chef::Chef(string n)
{
    name=n;
    cout << name << " konstruktor" << endl;
}

Chef::~Chef()
{
    cout << name << " destruktor" << endl;
}

void Chef::makeSalad()
{
    cout << name << " make salad" << endl;
}

void Chef::makeSoup()
{
    cout << name << " make soup" << endl;
}
