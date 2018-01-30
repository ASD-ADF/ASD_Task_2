#include "array_based.h"
/**
    CLASS      : IF 41-08
    NAME       : Muhammad Rayhan Alifinzi Ghiffari
    STUDENT ID : 1301174145
**/


void add_new_data(mytype database[10], int &n_data, mytype d) {
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the end of database array
    */
    // ===========================
    // YOUR CODE HERE
    int i;
    bool duplicate = false;
    for (i=0; i<=n_data; i++) {
        if (database[i].nim==d.nim) {

            cout<<"Hello, you cannot insert the data with the same ID."<<endl<<endl;
            duplicate = true;
        }
    }

    if ( duplicate == false) {
        database [n_data].nim = d.nim;
        database [n_data].nama = d.nama;
        database [n_data].kelas = d.kelas;
        database [n_data].nilai = d.nilai;
    }

    // ===========================
}

void add_new_priority_data(mytype database[10], int &n_data, mytype d) {
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the front of database array
    */
    // ===========================
    // YOUR CODE HERE
    mytype temp;
    mytype prev;
    int i;

    prev.nama = database[0].nama;
    prev.kelas = database[0].kelas;
    prev.nim = database[0].nim;
    prev.nilai = database[0].nilai;

    for ( i=1; i<=n_data; i++) {
        temp.nama = database[i].nama;
        temp.kelas = database[i].kelas;
        temp.nim = database[i].nim;
        temp.nilai = database[i].nilai;

        database[i].nama = prev.nama;
        database[i].kelas = prev.kelas;
        database[i].nim = prev.nim;
        database[i].nilai = prev.nilai;

        prev.nama = temp.nama;
        prev.kelas = temp.kelas;
        prev.nim = temp.nim;
        prev.nilai = temp.nilai;
    }

    database[0].nama = d.nama;
    database[0].kelas = d.kelas;
    database[0].nim= d.nim;
    database[0].nilai = d.nilai;

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
    for (i=0; i<=n_data; i++){

        if(database[i].nim==id_to_find){

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
    int idx_to_delete, i;

    idx_to_delete = find_data(database, n_data, id_to_delete);
    if(idx_to_delete!= -1){

        for(i=idx_to_delete;i<=n_data;i++){

            database[i].nama = database[i+1].nama;
            database[i].kelas = database[i+1].kelas;
            database[i].nim = database[i+1].nim;
            database[i].nilai = database[i+1].nilai;
        }
        n_data--;
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
    for (i=0;i<n_data;i++){

        cout<<"Student's Name #"<<i<<" : "<<database[i].nama<<endl;
        cout<<"Student's Class #"<<i<<" : "<<database[i].kelas<<endl;
        cout<<"Student's ID Number #"<<i<<" : "<<database[i].nim<<endl;
        cout<<"Student's GPA #"<<i<<" : "<<database[i].nilai<<endl;
    }
    // ===========================
}

void sort_data(mytype database[10], int n_data) {
    /**
     TODO:  sort data inside database
    */
    mytype d;
    int i, j;
    // ===========================
    // YOUR CODE HERE
    for (i=2; i<=n_data; i++){

        d.nama = database[i].nama;
        d.kelas = database[i].kelas;
        d.nim = database[i].nim;
        d.nilai = database[i].nilai;
        j=i;

        while((j>0) && (d.nilai>database[j-1].nilai)) {

            database[j].nama = database [j-1].nama;
            database[j].kelas = database [j-1].kelas;
            database[j].nim = database [j-1].nim;
            database[j].nilai = database [j-1].nilai;
            j--;
        }
            database[j].nama = d.nama;
            database[j].kelas = d.kelas;
            database[j].nim = d.nim;
            database[j].nilai = d.nilai;
    }

    // ===========================
}

