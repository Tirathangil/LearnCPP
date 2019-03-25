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

void ReadDBFile(ifstream&);
void WriteDBFile(ofstream&);
int GetTagParameter(string);
int GetTagValues(string);
string GetTagText(string);







#endif // MAILDBPARSER_H
