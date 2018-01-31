
#include "my_data.h"

/**
    CLASS      : IF-41-08
    NAME       : Muhammad Mukhtar Dwi Putra
    STUDENT ID : 1301170278
**/

mytype create_data(int &n_data)
{
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    d.id = n_data;
    cout << "ID : " << d.id << endl;
    cout << "Masukkan nama : ";
    cin >> d.nama;
    cout << "Masukkan NIM : ";
    cin >> d.nim;
    cout << "Masukkan nilai : ";
    cin >> d.nilai;
    // ===========================
    return d;
}

void view_data(mytype d)
{
    /**
     TODO:  view the content of data d
    */

    // ===========================
    // YOUR CODE HERE
    cout << "ID : " << d.id << endl;
    cout << "Nama : " << d.nama << endl;
    cout << "NIM : " << d.nim << endl;
    cout << "Nilai : " << d.nilai << endl;
    cout << endl;





    // ===========================
}


void edit_data(mytype &d)
{
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE
    cout << "EDIT DATA" << endl;
    cout << "ID : " << d.id << endl;
    cout << "Masukkan nama : ";
    cin >> d.nama;
    cout << "Masukkan NIM : ";
    cin >> d.nim;
    cout << "Masukkan nilai : ";
    cin >> d.nilai;
    // ===========================
}

