#include "array_based.h"
/**
    CLASS      : IF-41-08
    NAME       : YOGA AJITAMA
    STUDENT ID : 1301170471
**/


void add_new_data(mytype database[10], int &n_data, mytype d)
{
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the end of database array
    */
    // ===========================
    // YOUR CODE HERE
    database[n_data++] = d;
    // ===========================
}

void add_new_priority_data(mytype database[10], int &n_data, mytype d)
{
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the front of database array
    */
    // ===========================
    // YOUR CODE HERE
    int jmldata = n_data++;
    while (jmldata>=0) {
        database[jmldata] = database[jmldata-1];
        jmldata--;
    }
    database[0] = d;
    // ===========================
}

int find_data(mytype database[10], int n_data, int id_to_find)
{
    /**
    TODO:   find a data inside the database based on its id
            the function will return the index of the searched data
            the function will return -1 if such data is not found
    */
    // ===========================
    // YOUR CODE HERE
    int i = 0;
    while (i<=n_data && database[i].id != id_to_find) {
        i++;
    }
    if (i<=n_data) {
        return i;
    }

    // ===========================
    return -1;
}

void remove_data(mytype database[10], int &n_data, int id_to_delete)
{
    /**
    TODO:   find a data inside the database based on its id
            then remove such found data from database
    */
    // ===========================
    // YOUR CODE HERE
    int i = find_data(database, n_data, id_to_delete);
    if (i!=-1) {
        for(int j = i; j <= n_data; j++) {
            database[j] = database[j-1];
        }
    }
    else {
        cout<<"What the hell is that?"<<endl;
    }
    n_data--;

    // ===========================
}

void view_data(mytype database[10], int n_data)
{
    /**
     TODO:  loop through database
            and view all data inside database
    */
    // ===========================
    // YOUR CODE HERE
    int i;
    for (i=0; i<n_data; i++) {
        cout<<"View data result: "<<endl;
        cout<<"Name : "<<database[i].name<<endl;
        cout<<"ID   : "<<database[i].id<<endl;
        cout<<"Class: "<<database[i].cls<<endl;
        cout<<"Score: "<<database[i].score<<endl;
        cout<<endl;
    }

    // ===========================
}

void sort_data(mytype database[10], int n_data)
{
    /**
     TODO:  sort data inside database
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    int i,j;
    for (i=1; i<=n_data; i++) {
        d = database[i];
        int j=i;
        while(j>0 && d.score > database[j-1].score) {
            database[j] = database[j-1];
            j--;
        }
        database[j] = d;
    }
        // ===========================
}
