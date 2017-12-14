#include "include/stringsexercises.h"
#include "include/vectorexercises.h"
#include "include/iterexercises.h"
#include "include/arrayexercises.h"
#include "include/pointersexercises.h"
#include "include/funcexercises.h"
#include "include/iolib.h"
#include "include/contsexercises.h"
#include "include/assoc.h"
#include "include/algos.h"
#include <iostream>
#include <fstream>

int main()
{

    Exercise11_9();

    return 0;
}

/* Библиотека упражнений.
// stringexercises.h - упражнения раздела 3.2
// vectorexercises.h - упражнения раздела 3.3
// iterexercises.h - упражнения раздела 3.4
// arrayexercises.h - упражнения раздела 4.1
// pointersexercises.h - упражнения раздела 4.2-4.4
// funcexercises.h - упражнения раздела 7
// iolib.h - упражнения раздела 8
// contsexercises.h - упражнения раздела 9
// assoc.h - упражнения раздела 10
// algos.h - упражнения раздела 11
*/

//----- This is Exercise 8.6 function -----//
/*
int main()
{
    std::ifstream FileStream;

    FileStream.open("test.txt");
    if(FileStream.is_open())
        Exercise8_3(FileStream);
    else
        return 1;
    FileStream.close();

    return 0;
}
*/

//----- This is Exercise 8.3 function -----//
/*
int main()
{
    Exercise8_3(std::cin);
    std::cout << "Execution finish" << std::endl;

    return 0;
}
*/

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
