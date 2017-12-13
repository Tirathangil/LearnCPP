#include "include/algos.h"
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void Exercise11_3()
{
    vector<int> AlgVec = {1,2,3,4,5,6,7,8};
    int Sum=0;

    Sum = accumulate(AlgVec.begin(),AlgVec.end(),0);

    cout << "Sum=" << Sum << endl;
    return;
}
