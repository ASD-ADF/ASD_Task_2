#include "array_based.h"
/**
    CLASS      : IF-39-INT
    NAME       : M. Ihsan Amien I.
    STUDENT ID : 1301153628
**/


void add_new_data(mytype database[10], int &n_data, mytype d) {
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the end of database array
    */
    // ===========================
    // YOUR CODE HERE
    d.score = (float)n_data;
	database[n_data] = d;
	n_data++;
    // ===========================
}

void add_new_priority_data(mytype database[10], int &n_data, mytype d) {
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the front of database array
    */
    // ===========================
    // YOUR CODE HERE
    mytype swap, place;
	d.score = (float)n_data;
	place = d;
	for (int i = 0; i <= n_data; i++) {
		swap = database[i];
		database[i] = place;
		place = swap;
	}
	n_data++;
    // ===========================
}

int find_data(mytype database[10], int n_data, int id_to_find) {
    /**
    TODO:   find a data inside the database based on its id
            the function will return the index of the searched data
            the function will return -1 if such data is not found
    */
    // ===========================
    // YOUR CODE HERE
    int i = 0;
	while (i <= n_data && database[i].id != id_to_find) {
		i++;
	}
	if (i <= n_data) {
		return i;
	}
	else {
		return -1;
	}
    // ===========================
}

void remove_data(mytype database[10], int &n_data, int id_to_delete) {
    /**
    TODO:   find a data inside the database based on its id
            then remove such found data from database
    */
    // ===========================
    // YOUR CODE HERE
    int i = find_data(database, n_data, id_to_delete);
	while (i <= n_data) {
		database[i] = database[i + 1];
		i++;
	}
	n_data--;
    // ===========================
}

void view_data(mytype database[10], int n_data) {
    /**
     TODO:  loop through database
            and view all data inside database
    */
    // ===========================
    // YOUR CODE HERE
    for (int i = 0; i < n_data; i++) {
		view_data(database[i]);
	}
    // ===========================
}

void sort_data(mytype database[10], int n_data) {
    /**
     TODO:  sort data inside database
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    for (int i = 1; i < n_data; i++)
    {
        d = database[i];

        int j = i -1;
        while (j >= 0 && database[j].score > d.score)
        {
            database[j+1] = database[j];
            j--;
        }
        database[j+1] = d;
    }
    cout<<endl;
    // ===========================
}

