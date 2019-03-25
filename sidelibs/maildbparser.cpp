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
        int Paired(0);                      //Переменная для подсчета треугольных скобок. < = +1, > = -1;
        getline(ReadStream,ParsingLine);
        string::iterator ParsingSymbol = ParsingLine.begin();
        string Tag,Parameter,Value;
        while(ParsingSymbol != ParsingLine.end())
        {
            if(*ParsingSymbol == ' ')
            {
                ParsingSymbol++;
            }
            if(*ParsingSymbol == '<')
            {
                Paired++;
                while(*ParsingSymbol != ' ')
                {
                    ParsingSymbol++;
                    Tag.push_back(*ParsingSymbol);
                }
                GetTagParameter(Tag);
                ParsingSymbol++;
            }
            if(*ParsingSymbol == '>')
            {
                Paired--;
                ParsingSymbol++;
                continue;
            }

            if(Paired != 0)
            {
                string TagParameters;
                while(*ParsingSymbol==' ')
                    ParsingSymbol++;
                while(*ParsingSymbol!=' ')
                {
                    TagParameters.push_back(*ParsingSymbol);
                    ParsingSymbol++;
                }

                string::iterator ParseValues = TagParameters.begin();
                while(*ParseValues!='=')
                {
                    Parameter.push_back(*ParseValues);
                    ParseValues++;
                }
                ParseValues++;
                while (ParseValues!=TagParameters.end())
                {
                    Value.push_back(*ParseValues);
                    ParseValues++;
                }
            }
        }
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
