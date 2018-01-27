
#include "my_data.h"

/**
    CLASS      : IF-41-08
    NAME       : Nuurshadieq
    STUDENT ID : 1301171087
**/

mytype create_data() {
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<"ID: ";
    cin>>d.id;
    cout<<"Name: ";
    cin>>d.name;
    cout<<"NIM: ";
    cin>>d.nim;
    cout<<"Nilai: ";
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
    cout<<"ID: "<<d.id<<endl;
    cout<<"Name: "<<d.name<<endl;
    cout<<"NIM: "<<d.nim<<endl;
    cout<<"Nilai: "<<d.nilai<<endl;





    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE
        mytype temp;
        string new_name;
        string new_nim;
        float new_nilai;
        temp.id = d.id;
        cout<<"Old Name: "<<d.name<<endl;
        cout<<"New Name: ";
        cin>>new_name;
        temp.name = new_name;
        cout<<endl;
        cout<<"Old NIM: "<<d.nim<<endl;
        cout<<"New NIM: ";
        cin>>new_nim;
        temp.nim = new_nim;
        cout<<endl;
        cout<<"Old Nilai: "<<d.nilai<<endl;
        cout<<"New Nilai: ";
        cin>>new_nilai;
        temp.nilai = new_nilai;
        cout<<endl;

        d = temp;






    // ===========================
}

