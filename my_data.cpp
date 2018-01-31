
#include "my_data.h"

/**
    CLASS      :IF-40-INT
    NAME       :Aditya Ramadhan Moesya
    STUDENT ID :1301160471
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
    cout<<"Input id : ";
    cin>>d.id;
    cout<<"Input nama : ";
    cin>>d.nama;
    cout<<"Input kelas : ";
    cin>>d.kelas;
    cout<<"Input nilai : ";
    cin>>d.nilai;

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
    cout<<"Id   : "<<d.id<<endl;
    cout<<"nama : "<<d.nama<<endl;
    cout<<"kelas: "<<d.kelas<<endl;
    cout<<"nilai : "<<d.nilai<<endl;





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
        cout<<"Input new nama : ";
        cin>>d.nama;
        cout<<"Input new kelas : ";
        cin>>d.kelas;
        cout<<"Input new nilai : ";
        cin>>d.nilai;
        cout<<beforeUpdateName<<" Updated become "<<d.nama<<endl;
        cout<<endl;




    // ===========================
}

