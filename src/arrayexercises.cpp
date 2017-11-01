#include "include/arrayexercises.h"
#include <iostream>
#include <vector>
void Exercize4_7()
{
    using namespace std;

    const int A1=10, A2=4;
    int arr1[A1],arr2[A2],i;

    for(i=0; i<A1; i++)
    {
        cout << endl << "El. " << i << ": ";
        cin >> arr1[i];
    }
    if (sizeof(arr1) > sizeof(arr2))
    {
        for(i=0; i<(sizeof(arr2)/sizeof(int));i++)
            arr2[i]=arr1[i];
    }
    if (sizeof(arr1) <= sizeof(arr2))
    {
        for(i=0; i<(sizeof(arr1)/sizeof(int));i++)
            arr2[i]=arr1[i];
    }
    cout << "Array 2 elements: ";
    for(i=0; i<A2; i++)
    {
        cout << arr2[i] << ", ";
    }

    return;
}
void Exercize4_8()
{
    using namespace std;
    const int A1=10,A2=10;
    int Arr1[A1]={1,2,3,4,5,6,7,8,9,10},
            Arr2[A2]={1,1,3,4,5,6,7,8,9,10};

    if ((sizeof(Arr1)/sizeof(int)) > (sizeof(Arr2)/sizeof(int)))
    {
        cout << "Arr1 bigger than Arr2" << endl;
        return;
    }

    if ((sizeof(Arr1)/sizeof(int)) < (sizeof(Arr2)/sizeof(int)))
    {
        cout << "Arr1 smaller than Arr2" << endl;
        return;
    }

    for (int i=0; (i<A1)&&(i<A2); i++)
    {
        if(Arr1[i] != Arr2[i])
        {
            cout << "Arr";
            Arr1[i] > Arr2[i] ? cout<<"1" : cout<<"2";
            cout << " is bigger";
            return;
        }

    }
    cout << "Arrays is equivalent" << endl;
    return;
}
void Exercize4_8v()
{
    using namespace std;
    vector<int> Arr1,Arr2;

    for(int i=0;i<10;i++)
        Arr1.push_back(i);

    for(int i=0;i<10;i++)
        Arr2.push_back(i);

    if (Arr1 < Arr2)
    {
        cout << "Arr1 smaller than Arr2" << endl;
        return;
    }
    if (Arr1 > Arr2)
    {
        cout << "Arr1 bigger than Arr2" << endl;
        return;
    }
    cout << "Arrays is equivalent" << endl;
    return;
}
void Exercize4_9()
{
    using namespace std;
    int Arr[9];

    for (int i=0;i<=9;i++)
        Arr[i]=i;

    return;
}
