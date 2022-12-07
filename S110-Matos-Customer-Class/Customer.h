//Using INLINE style (implementation immediately follows declaration)

#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

//Header file
class Customer
{
private:

    string userName;
    string email;

public:
    //Mutators
    void setUserName(string value)
    {
        //TODO - validate name - must include at leas two words
        userName = value;
    }
    void setEmail(string value)
    {
        //TODO - validate email syntax xxxx@yyy.zzz
        email = value;
    }

    //Accessors
    string getUserName() { return userName; }
    string getEmail() { return email; }

    //Constructors
    //ZERO-arguments constructor
    Customer()
    {
        setUserName("n.a.");
        setEmail("n.a.");
    }

    //ALL-arguments constructor
    Customer(string valueName, string valueEmail)
    {
        setUserName(valueName);
        setEmail(valueEmail);
    }

    //User-defined methods
    string toString()
    {
        ostringstream sout;
        sout << this << " Customer [ userName: " << getUserName()
             << ", eMail: " << getEmail() << " ]";
        
        return sout.str();

    }


};

