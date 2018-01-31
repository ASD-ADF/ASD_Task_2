#include "array_based.h"
/**
    CLASS      :IF-41-08
    NAME       :Muhammad fadhil ihsan
    STUDENT ID :1301170505
**/


void add_new_data(mytype database[10], int &n_data, mytype d) {
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the end of database array
    */
    // ===========================
    // YOUR CODE HERE
    database[n_data ++] = d;
    cout<<endl;




    // ===========================
}

void add_new_priority_data(mytype database[10], int &n_data, mytype d) {
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the front of database array
    */
    // ===========================
    // YOUR CODE HERE
    {
        for (int i = n_data; i > 0; i--)
    {
        database[i]=database[i-1];
    }
    cout << endl;
    database[0] = d;
    n_data++;
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
    {
        bool ketemu;
    ketemu = false;
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
    {
         for (int i = 0; i<n_data; i++)
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






}

void view_data(mytype database[10], int n_data) {
    /**
     TODO:  loop through database
            and view all data inside database
    */
    // ===========================
    // YOUR CODE HERE
    cout<<"your code here"<<endl;
     for (int i=0; i<n_data; i++)
    {
        cout << "Nama : " << database[i].nama<< endl;
        cout << "Id : " << database[i].id << endl;
        cout << "Kelas : " << database[i].kelas << endl;
        cout << "IP anda : " << database[i].ip << endl;
    }





    // ===========================
}

void sort_data(mytype database[10], int n_data) {
    /**
     TODO:  sort data inside database
    */
    mytype temp;
    // ===========================
    // YOUR CODE HERE
    int i, j;
    for (i = 0; i < n_data-1; i++)
        for (j = 0; j < n_data-i-1; j++)
            if (database[j].ip > database[j+1].ip)
            {
                temp = database[j+1];
                database[j+1] = database[j];
                database[j] = temp;
            }





    // ===========================
}

