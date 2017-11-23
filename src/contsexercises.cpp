#include "include/contsexercises.h"

using namespace std;
bool Exercise9_12(vector<int>::iterator fiter,vector<int>::iterator liter, int searchnum)
{
    while (fiter!=liter)
    {
        if (*fiter==searchnum)
            return true;
        fiter++;
    }

    return false;
}
vector<int>::iterator Exercise9_13(vector<int>::iterator fiter,vector<int>::iterator liter, int searchnum)
{
    while (fiter!=liter)
    {
        if (*liter==searchnum)
            return liter;
        liter--;
    }

    return fiter;

}
void Exercise9_14(vector<string>::iterator F_iter,vector<string>::iterator L_iter)
{
    using namespace std;
    while (F_iter!=L_iter)
    {
        cout << "Enter string: ";
        getline(cin,*F_iter);
        cout << endl;
        F_iter++;
    }
}
void Exercise9_15(list<string>::iterator F_iter,list<string>::iterator L_iter)
{
    using namespace std;
    while (F_iter!=L_iter)
    {
        cout << "Enter string: ";
        getline(cin,*F_iter);
        cout << endl;
        F_iter++;
    }
}
void Exercise9_18(list<int> *IntList)
{
    list<int> EvenList;
    list<int> OddList;
    list<int>::iterator BegIntListIter = IntList->begin(),
                        EndIntListIter = IntList->end();
    while (BegIntListIter != EndIntListIter)
    {
        if(!(*BegIntListIter%2))
            EvenList.push_back(*BegIntListIter);
        else
            OddList.push_back(*BegIntListIter);
        BegIntListIter++;
    }

    list<int>::iterator OutIter = EvenList.begin();

    cout << "Even list: ";
    for (int i=0;i<EvenList.size();i++,OutIter++)
        cout << *OutIter << " ";
    cout << endl << "Odd list: ";
    OutIter = OddList.begin();
    for (int i=0;i<OddList.size();i++,OutIter++)
        cout << *OutIter << " ";

    return;
}
bool Exercise9_20(list<int> *IntList,vector<int> *IntVector)
{
    list<int>::iterator ListIter = IntList->begin();
    vector<int>::iterator VectorIter = IntVector->begin();

    if(IntList->size() != IntVector->size())
        return false;
    for(int i=0;i<IntList->size();i++,ListIter++,VectorIter++)
        if(*ListIter!=*VectorIter)
            return false;

    return true;
}
void Exercise9_24(vector<string> IntVector)
{
    //Обращение через at();
    cout << IntVector.at(0) << endl;
    //По индексу...
    cout << IntVector[0] << endl;
    // По итератору.
    cout << *IntVector.begin() << endl;

    //Если код выполнится, это значит, что в лесу что-то сдохло.
    cout << "Этого просто не может быть никогда" << endl;
    return;
}
