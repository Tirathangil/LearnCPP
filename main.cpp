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

    int a=6,b=4;
    try
    {
        cout << a << " " << b << endl;
        Exercise7_6(&a,&b);
        cout << "Result: " << a << " " << b << endl;
    }
    catch (int i)
    {
        cout << "Error " << i << ": Negative power - this is non-correct value" << endl;
        return 1;
    }

    cout << "All fine, program finish." << endl;

    return 0;
}
