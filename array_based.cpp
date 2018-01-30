#include "array_based.h"
/**
    CLASS      : IF-41-08
    NAME       : Supra Yogi
    STUDENT ID : 1301174264
**/

int i=0;
void add_new_data(mytype database[10], int &n_data, mytype d) {
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the end of database array
    */

    database[n_data]=d;
    n_data++;




    // ===========================
}

void add_new_priority_data(mytype database[10], int &n_data, mytype d) {
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the front of database array
    */
    // ===========================
    // YOUR CODE HERE
    int i;
    int j=0;
    for (i=9;i>0;i--)
    {
        j=i+1;
        database[j]=database[i];
    }
    database[0]=d;
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
    int i;
    for (i=0;i<10;i++)
    {
        if (database[i].id==id_to_find)
        {
            cout<<"index = "<<i<<endl;
            break;
        }
        else
        {
            cout<<"index = "<<'-1'<<endl;
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
    int i;
    int n = sizeof(n_data)/sizeof(database[0]);
    for (i=0;i=n_data;i++)
    {
        if (database[i].id==id_to_delete)
        {
            break;
        }
    }
    if(i>0&&i<n)
    {
        while(i<n)
        {
            database[i++] = database[i];
        }
        n--;



    // ===========================
}
}
void view_data(mytype database[10], int n_data) {
    /**
     TODO:  loop through database
            and view all data inside database
    */
    // ===========================
    for (i=0;i<n_data;i++)
    {
        cout<<"ID : "<<database[i].id<<endl;
        cout<<"Nama : "<<database[i].nama<<endl;
        cout<<"NIM : "<<database[i].nim<<endl;

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
    cout<<"your code here"<<endl;





    // ===========================
}

