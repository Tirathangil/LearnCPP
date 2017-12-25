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

#endif // CLASSES_H
