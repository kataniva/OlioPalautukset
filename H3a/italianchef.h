#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#pragma once
#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef(string);
    ~ItalianChef();
    void makePasta();
    string getName();
};

#endif // ITALIANCHEF_H
