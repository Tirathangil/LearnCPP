#include "include/vectorexercises.h"
#include <iostream>
#include <cstring>
#include <vector>

void Exercize3_13()
{
    using namespace std;

    vector<int> IntVector;
    vector<int>::size_type i(0);
    int buf;

    cout << "The -1 value is end marker." << endl
         << "Enter values to vector: ";
    cin >> buf;
    while (buf != -1)
    {
        IntVector.push_back(buf);
        cin >> buf;
    }
    while (i <= IntVector.size()/2)
    {
        cout << "Sum of elements " << i << " and " << IntVector.size()-i-1 << ": " << IntVector[i]+IntVector[IntVector.size()-i-1] << endl;
        i++;
    }
    cout << "End of exercise 3.13" << endl;

    return;
}
void Exercize3_14()
{
    using namespace std;

    vector<string> StringsVector;
    string Buffer;
    cout << "The 'end' world is end input marker" << endl;
    cout << "Enter the words: ";

    do
    {
        cin >> Buffer;
        StringsVector.push_back(Buffer);
    }
    while (Buffer!="end");

    for (vector<string>::size_type i=0; i<StringsVector.size(); i++)
    {
        if (StringsVector.empty())
            break;
        Buffer = StringsVector[i];
        string::size_type iter;
        for (iter=0; iter < Buffer.size();iter++)
        {
            Buffer[iter]=char(toupper(Buffer[iter]));
        }
        StringsVector[i]=Buffer;
    }

    for (vector<string>::size_type i=0; i<StringsVector.size()-1; i++)
        cout << "String " << i << ": " << StringsVector[i] << endl;

    return;
}
