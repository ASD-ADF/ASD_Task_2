#include "array_based.h"
/**
    CLASS      : IF-41-08
    NAME       : Arbi Nourman Baruni
    STUDENT ID : 1301174030
**/


void add_new_data(mytype database[10], int &n_data, mytype d) {
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the end of database array
    */
    // ===========================
    // YOUR CODE HERE
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
    int x=0;
    int i=0;
    database[n_data]=d;
    int n=n_data;
    mytype temp[10];
    for (n;n>i;n--){
        temp[x]=database[n];
        database[n]=database[n-1];
        database[n-1]=temp[x];
    }
    while (database[i].id!=0){
        i++;
    }
    n_data=i;





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
    for (int i=0;i<n_data;i++){
        if (database[i].id==id_to_find){
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
    int i=0;
    while ((i>=0) && (database[i].ID!=id_to_delete))
    {
        i++;
    }

    if ((i>=0) && (i<n_data))
    {
        while (i<n_data)
        {
            database[i++]=database[i];
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
    int i=0;
    while(i<n_data){
        cout<<"NIM      : "<<database[i].id<<endl;
        cout<<"Nama     : "<<database[i].name<<endl;
        cout<<"Kelas    : "<<database[i].kel<<endl;
        cout<<"Nilai    : "<<database[i].nilai<<endl;
        i++;
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
    for (int i=n_data-1; i>=1; i--)
    {
        for (int j=1; j<=i; j++)
        {
            if (database[j-1].ID>database[j].ID)
            {
                d[1]=database[j-1];
                database[j-1]=database[j];
                database[j]=d[1];
            }
        }
    }






    // ===========================
}

