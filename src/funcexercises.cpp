#include "include/funcexercises.h"

int Exercise7_3(int Arg1,int Arg2)
{
    int res=Arg1;

    if (Arg2<0)
        throw 1;
    if (Arg2==0)
        return 1;

    for(;Arg2>1;Arg2--)
        res*=Arg1;

    return res;
}
