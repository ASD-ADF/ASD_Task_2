
#include "my_data.h"

/**
    CLASS      : IF-41-08
    NAME       : M. Fadhil Ihsan
    STUDENT ID : 1301170505
**/

mytype create_data() {
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;

    // ===========================
    // YOUR CODE HERE
    cout<<"Masukkan Nama: ";
    cin>> d.nama;
    cout<<"Masukkan Id : ";
    cin>> d.id;
    cout<<"Masukkan Kelas: ";
    cin>> d.kelas;
    cout<<"Masukkan IP: ";
    cin>> d.ip;

    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"Nama: "<<d.nama<<endl;
    cout<<"Id: "<<d.id<<endl;
    cout<<"Kelas: "<<d.kelas<<endl;
    cout<<"Ip Anda: "<<d.ip<<endl;

    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE
    string answer_string;
    string y;
    cout<<"Ingin mengedit Nama? (y/n): ";
    cin>> answer_string;
    if (answer_string == "y")
    {
         cout<<"Masukkan Nama: ";
         cin>>d.nama;
    }
    cout<<"Ingin mengedit Kelas? (y/n): ";
    cin>>answer_string;
    if (answer_string == "y")
    {
         cout<<"Masukkan Kelas: ";
         cin>>d.kelas;
    }
    cout<<"Ingin mengedit Id? (y/n): ";
    cin>>answer_string;
    if (answer_string == "y")
    {
         cout<<"Maaf Id anda tidak bisa diubah"<<endl;
    }
    else
    {
        cout<<"Maaf Id anda tidak bisa diubah"<<endl;
    }
    cout<<"Ingin mengedit Nilai Ip anda? (y/n): ";
    cin>>answer_string;
    if (answer_string == "y")
    {
         cout<<"Masukkan Ip anda: ";
         cin>>d.ip;
    }
    // ===========================
}

