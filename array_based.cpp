#include "array_based.h"
/**
    CLASS      :    IF-41-08
    NAME       :    Intania Effendi
    STUDENT ID :    1103130301
**/


void add_new_data(mytype database[10], int &n_data, mytype d) {
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the end of database array
    */
    // ===========================
    // YOUR CODE HERE

    database[n_data].id = d.id;
    database[n_data].nama = d.nama;
    database[n_data].kelas = d.kelas;
    database[n_data].nilai = d.nilai;

    n_data = n_data + 1;

    // ===========================
}

void add_new_priority_data(mytype database[10], int &n_data, mytype d) {
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the front of database array
    */
    // ===========================
    // YOUR CODE HERE
    int i=0; mytype tmp[10];
    while (i<=n_data) {
        tmp[i]=database[i];
        i++;
    }

    database[0]=d;

    int j=0; n_data++;
    while (j<=n_data) {
        database[j+1] = tmp[j];
        j++;
    }
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
    int found = -1;
    while(found <0){
        if(database[i].id == id_to_find){
            return i;
        }
        i++;
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
    int index = find_data( database,  n_data,  id_to_delete);

    int j=index; n_data++;
    if (index!=n_data) {
        while (j<=n_data) {
        database[j] = database[j+1];
        j++;
        }
    }
    n_data = n_data-2;
    cout << n_data;
    // ===========================
}

void view_data(mytype database[10], int n_data) {
    /**
     TODO:  loop through database
            and view all data inside database
    */
    // ===========================
    // YOUR CODE HERE
    int i = 0;
    while (i<n_data) {
        view_data(database[i]);
        i++;
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
    for(int i=1;i<n_data;++i)
    {
        for(int j=0;j<(n_data-i);++j)
            if(database[j].id>database[j+1].id)
            {
                d=database[j];
                database[j]=database[j+1];
                database[j+1]=d;
            }
    }
    // ===========================
}

