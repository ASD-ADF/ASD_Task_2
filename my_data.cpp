
#include "my_data.h"

/**
    CLASS      : IF-41-08
    NAME       : Iriyanto
    STUDENT ID : 1301174295
**/

mytype create_data() {
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE

    cout<<"Enter your ID    : "; cin>>d.id;
    cout<<"Enter your Name  : "; cin>>d.name;
    cout<<"Enter your Class : "; cin>>d.classroom;
    cout<<"Enter your Score : "; cin>>d.score;

    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */

    // ===========================
    // YOUR CODE HERE

    cout<<"ID       : "<<d.id<<endl;
    cout<<"Name     : "<<d.name<<endl;
    cout<<"Class    : "<<d.classroom<<endl;
    cout<<"Score    : "<<d.score<<endl;

    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE

    cout<<"Enter your new Name  : "; cin>>d.name;
    cout<<"Enter your new Class : "; cin>>d.classroom;
    cout<<"Enter your new Score : "; cin>>d.score;

    // ===========================
}

