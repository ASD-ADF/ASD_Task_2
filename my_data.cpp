
#include "my_data.h"

/**
    CLASS      : IF-39-INT
    NAME       : ALIFIANDO DESTARA YUSUF
    STUDENT ID : 1301153621
**/

mytype create_data() {
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    // ===========================
    cout<<"input: "<<endl;
    cout<<"ID   : "; cin>>d.id;
    cout<<"Name : "; cin>>d.name;
    cout<<"Class: "; cin>>d.cl;
    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */

    // ===========================
    cout<<"ID   : "<<d.id<<endl;
    cout<<"Name : "<<d.name<<endl;
    cout<<"Class: "<<d.cl<<endl;
    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    string name, cl;
    cout<<"Name : "; cin>>d.name;
    cout<<"Class: "; cin>>d.cl;
    // ===========================
}

