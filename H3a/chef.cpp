#include "chef.h"

Chef::Chef(string name)
{
    cout << name << " konstruktori" << endl;
}

void Chef::makeSalad()
{
    cout  << name << " makes salad" << endl;
}

void Chef::makeSoup()
{
      cout  << name << "makes salad" << endl;
}

Chef::~Chef()
{
    cout << name << " destruktori" << endl;
}

void Chef::setName(const string &newName)
{
    name = newName;
}
