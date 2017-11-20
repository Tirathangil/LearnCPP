#include "include/contsexercises.h"

bool Exercise9_12(std::vector<int>::iterator fiter,std::vector<int>::iterator liter, int searchnum)
{
    using namespace std;

    while (fiter!=liter)
    {
        if (*fiter==searchnum)
            return true;
        fiter++;
    }

    return false;
}
