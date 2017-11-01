#include "include/pointersexercises.h"
#include <iostream>

void Exercise4_18()
{
    using namespace std;

    int Arr[10]={0,1,2,3,4,5,6,7,8,9};
    int *ptr=Arr;

    for(int i=0; i < 10; i++)
    {
        *ptr=0;
        ptr++;
    }

    return;
}
