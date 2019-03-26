#include "include/maildbparser.h"

void ReadDBFile(ifstream &ReadStream)
{
    string ParsingLine;
    bool Folder(false),Label(false),Message(false);

    ReadStream.open("messages.db");
    if(!ReadStream.is_open())
    {
        return;
    }

    while(ReadStream.eof()!=true)
    {
        string::iterator ParsingSymbol;
        size_t FindSym;
        string Tag,Parameter,Value,TagText;

        getline(ReadStream,ParsingLine,'<');
        getline(ReadStream,Tag,' ');
        getline(ReadStream,ParsingLine,'>');

        while()
        {


        }

//        getline(ReadStream,ParsingLine);

//        while(ParsingSymbol != ParsingLine.end())
//        {
//            if(*ParsingSymbol == ' ')
//            {
//                ParsingSymbol++;
//            }
//            if(*ParsingSymbol == '<')
//            {
//                Paired++;
//                while(*ParsingSymbol != ' ')
//                {
//                    ParsingSymbol++;
//                    Tag.push_back(*ParsingSymbol);
//                }
//                GetTagParameter(Tag);
//                ParsingSymbol++;
//            }
//
//            while(Paired != 0)
//            {
//                string TagParameters;
//                while(*ParsingSymbol==' ')
//                    ParsingSymbol++;
//                while(*ParsingSymbol!=' ')
//                {
//                    TagParameters.push_back(*ParsingSymbol);
//                    ParsingSymbol++;
//                }

//                string::iterator ParseValues = TagParameters.begin();
//                while(*ParseValues!='=')
//                {
//                    Parameter.push_back(*ParseValues);
//                    ParseValues++;
//                }
//                ParseValues++;
//                while (ParseValues!=TagParameters.end())
//                {
//                    if(*ParsingSymbol == '>')
//                    {
//                        Paired--;
//                        ParsingSymbol++;
//                    }
//                    Value.push_back(*ParseValues);
//                    ParseValues++;
//                }

//                if(*ParsingSymbol == '>')
//                {
//                    Paired--;
//                    ParsingSymbol++;
//                }
//            }

//        }
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

int GetTagParameter(string ParamWord)
{
    return 0;
}
