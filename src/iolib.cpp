#include "include/iolib.h"
#include <iostream>
#include <string>

std::istream& Exercise8_3(std::istream &DataStream)
{
    using namespace std;

    string Buf;

    while(!DataStream.eof())
    {
        DataStream >> Buf;
        if (Buf == "end" || Buf == "End")
            DataStream.setstate(ios_base::eofbit);
        cout << Buf << endl;
    }

    DataStream.clear();

    return DataStream;
}
