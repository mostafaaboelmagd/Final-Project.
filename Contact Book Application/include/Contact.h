#ifndef CONTACT_H
#define CONTACT_H

#include <string>
using namespace std;

class Contact
{
private:
    int id;
    string name;
    int gender;
    string city;
    string note;

public:
    void user();
    bool search();
    void show();
};

#endif
