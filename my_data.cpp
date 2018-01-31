
#include "my_data.h"

/**
    CLASS      : IF-40-INT
    NAME       : Hasna Fadhilah Hasya
    STUDENT ID : 1301164594
**/

mytype create_data() {
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout << "input data first " << endl;
    cout << "Class : ";
    cin >> d.CL ;
    cout << "Name : ";
    cin >> d.name;
    cout << "ID : ";
    cin >> d.id;

    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */

    // ===========================
    // YOUR CODE HERE
    cout << " Class : " << d.CL << endl;
    cout << " Name : " << d.name << endl;
    cout << " ID : " << d.id << endl;

    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE
        string newname;
        string newcl;
        string newid;
        cout << "View Data";
        cin >> d.view_data(i);
        cout << "Edit Data?";
        cin >> d.find_data(database[i]);
        cout << "New Name : ";
        cin >> d.newname;
        cout << "New Class : ";
        cin >> d.newcl;
        cout << "New ID : ";
        cin >> d.nemid;





    // ===========================
}

