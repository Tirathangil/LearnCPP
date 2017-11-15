#include "include/iolib.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

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
void Exercize8_9()
{
    using namespace std;

    vector<string> ExVect;
    ifstream FileStr;

    FileStr.open("test.txt");
    if(!FileStr.is_open())
        throw 1;
    while(!FileStr.eof())
    {
        string Buf;
        getline(FileStr,Buf);
        ExVect.push_back(Buf);
    }

    for (int i=0;i<ExVect.size();i++)
    {
        cout << ExVect[i] << " ";
    }
    return;
}
