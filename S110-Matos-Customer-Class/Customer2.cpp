//Using DUAL-COMPILATION-MODULE style (header + implementation)

#include "Customer2.h"
#pragma once


void Customer2::setUserName(string value)
{
    //TODO - validate name - must include at leas two words
    userName = value;
}
void Customer2::setEmail(string value)
{
    //TODO - validate email syntax xxxx@yyy.zzz
    email = value;
}

//Accessors
string Customer2::getUserName() { return userName; }
string Customer2::getEmail() { return email; }

//Constructors
//ZERO-arguments constructor
Customer2::Customer2()
{
    setUserName("n.a.");
    setEmail("n.a.");
}

//ALL-arguments constructor
Customer2::Customer2(string valueName, string valueEmail)
{
    setUserName(valueName);
    setEmail(valueEmail);
}

//User-defined methods
string Customer2::toString()
{
    ostringstream sout;
    sout << this << " Customer2 [ userName: " << getUserName()
        << ", eMail: " << getEmail() << " ]";

    return sout.str();

}


