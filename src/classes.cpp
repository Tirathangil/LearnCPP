#include "include/classes.h"
#include <iostream>

Ex12_21::Ex12_21(std::ifstream &InFile): Str("Ex12_21"),FileStream(InFile)
{
};

void Ex12_21::show_values()
{
    std::cout << Str << std::endl;
}
