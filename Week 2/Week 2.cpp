// Week 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Employee.h"

int main()
{
    std::cout << "Hello World!\n";
    Employee workers[2];

    for (int count = 0; count < sizeof(workers); count++) {
        workers[count].Read();

    }

}
