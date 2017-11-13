#include "include/stringsexercises.h"
#include "include/vectorexercises.h"
#include "include/iterexercises.h"
#include "include/arrayexercises.h"
#include "include/pointersexercises.h"
#include "include/funcexercises.h"
#include <iostream>

/* Библиотека упражнений.
// stringexercises.h - упражнения раздела 3.2
// vectorexercises.h - упражнения раздела 3.3
// iterexercises.h - упражнения раздела 3.4
// arrayexercises.h - упражнения раздела 4.1
// pointersexercises.h - упражнения раздела 4.2-4.4
// funcexercises.h - упражнения раздела 7
*/
int main()
{
    return 0;
}

//----- This is Exercise 7.15 function -----//
/*
int main(int argc, char **argv)
{

    using namespace std;

    long int res=0;

    if (argc<=2)
    {
        cout << "No parameters";
        return 2;
    }

    try
    {
        for(int i=1;i<argc;i++)
        {
            if(atol(argv[i])!=0)
                res+=atol(argv[i]);
            else
                throw 2;
        }

    }
    catch (int i)
    {
        cout << "Error " << endl;
        return 1;
    }

    cout << "Sum = " << res << endl;

    return 0;
}
*/
