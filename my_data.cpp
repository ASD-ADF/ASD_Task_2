
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
    cout<<"Masukkan nama  : ";
    cin>>d.nama;
    cout<<"Masukkan nim   : ";
    cin>>d.id;
    cout<<"Masukkan kelas : ";
    cin>>d.kelas;
    cout<<"Masukkan nilai : ";
    cin>>d.nilai;

    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */
 cout<<"nama  : "<<d.nama<<" "<<endl;
 cout<<"nim   : "<<d.id<<" "<<endl;
 cout<<"kelas : "<<d.kelas<<" "<<endl;
 cout<<"nilai : "<<d.nilai<<" "<<endl;

}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

   cout<<"Masukkan nama  : ";
    cin>>d.nama;
    cout<<"Masukkan kelas : ";
    cin>>d.kelas;
    cout<<"Masukkan nilai : ";
    cin>>d.nilai;
}

