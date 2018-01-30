
#include "my_data.h"

/**
    CLASS      : IF 39 INT
    NAME       : Ade satrio wirawan
    STUDENT ID : 1301153615
**/

mytype create_data() {
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    cout<<"----------------------------"<<endl;
    cout<<"ID     : ";
    cin>>d.id;
    cout<<"Name   : ";
    cin>>d.name;
    cout<<"Status : ";
    cin>>d.status;
    cout<<"----------------------------"<<endl;



    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"----------------------------"<<endl;
    cout<<"ID       : "<<d.id
        <<"\nName   : "<<d.name
        <<"\nStatus : "<<d.status
        <<endl;
    cout<<"----------------------------"<<endl;





    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    cout<<"----------------------------"<<endl;
    string name, status;
    cout<<"Name   : ";
    cin>>d.name;
    cout<<"Status : ";
    cin>>d.status;
    cout<<"----------------------------"<<endl;
    // ===========================
}

