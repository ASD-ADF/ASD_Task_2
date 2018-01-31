#include "array_based.h"
/**
    CLASS      : IF-39-INT
    NAME       : HAQITA ANJAR ALAM
    STUDENT ID : 1301153681
**/


void add_new_data(mytype database[10], int &n_data, mytype d) {
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the end of database array
    */
    // ===========================
    // YOUR CODE HERE
    d.i=(float)n_data;
    database[n_data]=d;
    n_data++;
    // ===========================
}

void add_new_priority_data(mytype database[10], int &n_data, mytype d) {
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the front of database array
    */
    mytype a,b;
    d.i=(float)n_data;
    b=d;
    int i=0;
    while (i<=n_data) {
        a=database[i];
        database[i]=b;
        b=a;
        i++;
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
    int i=0;
    while (i<= n_data && database[i].id != id_to_find){
        i++;
    }
    if (i<=n_data){
        return i;
    }else{
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
    int i = find_data(database,n_data,id_to_delete);
        while (i<= n_data){
            database[i]=database[i+1];
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
    for (int i=0; i<= n_data;i++){
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
    for (int i=0; i<= n_data;i++){
        for (int j=0; j<=n_data; j++){
            if (database[i].i> database[j].i){
                d=database[i];
                database[i]=database[j];
                database[j]=d;
            }
        }
    }





    // ===========================
}

