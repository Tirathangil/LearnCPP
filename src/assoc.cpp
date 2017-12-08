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
    typedef vector<pair<string,string>> Names;
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
            string Date;
            cout << "Enter Family: ";
            cin >> FamPair.first;
            while(Name!="end;")
            {
                cout << "Enter name: ";
                cin >> Name;
                cout << "Enter birthdate: ";
                cin >> Date;
                if(Name!="end;")
                    FamPair.second.push_back(pair<string,string>(Name,Date));
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
                    cout << Childs->first << " (" << Childs->second << "), ";
                }
                cout << endl;
            }
        }

    } while(Command!="Close");
    cout << "Execution finished." << endl;
}
void Exercise10_26()
{
    typedef pair<string,string> BookTitle;
    multimap<string,string> Authors;
    multimap<string,string>::iterator ServIter;
    string Author,Book,Command;

    cout << "Exercise 10.26" << endl;

    do
    {
        cout << ">>[" << Authors.size() << "]: ";
        cin >> Command;

        if(Command=="Add")
        {
            cout << "Enter author's name: ";
            getline(cin,Author);
            cout << "Enter book's title: ";
            getline(cin,Book);
            Authors.insert(BookTitle(Author,Book));
        }
        if(Command=="View")
        {
            cout << "Enter author's name: ";
            cin >> Author;
            ServIter = Authors.find(Author);
            if(ServIter!=Authors.end())
            {
                cout << "Author: " << ServIter->first << endl
                     << "Title: " << ServIter->second << endl;
            }
            else
                cout << "No authors find" << endl;
        }
        if(Command=="Delete")
        {
            cout << "Enter author's name: ";
            cin >> Author;
            cout << "Do you REALLY want to do it? (yes/no):";
            cin >> Command;
            if(Command=="yes")
            {
                ServIter = Authors.find(Author);
                if(ServIter != Authors.end())
                {
                    Authors.erase(ServIter);
                    ServIter = Authors.begin();
                }
                else
                    cout << "No records about this author" << endl;
            }
        }

        Author="";
        Book="";
    } while(Command!="Close");
}
void Exercise10_27()
{
    typedef pair<string,string> BookTitle;
    typedef multimap<string,string> AuthorsList;
    AuthorsList Authors;
    pair<AuthorsList::iterator,AuthorsList::iterator>ServIter;
    string Author,Book,Command;

    cout << "Exercise 10.27" << endl;

    do
    {
        cout << ">>[" << Authors.size() << "]: ";
        cin >> Command;

        if(Command=="Add")
        {
            cout << "Enter author's name: ";
            cin >> Author;
            cout << "Enter book's title: ";
            cin >> Book;
            Authors.insert(BookTitle(Author,Book));
        }
        if(Command=="View")
        {
            cout << "Enter author's name: ";
            cin >> Author;
            ServIter = Authors.equal_range(Author);
            for(AuthorsList::iterator Iter=ServIter.first;Iter!=ServIter.second;++Iter)
            {
                cout << "Author: " << Iter->first << endl
                     << "Title: " << Iter->second << endl;
            }
        }
        if(Command=="Delete")
        {
            cout << "Enter author's name: ";
            cin >> Author;
            cout << "Do you REALLY want to do it? (yes/no):";
            cin >> Command;
            if(Command=="yes")
            {
                ServIter = Authors.equal_range(Author);
                for(AuthorsList::iterator Iter=ServIter.first;(Iter!=Authors.end()) || (Iter!=ServIter.second);Iter++)
                {
                    Authors.erase(Iter);
                }
            }
        }

        Author="";
        Book="";
    } while(Command!="Close");
}
