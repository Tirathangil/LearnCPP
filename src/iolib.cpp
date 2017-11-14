#include "include/iolib.h"
#include <iostream>
#include <string>

std::istream& Exercise8_3(std::istream &DataStream)
{
    using namespace std;

    while(!DataStream.eof())
    {
        string Buf;
        DataStream >> Buf;
    }

    return DataStream;
}
