
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
    cout<<"======================"<<endl;
	cout << "ID : ";
	cin >> d.id;
	cout << "Name : ";
	cin >> d.name;
	cout << "Status : ";
	cin >> d.status;
	cout<<"======================"<<endl;;
    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"======================"<<endl;
	cout << "ID : " << d.id
		 << "\nName : " << d.name
		 << "\nStatus : " << d.status
		 << endl;
    cout<<"======================"<<endl;
    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"======================"<<endl;
	string name, status;
	cout << "Name : ";
	cin >> d.name;
	cout << "Status : ";
	cin >> d.status;
    cout<<"======================"<<endl;
    // ===========================
}

