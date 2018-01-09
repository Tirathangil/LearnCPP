#include "include/ch13ex.h"
#include <algorithm>
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

int Commands(std::string ConCommand)
{
    if(ConCommand=="View")
        return 1;

    return 0;
}
