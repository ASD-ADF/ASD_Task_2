#include <conio.h>
#include <string>
#include "my_data.h"
#include <stdio.h>

/**
    CLASS      : IF-41-08
    NAME       : Hafizh Fadhilah R B
    STUDENT ID : 1301170404
**/

mytype create_data() {
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<" ID  : ";
    cin>>d.id;
    cout<<"Nama : ";
    cin>>d.nama;
    cout<<"NIM  : ";
    cin>>d.nim;
    cout<<"IPK  : ";
    cin>>d.ip;





    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"ID   : "<<d.id<<endl;
    cout<<"Nama : "<<d.nama<<endl;
    cout<<"NIM  : "<<d.nim<<endl;
    cout<<"IPK  : "<<d.ip<<endl;





    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE
        cout<<"Nama : ";
        cin>>d.nama;
        cout<<"NIM  : ";
        cin>>d.nim;
        cout<<"IPK  : ";
        cin>>d.ip;





    // ===========================
}

