#include "include/pointersexercises.h"
#include <iostream>
#include <vector>

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
void Exercise4_28()
{
    using namespace std;
    vector<int> Vec;
    int i;

    cout << "Enter the numbers. Value '-1' finish input" << endl;

    do
    {   cin >> i;
        Vec.push_back(i);
    } while (i!=-1);

    int *cstroke = new int[Vec.size()];

    for(i=0;i<Vec.size();i++)
        *(cstroke+i)=Vec[i];

    for(i=0;i<Vec.size();i++)
        cout << *(cstroke+i) << " ";
    cout << endl;

    delete[](cstroke);

    return;
}
