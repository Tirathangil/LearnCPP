#include "include/ch13ex.h"
#include <fstream>
#include <iostream>
#include <algorithm>
#include <cctype>
//Инициализация static-членов классов.
unsigned long int Message::LastUID = 0;
std::set<Folder*> Folder::KnownFolders;
std::set<Tag*> Tag::KnownTags;

// Реализация Message
Message::Message(std::string Sender, Text MessageText)
{
    this->MessUID=GetLastUID();
    LastUID++;
    this->Sender=Sender;
    this->MessText=MessageText;
}
unsigned long int Message::getMessageNum()
{
    return MessUID;
}
Message::~Message()
{}

// реализация Folder
Folder::Folder(std::string NewFolderName)
{
    this->FolderName = NewFolderName;
    KnownFolders.insert(this);
}

Folder::~Folder()
{
    std::set<Folder*>::iterator FolderIter;
    FolderIter = std::find(KnownFolders.begin(),KnownFolders.end(),this);
    if(FolderIter!=KnownFolders.end())
        KnownFolders.erase(FolderIter);
}

// реализация Tag
Tag::Tag(std::string NewTagName)
{
    this->TagName = NewTagName;
    KnownTags.insert(this);
}

Tag::~Tag()
{
    std::set<Tag*>::iterator TagIter;
    TagIter = std::find(KnownTags.begin(),KnownTags.end(),this);
    if(TagIter!=KnownTags.end())
        KnownTags.erase(TagIter);
}

//Реализация разных функций

bool LoadDataFromDisk(std::vector<Message> &MessageArchive)
{
    using namespace std;

    ifstream MessagesFile;
    ifstream FoldersFile("folders.mail");
    ifstream TagsFile("tags.mail");
    string TextLine;
    LoadParams messageParams;
    int CheckSum(0);
    MessagesFile.open("messages.mail");
    if(!MessagesFile.is_open())
        return false;
    while(!MessagesFile.eof())
    {
        getline(MessagesFile,TextLine);
        messageParams=parseLoading(TextLine);
        if(messageParams.first=="Message")
        {
            CheckSum=+100;
        }

    }

    return false;
}
bool SaveDataToDisk()
{

    return false;
}

int WhichCommand(std::string Command)
{
    using namespace std;
    string::iterator CharLower = Command.begin();
    for(;CharLower!=Command.end();CharLower++)
        *CharLower = std::tolower(*CharLower);
    if(Command == "view")
        return 1;
    if(Command == "quit")
        return 0;
    //Debug codes >= 200
    if(Command == "d_sendmessage")
        return 200;
    if(Command == "d_loadtest")
        return 201;

    return -1; // if command wrong
}

ComPar parseCommand(std::string ParserCommand)
{
    using namespace std;

    string::iterator ReadingFrontIter = ParserCommand.begin(), ReadingBackIter;
    vector<string> Params;
    string Command;

    ReadingFrontIter = find(ParserCommand.begin(),ParserCommand.end(),' ');
    Command = string(ParserCommand.begin(),ReadingFrontIter);

    while(ReadingFrontIter < ParserCommand.end())
    {
        ReadingBackIter = find(ReadingFrontIter,ParserCommand.end(),' ');
        if(ReadingBackIter == ReadingFrontIter)
            break;
        Params.push_back(string(ReadingFrontIter,ReadingBackIter));
        ReadingFrontIter = ReadingBackIter;
    }

    return ComPar(WhichCommand(Command),Params);
}
LoadParams parseLoading(std::string ParserText)
{
    using namespace std;
    LoadParams ReturnValue;
    string SecondParam = "";
    if(ParserText.find("<message")!=string::npos)
        ReturnValue.first="Message";
    if(ParserText.find("<folder")!=string::npos)
        ReturnValue.first="Folder";
    if(ParserText.find("<tag")!=string::npos)
        ReturnValue.first="Tag";
    if(ParserText.find("<text")!=string::npos)
        ReturnValue.first="Text";

    std::copy(ParserText.begin()+ParserText.find("val=")+string("val=").length(),
              ParserText.begin()+ParserText.find(">"),
              back_inserter(SecondParam));
    ReturnValue.second=SecondParam;

    return ReturnValue;
}
void DebugSendMessage(std::vector<Message> *Rmessages)
{
    using namespace std;

    string Sender,MailLine="";
    Text MailText;

    cout << "Enter the mail sender's: ";
    cin >> Sender;
    cout << "When you finish to mail text, type 'Endmails' (strictly) to new string and press enter." << endl << "Mail text: " << endl;

    while (MailLine!="Endmails")
    {
        getline(cin,MailLine);
        MailText.push_back(MailLine);
    }

    Rmessages->push_back(Message(Sender,MailText));
    cout << "Message #" << Rmessages->back().getMessageNum() << " created." << endl;

    return;
}
