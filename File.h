
#ifndef FILE_H
#define FILE_H

#include "Date.h"

using namespace std;

class File
{
private:
    string name;       // Stores File Name
    string content;    // Stores File Content
    Date lastModified; // Stores Last Modified Date

public:
    // Constructors
    File();
    File(string name, string content, Date &date);

    // Destructors
    ~File();

    // Class Methods
    bool lessThan(File &file);
    void print();
    void printContents();

    // Getter Functions
    string getName() const;
    string getContent() const;
    Date getDate() const;
};
#endif
