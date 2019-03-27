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
        string Tag,Parameter,Value,TagText;
        string::iterator Finder;
        string::size_type Pos1,Pos2;

        getline(ReadStream,ParsingLine,'<');
        getline(ReadStream,ParsingLine,'>');
        Pos1=ParsingLine.find(' ');
        if(Pos1 == ParsingLine.npos)
        {
            //Определение тега.
            //Если он будет незакрывающим - автоматом  ошибка,
            //ибо незакрывающие теги имеют пробелы
            //по наличию в нем обязательных параметров
        }
        //Алгоритм на итераторах
        Finder=ParsingLine.begin();
        while(*Finder!=' ')
        {
            Tag.push_back(*Finder);
            Finder++;
        }
        while(Finder!=ParsingLine.end())
        {
            while(*Finder==' ')
            {
                Finder++;
            }
            while(*Finder!='=')
            {
                Parameter.push_back(*Finder);
            }
            Finder++;
            while(*Finder!=' ')
            {
                Value.push_back(*Finder);
            }
        }
        //Альтернатива итераторам
        Pos1=ParsingLine.find(' ');
        Tag=ParsingLine.substr(0,Pos1);
        while(Pos1 != ParsingLine.npos)
        {
            Pos2=ParsingLine.find('=',Pos1);
            Parameter=ParsingLine.substr(Pos1,Pos2-Pos1);
            Pos1=ParsingLine.find(' ',Pos2);
            Value=ParsingLine.substr(Pos2,Pos1-Pos2);
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
