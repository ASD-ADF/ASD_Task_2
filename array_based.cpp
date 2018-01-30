#include "array_based.h"

/**
    CLASS      : IF 41-08
    NAME       : Mia Sayida Fatma
    STUDENT ID : 1301164555
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
    TODO:    add the new data d inside the database,
            the new data will be located at the front of database array
    */
    // ===========================
    // YOUR CODE HERE
    int i;
    for(i=n_data+1; i>0; i--){
        database[i] = database[i-1];
    }
    n_data++;
    database[i] = d;
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
    for (int i = 0; i<n_data; i++){
        if (database[i].id == id_to_find){
            return i;
        }
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
    for(int i=0; i<n_data; i++){
        if(database[i].id == id_to_delete){
            for(i; i<n_data; i++){
                database[i] = database[i+1];
            }
            n_data--;
            break;
        }else if(i >= n_data){
            cout<<"ID not found";
        }
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
    for (int i = 0; i<n_data; i++){
        cout<<"Id : "<<database[i].id<<endl;
        cout<<"Nama : "<<database[i].nama<<endl;
        cout<<"Berat Badan : "<<database[i].bb<<endl;
        cout<<"Tinggi Badan : "<<database[i].tb<<endl;
    }
    // ===========================
}

void sort_data(mytype database[10], int n_data) {
    /**
     TODO:  sort data inside database
    */
    mytype d;
    int tempIndex;
    // ===========================
    // YOUR CODE HERE
    for(int i=0; i<n_data; i++){
        d = database[i];
        tempIndex = i;
        for(int j=i+1; j<n_data; j++){
            if(d.bb > database[j].bb){
                d = database[j];
                tempIndex = j;
            }
        }

        if(tempIndex != i){
            database[tempIndex] = database[i];
            database[i] = d;
        }
    }
    // ===========================
}

