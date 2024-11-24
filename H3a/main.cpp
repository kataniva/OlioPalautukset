#include "chef.h"
#include "italianchef.h"
#include <iostream>
using namespace std;

int main()
{

    Chef objChef = Chef("Gordon Ramsay");
    ItalianChef objItalianChef = ItalianChef("Anthony Bourdain");
    objChef.makeSalad();
    objChef.makeSoup();
    objItalianChef.makeSalad();
    objItalianChef.makeSoup();
    objItalianChef.makePasta();

    return 0;
}
