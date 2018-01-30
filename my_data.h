#ifndef MY_DATA_H_INCLUDED
#define MY_DATA_H_INCLUDED

#include <iostream>
using namespace std;

/**
    CLASS      : IF 41-08
    NAME       : Muhammad Rayhan Alifinzi Ghiffari
    STUDENT ID : 1301174145
**/

struct mytype {
    /**
     TODO:  create a new Data type with specification:
            - an integer variable acted as an ID
            - two other variables
            - a float variable
    */
    //=================================================
    // YOUR CODE STARTS HERE
    string nama; //The name for the Student
    string kelas; // The class for the student
    int nim; // The ID Number for the said Student
    float nilai; // The GPA or Final score for the Student

    // YOUR CODE ENDS HERE
    //=================================================
};


mytype create_data();
void view_data(mytype d);
void edit_data(mytype &d);

#endif // MY_DATA_H_INCLUDED
