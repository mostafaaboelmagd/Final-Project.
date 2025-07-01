#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H

#include "Contact.h"

class ContactBook
{
private:
    int count;
    Contact users[100];

public:
    ContactBook();
    void AddUser();
    void EditUser();
    int CountUser();
    bool SearchUser();
    void DeleteUser();
    void ShowAll();
};

#endif
