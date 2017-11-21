#include "include/contsexercises.h"

using namespace std;
bool Exercise9_12(vector<int>::iterator fiter,vector<int>::iterator liter, int searchnum)
{
    while (fiter!=liter)
    {
        if (*fiter==searchnum)
            return true;
        fiter++;
    }

    return false;
}
vector<int>::iterator Exercise9_13(vector<int>::iterator fiter,vector<int>::iterator liter, int searchnum)
{
    while (fiter!=liter)
    {
        if (*liter==searchnum)
            return liter;
        liter--;
    }

    return fiter;

}
void Exercise9_14(vector<string>::iterator F_iter,vector<string>::iterator L_iter)
{
    using namespace std;
    while (F_iter!=L_iter)
    {
        cout << "Enter string: ";
        getline(cin,*F_iter);
        cout << endl;
        F_iter++;
    }
}

void Exercise9_15(list<string>::iterator F_iter,list<string>::iterator L_iter)
{
    using namespace std;
    while (F_iter!=L_iter)
    {
        cout << "Enter string: ";
        getline(cin,*F_iter);
        cout << endl;
        F_iter++;
    }
}
