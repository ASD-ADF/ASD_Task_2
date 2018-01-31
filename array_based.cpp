#include "array_based.h"
/**
    CLASS      : IF-40-INT
    NAME       : Hasna Fadhilah Hasya
    STUDENT ID : 130164594
**/


void add_new_data(mytype database[10], int &n_data, mytype d) {
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the end of database array
    */
    // ===========================
    // YOUR CODE HERE
    d.h = (float)n_data;
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
    mytype z,l ;
    d.h = (float)n_data;
    l = d;
    for ( int i = 0;i <= n_data; i++) {
        z = database[i];
        database[i] = l;
        l = z;
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
    int h = 0;
    while (h<=n_data && database[h].id != id_to_find) {
        i++;
    }
    if (h <= n_data) {
        return h;
    } else {
        return -1;
    }

    // ===========================
    return -1;
}

void remove_data(mytype database[10], int &n_data, int id_to_delete) {
    /**
    TODO:   find a data inside the database based on its id
            then remove such found data from database
    */
    // ===========================
    // YOUR CODE HERE
    int h = find_data(database, n_data, id_to_delete);
    while (h <= n_data ) {
        database[h] = database[h+1];
        h++;
    }
    n_data++;

    // ===========================
}

void view_data(mytype database[10], int n_data) {
    /**
     TODO:  loop through database
            and view all data inside database
    */
    // ===========================
    // YOUR CODE HERE
    for (int i = 0; i<n_data;i--){
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
    for ( int i = 0; i< n_data; i++) {
        for (int j = 0; j< n_data; j++) {
            if (database[i].h < database[j].h){
                d = database[i];
                database[i] =database[j];
                database[j] = d;
            }
            j++;
        }
        i++;
    }

    // ===========================
}

