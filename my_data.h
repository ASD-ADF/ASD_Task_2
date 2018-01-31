#ifndef MY_DATA_H_INCLUDED
#define MY_DATA_H_INCLUDED

#include <iostream>
using namespace std;

/**
    CLASS      : IF-40-INT
    NAME       : Aditya Ramadhan Moesya
    STUDENT ID : 1301160471
**/

struct mytype {
    typedef int nomor;
    typedef string str;
    typedef float koma;
    nomor id;
    str nama;
    str kelas;
    koma nilai;
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
