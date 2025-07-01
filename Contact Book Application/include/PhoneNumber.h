#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <string>
using namespace std;

class PhoneNumber
{
private:
    string phone;
    string type;

public:
    PhoneNumber();
    void setPhone(const string&);
    void setType(const string&);
    string getPhone() const;
    string getType() const;
};

#endif
