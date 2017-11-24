#include "include/contsexercises.h"
#include <deque>
#include <sstream>
#include <cctype>

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
void Exercise9_26L()
{
    list<string> TestList = {"Alpha","Beta","Gamma","Delta","Ro","Epsylon","Kappa","Sigma"};
    list<string>::iterator SearchIter = TestList.begin();
    string SearchString;

    cout << "Enter the search query: ";
    getline(cin,SearchString);

    while(SearchIter!=TestList.end())
    {
        if (*SearchIter==SearchString)
        {
            TestList.erase(SearchIter);
            break;
        }
        SearchIter++;
    }

    SearchIter=TestList.begin();
    while(SearchIter!=TestList.end())
    {
        cout << *SearchIter << " ";
        SearchIter++;
    }

    return;
}
void Exercise9_26Q()
{
    deque<string> TestList = {"Alpha","Beta","Gamma","Delta","Ro","Epsylon","Kappa","Sigma"};
    deque<string>::iterator SearchIter = TestList.begin();
    string SearchString;

    cout << "Enter the search query: ";
    getline(cin,SearchString);

    while(SearchIter!=TestList.end())
    {
        if (*SearchIter==SearchString)
        {
            TestList.erase(SearchIter);
            break;
        }
        SearchIter++;
    }

    SearchIter=TestList.begin();
    while(SearchIter!=TestList.end())
    {
        cout << *SearchIter << " ";
        SearchIter++;
    }

    return;
}
void Exercise9_39()
{
    string String1 = "We were her pride of 10 she named us:";
    string String2 = "Benjamin, Phoenix, the Prodigal";
    string String3 = "and perspicacious pacific Suzanne";
    string Sentence = String1 + ' ' + String2 + ' ' + String3;
    string Buffer;
    istringstream SentStream(Sentence);
    vector<string> Words;
    list<string> Longest, Smallest;
    list<string>::iterator LookList;
    vector<string>::iterator Look;

    while(SentStream >> Buffer)
        Words.push_back(Buffer);

    //Здесь находится очистка слов от пунктуационного мусора
    Look = Words.begin();
    while(Look != Words.end())
    {
        string::iterator StrLooker = Look->begin();
        while (StrLooker<Look->end()) {
            if(ispunct(*StrLooker))
                Look->erase(StrLooker);
            StrLooker++;
        }
        Look++;
    }
    //Здесь определяются самые длинное и короткое слова

    Look = Words.begin();
    Longest.push_back(*Look);
    Look++;
    LookList=Longest.begin();
    while(Look != Words.end())
    {
        if(Look->length() == LookList->length())
            Longest.push_back(*Look);
        if(Look->length() > LookList->length())
        {
            Longest.clear();
            Longest.push_back(*Look);
            LookList=Longest.begin();
        }
        Look++;
    }

    Look = Words.begin();
    Smallest.push_back(*Look);
    Look++;
    LookList=Smallest.begin();
    while(Look != Words.end())
    {
        if(Look->length() == LookList->length())
            Smallest.push_back(*Look);
        if(Look->length() < LookList->length())
        {
            Smallest.clear();
            Smallest.push_back(*Look);
            LookList=Smallest.begin();
        }
        Look++;
    }

    // Здесь находится вывод на экран уже определенных слов.

    cout << "Longest word(s): ";
    LookList = Longest.begin();
    while (LookList != Longest.end())
    {
        cout << *LookList << " ";
        LookList++;
    }

    cout << endl << "Shortest word(s): ";
    LookList = Smallest.begin();
    while (LookList != Smallest.end())
    {
        cout << *LookList << " ";
        LookList++;
    }

    cout << endl << "Count of words: " << Words.size() << endl;

    return;
}
