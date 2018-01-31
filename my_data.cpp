
#include "my_data.h"

/**
    CLASS      :IF-40-INT
    NAME       :Randy Kustiwa Koesma
    STUDENT ID :1301162472
**/

mytype create_data() {
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<"====================="<<endl;
    cout<<"Input NIM : ";
    cin>>d.nim;
    cout<<"Input Name : ";
    cin>>d.nama;
    cout<<"Input Class : ";
    cin>>d.kelas;
    cout<<"Input Your Weight : ";
    cin>>d.berat;

    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"====================="<<endl;
    cout<<"NIM   : "<<d.nim<<endl;
    cout<<"Name : "<<d.nama<<endl;
    cout<<"Class: "<<d.kelas<<endl;
    cout<<"Body Weight : "<<d.berat<<endl;





    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE
        string beforeUpdateName = d.nama;
        cout<<"====================="<<endl;
        cout<<"Input new Name : ";
        cin>>d.nama;
        cout<<"Input new Class : ";
        cin>>d.kelas;
        cout<<"Input new Weight : ";
        cin>>d.berat;
        cout<<beforeUpdateName<<" Updated become "<<d.nama<<endl;
        cout<<endl;




    // ===========================
}

