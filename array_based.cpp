#include "array_based.h"
/**
    CLASS      : IF 41 - 08
    NAME       : Justisio Yan Prawira Adam
    STUDENT ID : 1301174597
**/


void add_new_data(mytype database[10], int &n_data, mytype d)
{
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the end of database array
    */
    // ===========================
    // YOUR CODE HERE
    cout<<"your code here"<<endl;
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
    cout<<"your code here"<<endl;

    int i;
    mytype temp;
    mytype prev = database[0];

    for (i = 0; i <= n_data; i++)
    {
        temp = database[i];
        database[i] = prev;
        prev = temp;
    }

    database[0].id = d.id;
    database[0].nim = d.nim;
    database[0].nama = d.nama;
    database[0].ipk = d.ipk;
    n_data++;

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
    cout<<"your code here"<<endl;
    int i;
    for (i = 0; i < 11 ; i++)
    {
        if (id_to_find == database[i].id)
        {
            cout<<"Data ditemukan di indeks ke-"<<i<<endl;
            break;
        }
    }
    // ===========================
    return i;
}

void remove_data(mytype database[10], int &n_data, int id_to_delete)
{
    /**
    TODO:   find a data inside the database based on its id
            then remove such found data from database
    */
    // ===========================
    // YOUR CODE HERE
    cout<<"your code here"<<endl;
    int idx, i;
    mytype temp;

    i = find_data(database, n_data, id_to_delete);
    if (i != -1)
    {
        for (idx = i; idx < n_data; idx++)
        {
            mytype temp = database[idx+1];
            database[idx] = temp;
        }
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
    cout<<"your code here"<<endl;
    int i;
    for (i = 0; i < 11; i++)
    {
        cout<<"ID   : "<<database[i].id<<endl;
        cout<<"Nama : "<<database[i].nama<<endl;
        cout<<"NIM  : "<<database[i].nim<<endl;
        cout<<"IPK  : "<<database[i].ipk<<endl;
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
    cout<<"your code here"<<endl;
    int i,j;
    for (i = 0; i <= n_data; i++)
    {
        d = database[i];
        int j = i;
        while(j > 0 && d.ipk > database[j - 1].ipk)
        {
            database[j] = database[j - 1];
            j--;
        }
        database[j] = d;
    }
    // ===========================
}

