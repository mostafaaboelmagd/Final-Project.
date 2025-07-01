#include "Contact.h"
#include <iostream>
using namespace std;

void Contact::user()
{
    cout << "Enter ID: ";
    cin >> id;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Gender (0 for Male, 1 for Female): ";
    cin >> gender;
    cout << "Enter City: ";
    cin.ignore();
    getline(cin, city);
    cout << "Enter Note: ";
    getline(cin, note);
}

bool Contact::search()
{
    int key;
    cout << "Enter ID to search: ";
    cin >> key;
    return key == id;
}

void Contact::show()
{
    cout << "ID: " << id << "\nName: " << name
         << "\nGender: " << (gender == 0 ? "Male" : "Female")
         << "\nCity: " << city << "\nNote: " << note << endl;
}
