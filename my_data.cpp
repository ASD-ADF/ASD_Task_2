
#include "my_data.h"

/**
    CLASS      :
    NAME       :
    STUDENT ID :
**/

mytype create_data() {
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<"Enter your Name : ";
    cin>>d.name;
    cout<<"Enter your ID   : ";
    cin>>d.id;
    cout<<"Enter your Class: ";
    cin>>d.kls;
    cout<<"Enter your Score: ";
    cin>>d.score;





    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"Name     : "<<d.name<<endl;
    cout<<"ID       : "<<d.id<<endl;
    cout<<"Class    : "<<d.kls<<endl;
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
    cout<<"Enter your Name : ";
    cin>>d.name;
    cout<<"Enter your Class: ";
    cin>>d.kls;
    cout<<"Enter your Score: ";
    cin>>d.score;






    // ===========================
}

