#include "array_based.h"
/**
    CLASS      : IF-41-08
    NAME       : Nuurshadieq
    STUDENT ID : 1301171087
**/

bool same_ID(mytype database[10], int n_data, mytype d)
{
    for (int i = 0; i < n_data; i++)
    {
        if ((database[i].id == d.id))
        {
            return true;
        }
    }
    return false;
}

void add_new_data(mytype database[10], int &n_data, mytype d) {
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the end of database array
    */
    // ===========================
    // YOUR CODE HERE
    if (same_ID(database, n_data, d) == true)
    {
        cout<<"Sorry that id is already taken"<<endl;
    }
    else
    {
        database[n_data] = d;
        n_data++;
    }
    cout<<endl;




    // ===========================
}

void add_new_priority_data(mytype database[10], int &n_data, mytype d) {
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the front of database array
    */
    // ===========================
    // YOUR CODE HERE 3
    if (same_ID(database, n_data, d) == true)
    {
        cout<<"Sorry that id is already taken"<<endl;
    }
    else
    {
        for (int i = n_data; i > 0; i--)
        {
            database[i] = database[i-1];
        }

        database[0] = d;
        n_data++;
    }
    cout<<endl;




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
    for (int i = 0; i < n_data; i++)
    {
        if (database[i].id == id_to_find)
        {
            return i;
        }
    }
    cout<<endl;





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
    for (int i = 0; i < n_data; i++)
    {
        if (database[i].id == id_to_delete)
        {
            for (int j = i+1; j < n_data; j++)
            {
                database[j-1] = database[j] ;
            }
            n_data--;
        }
    }
    cout<<endl;



    // ===========================
}

void view_data(mytype database[10], int n_data) {
    /**
     TODO:  loop through database
            and view all data inside database
    */
    // ===========================
    // YOUR CODE HERE
    for (int i = 0; i < n_data; i++)
    {
        cout<<"Data ke-"<<i+1<<endl;
        cout<<"Index: "<<database[i].id<<endl;
        cout<<"Nama: "<<database[i].name<<endl;
        cout<<"NIM: "<<database[i].nim<<endl;
        cout<<"Nilai: "<<database[i].nilai<<endl;
        cout<<"--------------------"<<endl;
    }
    cout<<endl;





    // ===========================
}

void sort_data(mytype database[10], int n_data) {
    /**
     TODO:  sort data inside database
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    for (int i = 1; i < n_data; i++)
    {
        d = database[i];

        int j = i -1;
        while (j >= 0 && database[j].nilai > d.nilai)
        {
            database[j+1] = database[j];
            j--;
        }
        database[j+1] = d;
    }
    cout<<endl;




    // ===========================
}

