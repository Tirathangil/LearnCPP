#include "include/arrayexercises.h"
#include <iostream>
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
