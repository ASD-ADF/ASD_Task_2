
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
    cout<<"id= ";
    cin>> d.id;
    cout<<"Nama= ";
    cin>> d.nama;
    cout<<"Kelas= ";
    cin>>d.kelas;
    cout<<"Nilai= ";
    cin>>d.nilai;

    //sum=sum+1;
    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"id= "<<d.id<<endl;
    cout<<"nama= "<<d.nama<<endl;
    cout<<"kelas= "<<d.kelas<<endl;
    cout<<"nilai= "<<d.nilai<<endl;
    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"Nama= ";
    cin>> d.nama;
    cout<<"Kelas= ";
    cin>>d.kelas;
    cout<<"Nilai= ";
    cin>>d.nilai;
    // ===========================
}

