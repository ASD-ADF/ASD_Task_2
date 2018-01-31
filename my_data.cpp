
#include "my_data.h"

/**
    CLASS      : IF - 41 - 08
    NAME       : Ahmad Satriamlya
    STUDENT ID : 1301170012
**/

mytype create_data() {
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<"Input ID: ";
    cin>>d.ID;
    cout<<"Input First Name: ";
    cin>>d.Name;
    cout<<"Input Age: ";
    cin>>d.Age;
    cout<<"Input IP: ";
    cin>>d.IP;

    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */

    // ===========================
    cout<<"ID: "<<d.ID<<endl;
    cout<<"Name: "<<d.Name<<endl;
    cout<<"Age: "<<d.Age<<endl;
    cout<<"IP: "<<d.IP<<endl;
    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================

    int answer_int;
    cout<<"Wanna edit the name (1/0): ";
    cin>>answer_int;
    if(answer_int == 1) {
        cout<<"input the new First Name: ";
        cin>>d.Name;
    }
    cout<<"Wanna edit the Age(1/0): ";
    cin>>answer_int;
    if(answer_int == 1) {
        cout<<"input the new Age: ";
        cin>>d.Age;
    }
    cout<<"Wanna edit the IP(1/0): ";
        cin>>answer_int;
    if(answer_int == 1) {
        cout<<"input the new IP: ";
        cin>>d.IP;
    }
    cout<<endl<<endl;

    // ===========================
}
