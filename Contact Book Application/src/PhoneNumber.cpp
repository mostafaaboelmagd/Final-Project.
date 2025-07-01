#include "PhoneNumber.h"

PhoneNumber::PhoneNumber()
{
    phone = "";
    type = "";
}

void PhoneNumber::setPhone(const string& p)
{
    phone = p;
}

void PhoneNumber::setType(const string& t)
{
    type = t;
}

string PhoneNumber::getPhone() const
{
    return phone;
}

string PhoneNumber::getType() const
{
    return type;
}
