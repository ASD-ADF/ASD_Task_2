
#include "my_data.h"

/**
    CLASS      : IF-39-INT
    NAME       : HAQITA ANJAR ALAM
    STUDENT ID : 1301153681
**/

mytype create_data() {
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    cout<<"input your : "<<endl;
    cout<<"ID : ";
    cin>>d.id;
    cout<<"Name : ";
    cin>>d.name;
    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"Content of data d"<<endl;
    cout<<"ID : "<<d.id<<endl;
    cout<<"name : "<<d.name<<endl;





    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"Name : ";
    cin>>d.name;





    // ===========================
}

