#include "cat.h"
#include <iostream>
#include <ostream>

string cat::getColor() const
{
    return color;
}

void cat::setColor(const string &newColor)
{
    color = newColor;
}

string cat::getName() const
{
    return name;
}

void cat::setName(const string &newName)
{
    name = newName;
}

void cat::printData()
{
    cout << "Nimi = "  << name << " ja vari = " << color << endl;
}

cat::cat()
{

}

cat::cat(string n, string c)
{
    name=n;
    color=c;
}
