#include "array_based.h"
/**
    CLASS      : IF - 41 - 08
    NAME       : Ahmad Satriamulya
    STUDENT ID : 1301170012
**/


void add_new_data(mytype database[10], int &n_data, mytype d) {
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the end of database array
    */
    // ===========================
    database[n_data++] = d;
    // ===========================
}

void add_new_priority_data(mytype database[10], int &n_data, mytype d) {
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the front of database array
    */
    // ===========================
    // YOUR CODE HERE
    int i = n_data++;
    while (i >= 0) {
        database[i--] = database[i-1];
    }
    database[0] = d;
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
    while(id_to_find != database[i].ID && i<=n_data) {
        i++;
    }
    if (i<=n_data) {
        return i;
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
    int i = find_data(database, n_data, id_to_delete);

    if (i!=-1) {
        for (int j = i; j <= n_data; j++) {
            database[j] = database[j+1];
        }
    } else {
        cout<<"Can't recognize the ID"<<endl;
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
    for (int i = 0; i<=n_data-1; i++) {
        cout<<"Data with Index: "<<i<<endl;
        cout<<"ID: "<<database[i].ID<<endl;
        cout<<"Name: "<<database[i].Name<<endl;
        cout<<"Age: "<<database[i].Age<<endl;
        cout<<"IPK: "<<database[i].IP<<endl<<endl;
    }

    // ===========================
}

void sort_data(mytype database[10], int n_data) {
    /**
     TODO:  sort data inside database
    */
    mytype d;
    // ===========================
    int k, j;
    for (k = 1; k <= n_data; k++) {
        d = database[k];
        j = k;
        while (j > 0 && d.IP > database[j-1].IP) {
            database[j--] = database[j-1];
        }
        database[j] = d;
        // ===========================
    }
}
