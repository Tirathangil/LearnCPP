#include "include/iterexercises.h"
#include <vector>
#include <iostream>

void Exercize3_18() //Готово. И 3.19 тоже готово.
{
    using namespace std;

    vector<int> Vect(10);
    cout << "Enter first value: ";
    cin >> *Vect.begin();

    for(vector<int>::iterator Iter = Vect.begin(); Iter != Vect.end()--; Iter++)
        *(Iter+1)=*Iter*2;

    for(vector<int>::iterator Iter = Vect.begin(); Iter != Vect.end(); Iter++)
        cout << endl << "Vector element: " << *Iter;

    return;
}
