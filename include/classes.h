#ifndef CLASSES_H
#define CLASSES_H

#include <fstream>
#include <string>

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

class Bar
{
    static int Calls;
    static Foo FooStat;
public:
    static Foo FooVal();
    static void callsFooVal();
};

//Упражнение 13.10
class Employee
{
    std::string Name;
    int UID;
    static int LastUID;
    static int setUID();
public:
    Employee();
    Employee(Employee& NextEmplo);
    Employee& operator=(const Employee &EqEmplo);

    inline int getUID()
    {
      return UID;
    }
};
#endif // CLASSES_H
