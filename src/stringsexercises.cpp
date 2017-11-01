#include <iostream>
#include <cstring>
#include "include/stringsexercises.h"

void Exercize3_7()
{
    using namespace std;

    string s1,s2;

    cout << "Enter S1: ";
    cin >> s1;
    cout << endl << "Enter S2: ";
    cin >> s2;

    if (s1.length() == s2.length())
        cout << endl << "Length: S1==S2" << endl;
    else
        if(s1.length() > s2.length())
            cout << endl << "Length: S1 > S2" << endl;
        else
            cout << endl << "Length: S1 < S2" << endl;

    if (s1 == s2)
        cout << endl << "S1 == S2" << endl;
    else
        if (s1 > s2)
            cout << endl << "S1 > S2" << endl;
        else
            cout << endl << "S1 < S2" << endl;

    return;
}
void Exercize3_8()
{
    using namespace std;

    string Str, buf;

    cout << endl << "Type 'exit' for type end" << endl;

    while (buf !="exit")
    {
        cout << endl << "String for cat: ";
        cin >> buf;
        if (buf != "exit")
        {
            if (buf[0]!=' ')
                Str+=" ";
            Str+=buf;
        }
    }

    if (Str[0] == ' ')
        Str.erase(0,1);
    cout << Str << endl;

    return;
}
void Exercize3_10()
{
    using namespace std;
    string Str;
    size_t i;

    getline(cin,Str);

    cout << Str.length() << endl;

    for (i=0;i<Str.length();i++)
    {
        if(ispunct(Str[i]))
            Str.erase(i,1);
    }
    cout << Str << endl;

    return;
}
