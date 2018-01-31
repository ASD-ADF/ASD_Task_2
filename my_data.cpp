
#include "my_data.h"

/**
     CLASS     : IF 41-08
    NAME       : Muhammad Rayhan Alifinzi Ghiffari
    STUDENT ID : 1301174145
**/

mytype create_data() {
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<"Hello ! Please input your user data here : "<<endl<<endl;
    cout<<endl;
    cout<<"Student's Name : ";
    cin>>d.nama;

    cout<<"Student's Class : ";
    cin>>d.kelas;

    cout<<"Student's ID Number : ";
    cin>>d.nim;

    cout<<"Student's GPA : ";
    cin>>d.nim;

    cout<<endl;

    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"Student's Name : "<<d.nama<<endl;
    cout<<"Student's Class : "<<d.kelas<<endl;
    cout<<"Student's ID Number : "<<d.nim<<endl;
    cout<<"Student's GPA : "<<d.nilai<<endl;

    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE

    cout<<" Student's Name : ";
    cin>>d.nama;

    cout<<"Student's Class : ";
    cin>>d.kelas;

    cout<<"Student's ID Number : ";
    cin>>d.nim;

    cout<<"Student's GPA : ";
    cin>>d.nilai;

    cout<<endl;



    // ===========================
}

