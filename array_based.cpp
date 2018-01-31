#include "array_based.h"
/**
    CLASS      : IF-41-08
    NAME       : Aanisah Rifda Rusjdy
    STUDENT ID : 1301174057
**/


void add_new_data(mytype database[10], int &n_data, mytype d) {
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the end of database array
    */
    // ===========================
    // YOUR CODE HERE
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
    for (int i = n_data; i >=0; i--)
    {
        database[i] = database[i-1];
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
    int i = 0;

    while ((id_to_find != database[i].id) && (i < n_data))
    {
        i++;
    }

    if (id_to_find == database[i].id)
    {
        return i;
    }
    else
    {
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
    int idx_delete = find_data(database, n_data, id_to_delete);
    if (idx_delete != -1)
    {
        for (int i = idx_delete; i < n_data; i++)
        {
            database[i++] = database[i+1];
        }
        n_data--;
    }
    else {
        cout<<"Data tidak ditemukan";
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
    for ( i = 0; i<n_data; i++)
    {
        cout<<"Results: "<<endl;
        cout<<"Name      : "<<database[i].name<<endl;
        cout<<"ID        : "<<database[i].id<<endl;
        cout<<"Classroom : "<<database[i].kls<<endl;
        cout<<"Score     : "<<database[i].score<<endl;
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
    int i,j;
    for (i=0; i<=n_data; i++)
    {
        int j=i;
        d = database[i];
        while (j>0 && d.score > database[j-1].score)
        {
            database[j] = database[j-1];
            j--;
        }
        database[j] = d;
    }





    // ===========================
}

