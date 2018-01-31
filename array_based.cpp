#include "array_based.h"
/**
    CLASS      : IF 41-08
    NAME       : Muhammad Khaifa Gifari
    STUDENT ID : 1301170382
**/


void add_new_data(mytype database[10], int &n_data, mytype d)
{
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the end of database array
    */
    // ===========================
    // YOUR CODE HERE
    cout<<endl;
    database[n_data] = d;
    cout<<endl;
    n_data++;


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
    cout<<endl;
    for (int i= n_data; i > 0; i--)
    {
        database[i]=database[i-1];

    }
    cout<<endl;
    database[0] = d;
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
    cout<<endl;
    bool ketemu;
    ketemu=false;
    for (int i = 0; i < n_data; i++)
    {
        if (database[i].id==id_to_find)
            {
                return i;
                ketemu = true;
            }
    }

if (!ketemu)
{
    return -1;
}

// ===========================
}

void remove_data(mytype database[10], int &n_data, int id_to_delete)
{
    /**
    TODO:   find a data inside the database based on its id
            then remove such found data from database
    */
    // ===========================
    // YOUR CODE HERE
    cout<<endl;
    for (int i=0; i<n_data; i++)
    {
        if (database[i].id==id_to_delete)
        {
            for (int j = i; j < n_data ; j++)
            {
                database[j] = database[j+1];
            }
        }
    }

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
    cout<<endl;
    for (int i=0; i<n_data; i++)
    {
        cout<<"ID       : " <<database[i].id << endl;
        cout<<"Nama     : " <<database[i].nama << endl;
        cout<<"NIM      : " <<database[i].nim << endl;
        cout<<"Nilai    : " <<database[i].nilai << endl;
    }
    // ===========================
}

void sort_data(mytype database[10], int n_data)
{
    /**
     TODO:  sort data inside database
    */
    mytype temp;
    // ===========================
    // YOUR CODE HERE
    cout<<endl;
    int i, j;
    for (i = 0; i < n_data-1; i++)
        for (j = 0; j < n_data-i-1; j++)
            if (database[j].nilai > database[j+1].nilai)
            {
                temp = database[j+1];
                database[j+1]=database[j];
                database[j] = temp;
            }
    // ===========================
}

