#include "ContactBook.h"
#include <iostream>
using namespace std;

ContactBook::ContactBook()
{
    count = 0;
}

void ContactBook::AddUser()
{
    users[count].user();
    count++;
}

void ContactBook::EditUser()
{
    int id;
    cout << "Enter ID to edit: ";
    cin >> id;
    for (int i = 0; i < count; ++i)
    {
        if (users[i].search())
        {
            cout << "Edit details:\n";
            users[i].user();
            return;
        }
    }
    cout << "User not found.\n";
}

int ContactBook::CountUser()
{
    return count;
}

bool ContactBook::SearchUser()
{
    for (int i = 0; i < count; ++i)
    {
        if (users[i].search())
        {
            users[i].show();
            return true;
        }
    }
    return false;
}

void ContactBook::DeleteUser()
{
    int id;
    cout << "Enter ID to delete: ";
    cin >> id;
    for (int i = 0; i < count; ++i)
    {
        if (users[i].search())
        {
            for (int j = i; j < count - 1; ++j)
            {
                users[j] = users[j + 1];
            }
            count--;
            cout << "Deleted successfully.\n";
            return;
        }
    }
    cout << "User not found.\n";
}

void ContactBook::ShowAll()
{
    for (int i = 0; i < count; ++i)
    {
        users[i].show();
        cout << "-------------------\n";
    }
}
