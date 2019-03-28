/***********************************************/
/* Отдельная библиотека для задания 13         */
/* Парсер для базы данных почты                */
/* Отделен от остального для упрощения проекта */
/***********************************************/

#ifndef MAILDBPARSER_H
#define MAILDBPARSER_H
#include <fstream>
#include <set>
#include <vector>
#include <string>

using namespace std;

typedef pair<string,string> TagParameter;

struct FullTag
{
    string Name;
    string Description;
    vector<TagParameter> Parameters;
};

int ReadDBFile(ifstream&,vector<FullTag>&);
int WriteDBFile(ofstream&,vector<FullTag>&);
int GetTagID(string);

#endif // MAILDBPARSER_H
