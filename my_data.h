#ifndef MY_DATA_H_INCLUDED
#define MY_DATA_H_INCLUDED

#include <iostream>
using namespace std;

/**
    CLASS      : IF-40-INT
    NAME       : Randy Kustiwa Koesma
    STUDENT ID : 1301162472
**/

struct mytype {
    typedef int number;
    typedef string nmc;
    typedef float real;
    number nim;
    nmc nama;
    nmc kelas;
    real berat;
    /**
     TODO:  create a new Data type with specification:
            - an integer variable acted as an ID
            - two other variables
            - a float variable
    */
    //=================================================
    // YOUR CODE STARTS HERE

    // YOUR CODE ENDS HERE
    //=================================================
};


mytype create_data();
void view_data(mytype d);
void edit_data(mytype &d);

#endif // MY_DATA_H_INCLUDED
