
#include "my_data.h"

/**
    CLASS      : IF-41-08
    NAME       : FAREZA ADITYANTO
    STUDENT ID : 1301174228
**/


mytype create_data() {
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<"your code here"<<endl;
    cout<<endl;
    cout<<"Masukkan id anda (angka bukan desimal) = ";
    cin>>d.ID;
//    cout<<endl;
    cout<<"Masukkan IPK anda (desimal menggunakan titik) = ";
    cin>>d.IPK;
//    cout<<endl;
    cout<<"Masukkan nomor telepon orangtua = ";
    cin>>d.hp1;
//    cout<<endl;
    cout<<"Masukkan alamat rumah anda = ";
    cin>>d.rumah;
    cout<<"===================================================="<<endl;


    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"your code here"<<endl<<endl;

    cout<<"Id yang telah anda inputkan adalah = "<<d.ID<<endl;
    cout<<"Nomor telepon orangtua yang telah anda inputkan adalah = "<<d.hp1<<endl;
    cout<<"Alamat rumah yang telah anda inputkan adalah = "<<d.rumah<<endl;
    cout<<"IPK yang telah anda inputkan adalah = "<<d.IPK<<endl;
    cin.get();
    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE
        cout<<"your code here"<<endl;

        cout<<endl;
        cout<<"Id anda adalah = "<<d.ID<<endl;
        cout<<"Edit data anda, ID = "<<d.ID<<"."<<endl;
        cout<<"--------------------------------------------------------"<<endl;
        cout<<"Masukkan IPK baru anda (desimal menggunakan titik) = ";
        cin>>d.IPK;

        cout<<"Masukkan nomor telepon orangtua yang baru = ";
        cin>>d.hp1;

        cout<<"Masukkan alamat rumah anda yang baru = ";
        cin>>d.rumah;


    // ===========================
}

