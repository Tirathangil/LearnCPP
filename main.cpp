#include "include/stringsexercises.h"
#include "include/vectorexercises.h"
#include "include/iterexercises.h"
#include "include/arrayexercises.h"
#include "include/pointersexercises.h"
#include "include/funcexercises.h"
#include <iostream>

// Библиотека упражнений.
// stringexercises.h - упражнения раздела 3.2
// vectorexercises.h - упражнения раздела 3.3
// iterexercises.h - упражнения раздела 3.4
// arrayexercises.h - упражнения раздела 4.1
// pointersexercises.h - упражнения раздела 4.2-4.4
// funcexercises.h - упражнения раздела 7

int main()
{

    using namespace std;
    const int ArrSize=10;
    int Arr[ArrSize]={0,1,2,3,4,5,6,7,8,-32000};
    int *pArr = &Arr[0];
    try
    {
        cout << "Output of variant 1: " << Exercise7_13V1(Arr) << endl;
        cout << "Output of variant 2: " << Exercise7_13V2(&Arr[0],&Arr[9]) << endl;
        cout << "Output of variant 3: " << Exercise7_13V3(pArr,ArrSize) << endl;
    }
    catch (int i)
    {
        cout << "Error " << endl;
        return 1;
    }

    cout << "All fine, program finish." << endl;

    return 0;
}
