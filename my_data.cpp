
#include "my_data.h"

/**
    CLASS      :IF-40-INT
    NAME       :Muhammad Rizky Anugrah Sakti
    STUDENT ID :1301164489
**/

mytype create_data() {
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<"Input Your Name : "<<endl;
    cin>>d.nama;
    cout<<"Input Your Class : "<<endl;
    cin>>d.kelas;
    cout<<"Input Your Id : "<<endl;
    cin>>d.ID;
    cout<<"Input Your Score: "<<endl;
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
    cout<<"Your Name : "<<d.nama<<endl;
    cout<<"Your Class : "<<d.kelas<<endl;
    cout<<"Your Id : "<<d.ID<<endl;
    cout<<"Your Score: "<<d.nilai<<endl;





    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE
        cout<<"New Name : "<<endl;
        cin>>d.nama;
        cout<<"New Kelas : "<<endl;
        cin>>d.kelas;
        cout<<"New Score : "<<endl;
        cin>>d.nilai;
    // ===========================
}

