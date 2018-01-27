#ifndef MY_DATA_H_INCLUDED
#define MY_DATA_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

/**
    CLASS      : IF39INT
    NAME       : PERTIWANG SISMANANDA
    STUDENT ID : 1301153614
**/

struct mytype {
    /**
     TODO:  create a new Data type with specification:
            - an integer variable acted as an ID
            - two other variables
            - a float variable
    */
    //=================================================
	int id;
	string name, status;
	float i;
    //=================================================
};


mytype create_data();
void view_data(mytype d);
void edit_data(mytype &d);

#endif // MY_DATA_H_INCLUDED
