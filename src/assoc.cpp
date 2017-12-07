#include "include/assoc.h"
#include <map>
#include <iostream>
#include <vector>

using namespace std;

void Exercise10_18()
{
    typedef vector<string> Names;
    map<string,Names> Families;

    cout << "Ex. 10.18" << endl;
    string Command;

    do
    {
        cout << ">>[" << Families.size() << "]: ";
        cin >> Command;

        if(Command=="Add")
        {
            pair<string,Names> FamPair;
            string Name;
            cout << "Enter Family: ";
            cin >> FamPair.first;
            cout << "Enter name of one of childs: ";
            while(Name!="end;")
            {
                cin >> Name;
                if(Name!="end;")
                    FamPair.second.push_back(Name);
            }
            Families.insert(FamPair);
        }

        if(Command=="View")
        {
            string FamName;
            cout << "Enter Family: ";
            cin >> FamName;
            map<string,Names>::iterator ViewFam = Families.find(FamName);
            if(ViewFam != Families.end())
            {
                cout << "Family: " << ViewFam->first << endl << "Childs: ";
                for(Names::iterator Childs = ViewFam->second.begin();Childs!=ViewFam->second.end();Childs++)
                {
                    cout << *Childs << " ";
                }
                cout << endl;
            }
        }

    } while(Command!="Close");
    cout << "Execution finished." << endl;
}
void Exercise10_19()
{
    typedef vector<string> Names;
    map<string,Names> Families;

    cout << "Ex. 10.18" << endl;
    string Command;

    do
    {
        cout << ">>[" << Families.size() << "]: ";
        cin >> Command;

        if(Command=="Add")
        {
            pair<string,Names> FamPair;
            string Name;
            cout << "Enter Family: ";
            cin >> FamPair.first;
            cout << "Enter name of one of childs: ";
            while(Name!="end;")
            {
                cin >> Name;
                if(Name!="end;")
                    FamPair.second.push_back(Name);
            }
            Families.insert(FamPair);
        }

        if(Command=="View")
        {
            string FamName;
            cout << "Enter Family: ";
            cin >> FamName;
            map<string,Names>::iterator ViewFam = Families.find(FamName);
            if(ViewFam != Families.end())
            {
                cout << "Family: " << ViewFam->first << endl << "Childs: ";
                for(Names::iterator Childs = ViewFam->second.begin();Childs!=ViewFam->second.end();Childs++)
                {
                    cout << *Childs << " ";
                }
                cout << endl;
            }
        }

    } while(Command!="Close");
    cout << "Execution finished." << endl;
}
