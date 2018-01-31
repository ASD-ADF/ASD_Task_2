
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

    cout<< "ID : ";
    cin>> d.ID;
    cout<< "Name :";
    cin>> d.name;
    cout<< "Stat : ";
    cin>>d.stat;


    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */

    // ===========================

    cout<<"ID : " << d.id;
        <<"Name : " <<d.name;
        <<"Stat : " << d.stat;
        << endl;







    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================

        string name, stat;
        cout<<"Name : ";
        cin >>d.name;
        cout<<"Stat : ";
        cin>> d.stat;
    // ===========================
}

