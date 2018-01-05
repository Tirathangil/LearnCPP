// include/ch13ex.h
// Создано специально для модифицированной задачи из упражнений 13.16-13.19
// Сделать упрощенную (не онлайновую) почтовую систему.
// 1. Есть сообщения
// 2. Есть папки
// 3. Есть теги
// 4. Все данные сохраняются на диск и при запуске программы подгружаются с диска.
// 5. Командный интерфейс.

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <set>

class Message
{
    unsigned long int MessUID;
    std::string Sender;
    Text MessText;
    Folder *MessFolder;
    std::set<*Tag> MessTags;
    static unsigned long int LastUID;
    Message();
    Message& operator =(const Message &ThisIsWrong);
public:
    typedef std::vector<std::string> Text;
    Message(std::string Sender,Text MessageText);
    ~Message();
    static inline unsigned long int GetLastUID()
    {
        return LastUID;
    }
};

class Folder
{
    std::string FolderName;
    std::set<*Message> FolderMessages;
    Folder();
public:
    Folder(std::string NewFolderName);
    ~Folder();
};

class Tag
{
    std::string TagName;
    std::set<*Message> TagMessages;
    Tag();
public:
    Tag(std::string NewTagName);
    ~Tag();
};
