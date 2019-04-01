#include "include/maildbparser.h"

int ReadDBFile(ifstream &ReadStream,vector<FullTag> *TagsList)
{
    string ParsingLine;
    bool Folder(false),Label(false),Message(false);

    ReadStream.open("messages.db");
    if(!ReadStream.is_open())
    {
        return 1;
    }

    while(ReadStream.eof()!=true)
    {
        string Parameter,Value;
        string::size_type Pos1,Pos2;
        FullTag OneTag;

        getline(ReadStream,ParsingLine,'<');
        OneTag.Description=ParsingLine;
        if(Folder || Label || Message)
            OneTag.Description=ParsingLine;

        getline(ReadStream,ParsingLine,'>');;
        Pos1=ParsingLine.find(' ');
        if(Pos1 == ParsingLine.npos)
        {
            //The absense of breaks is not a mistake.
            //This implementation of the switch means
            //that when the major tag is encountered
            //then all others must be closed.
            OneTag.Name=ParsingLine;
            switch(GetTagID(OneTag.Name))
            {
            case -1:
                Folder=false;
            case -2:
                Message=false;
            case -3:
                Label=false;
                break;
            }
        }
        OneTag.Name=ParsingLine.substr(0,Pos1);

        while(Pos1 != ParsingLine.npos)
        {
            Pos2=ParsingLine.find('=',Pos1);
            Parameter=ParsingLine.substr(Pos1,Pos2-Pos1);
            Pos1=ParsingLine.find(' ',Pos2);
            Value=ParsingLine.substr(Pos2,Pos1-Pos2);
            OneTag.Parameters.push_back(TagParameter(Parameter,Value));
        }
        TagsList->push_back(OneTag);
    }
    ReadStream.close();
    return 0;
}

int WriteDBFile(ofstream& WriteStream, vector<FullTag> &TagsList)
{
    WriteStream.open("messages.db");
    if(!WriteStream.is_open())
    {
        return 1;
    }

    WriteStream.close();
    return 0;
}

int GetTagID(string TagString)
{
    string UPPERTag;
    for(string::size_type StringChar=0; StringChar < TagString.length(); StringChar++)
    {
        UPPERTag.push_back(toupper(TagString[StringChar]));
    }
    if(UPPERTag == "/FOLDER")
        return -1;
    if(UPPERTag == "/MESSAGE")
        return -2;
    if(UPPERTag == "/LABEL")
        return -3;
    if(UPPERTag == "FOLDER")
        return 1;
    if(UPPERTag == "MESSAGE")
        return 2;
    if(UPPERTag == "LABEL")
        return 3;

    return 0;
}
