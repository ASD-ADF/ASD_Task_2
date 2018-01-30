
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
    cout<<" ID  : ";
    cin>>mytype.id>>endl;
    cout<<"Nama : ";
    cin>>mytype.nama>>endl;
    cout<<"NIM  : ";
    cin>>mytype.nim>>endl;
    cout<<"IPK  : ";
    cin>>mytype.ip>>endl;





    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"ID   : "<<mytype.id<<endl;
    cout<<"Nama : "<<mytype.nama<<endl;
    cout<<"NIM  : "<<mytype.nim<<endl;
    cout<<"IPK  : "<<mytype.ip<<endl;





    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE
        cout<<"Nama : "; cin<<mytype.nama<<endl;
        cout<<"NIM  : "; cin<<mytype.nim<<endl;
        cout<<"IPK  : "; cin<<mytype.ip<<endl;





    // ===========================
}

