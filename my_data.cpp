
#include "my_data.h"

/**
    CLASS      : IF-39-INT
    NAME       : M. Ihsan Amien I.
    STUDENT ID : 1301153628
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
    cout<<"SID: ";
    cin>>d.sid;
    cout<<"Score: ";
    cin>>d.score;
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
    cout<<"SID: "<<d.sid<<endl;
    cout<<"Score: "<<d.score<<endl;
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
        string new_sid;
        float new_score;
        temp.id = d.id;
        cout<<"Old Name: "<<d.name<<endl;
        cout<<"New Name: ";
        cin>>new_name;
        temp.name = new_name;
        cout<<endl;
        cout<<"Old SID: "<<d.sid<<endl;
        cout<<"New SID: ";
        cin>>new_sid;
        temp.sid = new_sid;
        cout<<endl;
        cout<<"Old Score: "<<d.score<<endl;
        cout<<"New Score: ";
        cin>>new_score;
        temp.score = new_score;
        cout<<endl;
        d = temp;
    // ===========================
}

