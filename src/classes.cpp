#include "include/classes.h"
#include <iostream>

Ex12_21::Ex12_21(std::ifstream &InFile): Str("Ex12_21"),FileStream(InFile)
{
}

void Ex12_21::show_values()
{
    std::cout << Str << std::endl;
}

Foo::Foo(): InteVar(0)
{
}

Foo::Foo(int InitVar): InteVar(InitVar)
{
}

int Bar::Calls = 0;
Foo Bar::FooStat(7);

Foo Bar::FooVal()
{
    Calls++;
    std::cout << "Value: " << FooStat.getVar() << std::endl;
    return FooStat;
}
void Bar::callsFooVal()
{
    std::cout << "Calls: " << Calls << std::endl;
}
