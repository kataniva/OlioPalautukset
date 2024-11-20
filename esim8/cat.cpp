#include "cat.h"

string Cat::getOwner() const
{
    return owner;
}

void Cat::setOwner(const string &newOwner)
{
    owner = newOwner;
}

Cat::~Cat()
{
    cout << "Cat olio tuhottiin" << endl;
}

Cat::Cat()
{
    cout << "Cat olio luotiin" << endl;
}

Cat::Cat(int w, string c, string o):Animal(w,c)
{
    this->setWeight(w);
    this->setColor(c);
    this->setOwner(o);
}
