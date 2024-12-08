#include "File.h"

File::File()
{
    name = "";
    content = "";
}

File::File(string name, string content, Date &date)
{
    this->name = name;
    this->content = content;
    lastModified = date;
}

File::~File()
{
    
}

bool File::lessThan(File &file)
{
    Date fileDate = file.getDate();
    return lastModified.lessThan(fileDate);
}

void File::print()
{
    cout << "File Name: " << name << endl;
    cout << "Date Added: ";
    lastModified.print();
    cout << endl;
}

void File::printContents()
{
    cout << "File Name: " << name << endl;
    cout << "Date Added: ";
    lastModified.print();
    cout << endl
         << "File Content: " << content << endl;
}

string File::getName() const
{
    return name;
}

string File::getContent() const
{
    return content;
}

Date File::getDate() const
{
    return lastModified;
}
