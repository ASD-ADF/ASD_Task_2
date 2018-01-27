
#include "my_data.h"

/**
CLASS      : IF39INT
NAME       : PERTIWANG SISMANANDA
STUDENT ID : 1301153614
**/

mytype create_data() {
	/**
	TODO:  receive input from user
	and assign the value of new data
	*/
	mytype d;
	// ===========================
	cout << "ID : ";
	cin >> d.id;
	cout << "Name : ";
	cin >> d.name;
	cout << "Status : ";
	cin >> d.status;
	// ===========================
	return d;
}

void view_data(mytype d) {
	/**
	TODO:  view the content of data d
	*/

	// ===========================
	cout << "ID : " << d.id
		<< "\nName : " << d.name
		<< "\nStatus : " << d.status
		<< endl;
	// ===========================
}


void edit_data(mytype &d) {
	/**
	TODO:  edit the value of data d,
	the ID must not be modified
	*/

	// ===========================
	string name, status;
	cout << "Name : ";
	cin >> d.name;
	cout << "Status : ";
	cin >> d.status;
	// ===========================
}

