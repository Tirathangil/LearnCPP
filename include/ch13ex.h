#ifndef CH13EX_H
#define CH13EX_H

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <set>

// include/ch13ex.h
// Создано специально для модифицированной задачи из упражнений 13.16-13.19
// Сделать упрощенную (не онлайновую) почтовую систему.
// 1. Есть сообщения
// 2. Есть папки
// 3. Есть теги
// 4. Все данные сохраняются на диск и при запуске программы подгружаются с диска.
// 5. Командный интерфейс.

typedef std::vector<std::string> Text;
typedef std::pair<int,std::vector<std::string>> ComPar;

class Folder
{
    static std::set<Folder*> KnownFolders;
    std::string FolderName;
    Folder();
    Folder& operator = (const Folder &ThisIsWrong);
public:
    Folder(std::string NewFolderName);
    ~Folder();
};

class Tag
{
    static std::set<Tag*> KnownTags;
    std::string TagName;
    Tag();
    Tag& operator = (const Tag &ThisIsWrong);
public:
    Tag(std::string NewTagName);
    ~Tag();
};

class Message
{
    unsigned long int MessUID;
    std::string Sender;
    Text MessText;
    Folder *MessFolder;
    std::set<Tag*> MessTags;
    static unsigned long int LastUID;
    Message();
    Message& operator =(const Message &ThisIsWrong);
public:
    Message(std::string Sender,Text MessageText);
    ~Message();

    unsigned long int getMessageNum();

    static inline unsigned long int GetLastUID()
    {
        return LastUID;
    }
};

int WhichCommand(std::string Command);
ComPar parseCommand(std::string ParserCommand);
bool LoadDataFromDisk();
bool SaveDataToDisk();
void ReceiveMessage(Message *NewMessage);
//Debug functions
void DebugSendMessage(std::vector<Message> &Rmessages);


#endif // CH13EX_H