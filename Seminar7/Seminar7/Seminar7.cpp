// Seminar7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "AutoFactory.h"
using namespace std;

int main()
{
    std::cout << "Hello World!\n";

    AutoFactory af;
    Auto *aut = af.create_auto(0);
    cout << *aut;

}


