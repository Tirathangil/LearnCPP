#ifndef CLASSES_H
#define CLASSES_H

#include <fstream>

class Ex12_21
{
    const std::string Str;
    int Num;
    double *DblNum;
    std::ifstream &FileStream;
public:
    Ex12_21(std::ifstream& );
    void show_values();
};

//Упражнения раздела 12.6.1

class Foo
{
    int InteVar;
public:
    Foo();
    Foo(int InitVar);
    inline int getVar(){return InteVar;};
};

#endif // CLASSES_H
