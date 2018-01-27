#include "array_based.h"
/**
    CLASS      : IF-41-08
    NAME       : Iriyanto
    STUDENT ID : 1301174295
**/


void add_new_data(mytype database[10], int &n_data, mytype d) {
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the end of database array
    */
    // ===========================
    // YOUR CODE HERE

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

    int i;
    for (i=n_data; i>0; i--) {
        database[i+1] = database[i];
    }
    database[0] = d;
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

    int i=0;
    while ((database[i].id!=id_to_find)&& (i<n_data)) {
        i++;
    }

    if (database[i].id==id_to_find) {
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

    int i, idx;
    idx = find_data( database,  n_data,  id_to_delete);

    if (idx!=-1) {
        for (i=idx; i<n_data; i++) {
            database[i] = database[i+1];
        }
    }
    else {
        cout<<"ID not found"<<endl;
    }

    // ===========================
}

void view_data(mytype database[10], int n_data) {
    /**
     TODO:  loop through database
            and view all data inside database
    */
    // ===========================
    // YOUR CODE HERE

    int i;
    for(i=0; i<n_data; i++) {
        cout<<"ID       : "<<database[i].id<<endl;
        cout<<"Name     : "<<database[i].name<<endl;
        cout<<"Class    : "<<database[i].classroom<<endl;
        cout<<"Score    : "<<database[i].score<<endl;
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
    cout<<"your code here"<<endl;





    // ===========================
}

