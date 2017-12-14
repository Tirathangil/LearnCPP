#include "include/algos.h"
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

void Exercise11_3()
{
    vector<int> AlgVec = {1,2,3,4,5,6,7,8};
    int Sum=0;

    Sum = accumulate(AlgVec.begin(),AlgVec.end(),0);

    cout << "Sum=" << Sum << endl;
    return;
}
void Exercise11_6()
{
    vector<int> AlgVec = {1,2,3,4,5,6,7,8};
    vector<int>::iterator AlgIter = AlgVec.begin();
    fill_n(AlgVec.begin(),AlgVec.size(),0);

    for( ; AlgIter != AlgVec.end(); AlgIter++)
    {
        cout << *AlgIter << " ";
    }

    return;
}
void Exercise11_9()
{
    vector<string> Gr4words;
    vector<string>::iterator WordsIter;
    ifstream SrcFile;
    string Buffer;

    SrcFile.open("srcfile.txt");

    if(SrcFile.is_open()==false)
    {
        cout << "No Input file" << endl;
        return;
    }

    while(!SrcFile.eof())
    {
        SrcFile >> Buffer;
        if(Buffer.size()>=4)
        {
            Gr4words.push_back(Buffer);
        }
    }

    SrcFile.close();
    unique(Gr4words.begin(),Gr4words.end());

    for(WordsIter = Gr4words.begin(); WordsIter < Gr4words.end();WordsIter++)
        cout << *WordsIter << endl;



    return;
}
