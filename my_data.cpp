
#include "my_data.h"

/**
    CLASS      :IF-40-INT
    NAME       :Muhammad ibrahim alkayyis
    STUDENT ID :1301160620
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
    cin>>d.name;
    cout<<"Input Your Class : "<<endl;
    cin>>d.kelas;
    cout<<"Input Your Id : "<<endl;
    cin>>d.ID;
    cout<<"Input Your Score: "<<endl;
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
    cout<<"Your Name : "<<d.name<<endl;
    cout<<"Your Class : "<<d.kelas<<endl;
    cout<<"Your Id : "<<d.ID<<endl;
    cout<<"Your Score: "<<d.score<<endl;





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
        cin>>d.name;
        cout<<"New Kelas : "<<endl;
        cin>>d.kelas;
        cout<<"New Score : "<<endl;
        cin>>d.score;
    // ===========================
}

