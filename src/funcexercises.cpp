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
int Exercise7_4(int Arg1)
{
    if(Arg1>=0)
        return Arg1;
    else
        return Arg1*(-1);
}
int Exercise7_5(int Arg1, int *Arg2)
{
    if(Arg1>*Arg2)
        return Arg1;
    else
        return *Arg2;
}
int Exercise7_6(int &Arg1, int &Arg2)
{
    int buf=Arg1;
    Arg1=Arg2;
    Arg2=buf;

    return 0;
}
