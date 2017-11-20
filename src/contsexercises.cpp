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
std::vector<int>::iterator Exercise9_13(std::vector<int>::iterator fiter,std::vector<int>::iterator liter, int searchnum)
{
    using namespace std;

    while (fiter!=liter)
    {
        if (*liter==searchnum)
            return liter;
        liter--;
    }

    return fiter;

}
