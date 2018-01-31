#ifndef MY_DATA_H_INCLUDED
#define MY_DATA_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

/**
    CLASS      : IF - 41 - 08
    NAME       : Ahmad Satriamulya
    STUDENT ID : 1301170012
**/

struct mytype {
    /**
     TODO:  create a new Data type with specification:
            - an integer variable acted as an ID
            - two other variables
            - a float variable
    */
    //=================================================
    int ID;
    float IP;
    string Name;
    int Age;

    //=================================================
};

mytype create_data();
void view_data(mytype d);
void edit_data(mytype &d);

#endif // MY_DATA_H_INCLUDED
