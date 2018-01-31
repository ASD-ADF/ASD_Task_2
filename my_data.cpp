
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
    cout<<"input your name: "<<endl;
    cin>>d.Name;
    cout<<"input your Class: "<<endl;
    cin>>d.Class;
    cout<<"input your ID: "<<endl;
    cin>>d.ID;
    cout<<"input your Score: "<<endl;
    cin>>d.Score;

    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"your name: "<<d.Name<<endl;
    cout<<"yer Class: "<<d.Class<<endl;
    cout<<"yer ID: "<<d.ID<<endl;
    cout<<"yer Score: "<<d.Score<<endl;

    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE
        cout<<"New Name: "<<endl;
        cin>>d.Name;
        cout<<"New Class: "<<endl;
        cin>>d.Class;
        cout<<"New Score"<<endl;
        cin>>d.Score;

    // ===========================
}

