#include "array_based.h"
/**
    CLASS      : IF-41-08
    NAME       : IRBAH SALSABILA
    STUDENT ID : 1301174021
**/


void add_new_data(mytype database[10], int &n_data, mytype d) {
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the end of database array
    */
 database[n_data++] = d;
}

void add_new_priority_data(mytype database[10], int &n_data, mytype d) {
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the front of database array
    */
 int ndata;
 for (ndata= n_data; ndata>=0; ndata--)
 {
     database[ndata+1] = database[ndata];
 }
 database[0] = d;
}

int find_data(mytype database[10], int n_data, int id_to_find) {
    /**
    TODO:   find a data inside the database based on its id
            the function will return the index of the searched data
            the function will return -1 if such data is not found
    */
    int i=0;
    while ( i<= n_data)
    {
        if(database[i].id == id_to_find)
        {
            return i;
        }
        i++;
    }
    return -1;
}

void remove_data(mytype database[10], int &n_data, int id_to_delete) {
    /**
    TODO:   find a data inside the database based on its id
            then remove such found data from database
    */
    int i=0;
    int x;
    while ( i<= n_data)
    {
        if(database[i].id == id_to_delete)
        {
             x=i;
        }
        i++;
    }

 if(x>0&&x<n_data)
 {
     while(x<n_data)
     {
         database[x++] = database[x];
     }
     n_data--;
 }
}

void view_data(mytype database[10], int n_data) {
    /**
     TODO:  loop through database
            and view all data inside database
    */
    int i;
    for (i=0; i<= n_data; i++)
    {
        cout<<"Pencarian Data Mahasiswa :  "<<endl;
        cout<<"Nama  : "<<database[i].nama<<endl;
        cout<<"Kelas : "<<database[i].kelas<<endl;
        cout<<"Nim   : "<<database[i].id<<endl;
        cout<<"Nilai : "<<database[i].nilai<<endl;

    }
}

void sort_data(mytype database[10], int n_data) {
    /**
     TODO:  sort data inside database
    */
    mytype d;
    int i,j;
    for(i=1; i<= n_data; i++)
    {
        d = database[i];
        int j=i;
        while (j>0 && d.nilai > database[j-1].nilai)
        {
            database[j] = database[j-1];
            j--;
        }
        database[j] = d;
    }
}

