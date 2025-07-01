#include <iostream>
#include "ContactBook.h"

using namespace std;

int main()
{
    ContactBook book;
    int choice;

    do
    {
        cout << "\n1. Add Contact\n2. Edit Contact\n3. Search Contact\n4. Delete Contact\n5. Show All\n6. Count Contacts\n0. Exit\nChoice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            book.AddUser();
            break;
        case 2:
            book.EditUser();
            break;
        case 3:
            if (!book.SearchUser()) cout << "Not found.\n";
            break;
        case 4:
            book.DeleteUser();
            break;
        case 5:
            book.ShowAll();
            break;
        case 6:
            cout << "Total Contacts: " << book.CountUser() << endl;
            break;
        }
    }
    while (choice != 0);

    return 0;
}
