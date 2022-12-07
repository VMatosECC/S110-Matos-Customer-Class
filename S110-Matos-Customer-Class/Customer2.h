//Using DUAL-COMPILATION-MODULES style (header + implementation)

#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

//Header file
class Customer2
{
private:
    string userName;
    string email;
public:
    //Mutators
    void setUserName(string value);
    void setEmail(string value);

    //Accessors
    string getUserName();
    string getEmail();

    //Constructors
    //ZERO-arguments constructor
    Customer2();

    //ALL-arguments constructor
    Customer2(string valueName, string valueEmail);

    //User-defined methods
    string toString();

};


