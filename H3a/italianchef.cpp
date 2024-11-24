#include "italianchef.h"

ItalianChef::ItalianChef(string) :Chef(name)
{

}

ItalianChef::~ItalianChef()
{
    cout << name << " destruktor" << endl;
}

void ItalianChef::makePasta()
{
    cout << name << " make pasta" << endl;
}

string ItalianChef::getName()
{
    return name;
}
