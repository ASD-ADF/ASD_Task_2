
#include "my_data.h"

/**
    CLASS      :IF-40-INT
    NAME       :Gede B. Wiswa Pranata
    STUDENT ID :1301160413
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
    cout<<"input name       :"<<endl;
    cin>>d.name;
    cout<<"input id         :"<<endl;
    cin>>d.id;
    cout<<"input class      : "<<endl;
    cin>>d.klass;
    cout<<"input score      : "<<endl;
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
    cout<<"your name is     : "<<d.name<<endl;
    cout<<"your id is       : "<<d.id<<endl;
    cout<<"your class is    : "<<d.klass<<endl;
    cout<<"your score is    : "<<d.score<<endl;



    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */
    cout<<"change name  : ";
    cin>>d.name;
    cout<<"change score : ";
    cin>>d.score;
    cout<<"change ID    : ";
    cin>>d.id;



    // ===========================
}

