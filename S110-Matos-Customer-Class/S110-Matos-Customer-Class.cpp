// S110-Matos-Customer-Class.cpp 

//Preprocessor declarations
#include <iostream>
#include "Customer.h"
#include "Customer2.h"

using namespace std;

//Global definitions

//Prototypes


int main()
{
    Customer* pc = new Customer("Harry Potter", "magic@gmail.com");
    cout << pc->toString() << endl;

    Customer c1;
    c1.setUserName("Bart Simpson");
    c1.setEmail("nomorehomework@gmail.com");
    cout << c1.toString() << endl;

    Customer c2;
    cout << c2.toString() << endl;
    //c2.email = "123";
    //c2.userName = "@@@";
    //cout << c2.toString() << endl;
    
    Customer2 c3("Lisa Simpson", "girlsrule@gmail.com");
    cout << c3.toString() << endl;
  

}

//User-defined functions ---------------------------------------

