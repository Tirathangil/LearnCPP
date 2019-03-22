#include "include/maildbparser.h"

void ReadDBFile(ifstream &ReadStream)
{
    string ParsingLine;
    ReadStream.open("messages.db");
    if(!ReadStream.is_open())
    {
        return;
    }
    while(ReadStream.eof()!=true)
    {
        getline(ReadStream,ParsingLine);
    }
    ReadStream.close();
}

void WriteDBFile(ofstream& WriteStream)
{
    WriteStream.open("messages.db");
    if(!WriteStream.is_open())
    {
        return;
    }

    WriteStream.close();
}


