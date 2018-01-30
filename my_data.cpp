
#include "my_data.h"

/**
    CLASS      : IF-41-08
    NAME       : Supra Yogi
    STUDENT ID : 1301174264
**/

mytype create_data() {
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<"Input ID : ";
    cin>>d.id;
    cout<<"Input Nama : ";
    cin>>d.nama;
    cout<<"Input NIM: ";
    cin>>d.nim;






    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"ID : "<<d.id<<endl;
    cout<<"Nama : "<<d.nama<<endl;
    cout<<"NIM : "<<d.nim<<endl;





    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"Input Nama baru : ";
    cin>>d.nama;
    cout<<"Input NIM baru: ";
    cin>>d.nim;





    // ===========================
}

