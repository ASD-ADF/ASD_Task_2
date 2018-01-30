
#include "my_data.h"

/**
    CLASS      : IF 41-08
    NAME       : Mia Sayida Fatma
    STUDENT ID : 1301164555
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
    cout<<"Input Berat Badan : ";
    cin>>d.bb;
    cout<<"Input Tinggi Badan : ";
    cin>>d.tb;
    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"Id : "<<d.id<<endl;
    cout<<"Nama : "<<d.nama<<endl;
    cout<<"Berat Badan : "<<d.bb<<endl;
    cout<<"Tinggi Badan : "<<d.tb<<endl;
    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE
    int id;
    cout<<"Input Id : ";
    cin>>id;
    if (id == d.id){
        cout<<"Input Nama : ";
        cin>>d.nama;
        cout<<"Input Berat Badan : ";
        cin>>d.bb;
        cout<<"Input Tinggi Badan : ";
        cin>>d.tb;
    }else{
        cout<<"id not valid";
    }
    // ===========================
}

