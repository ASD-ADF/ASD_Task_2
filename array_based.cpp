#include "array_based.h"
/**
    CLASS      : IF-41-08
    NAME       : Muchtarom Yahya
    STUDENT ID : 1301174052
**/


void add_new_data(mytype database[10], int &n_data, mytype d) {
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the end of database array
    */
    // ===========================
    // YOUR CODE HERE
    int i=0;
    bool t=false;
    while (i<=n_data) {
        if(database[i].ID==d.ID) {
                cout<<"DILARANG INPUT DENGAN ID SAMA !!!"<<endl;
                t=true;
        }
        i++;
    }
    if (t==false) {
    database[n_data]=d;
    n_data++;
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
     int x=0;
    int i=0;
    int j=0;
    bool t=false;
    while (j<=n_data) {
        if(database[j].ID==d.ID) {
                cout<<"DILARANG INPUT DENGAN KODE YANG SAMA"<<endl;
                t=true;
        }
        j++;
    }
    if (t==false) {
        database[n_data]=d;
        int n=n_data;
        mytype temp[10];
        for (n;n>i;n--){
            temp[x]=database[n];
            database[n]=database[n-1];
            database[n-1]=temp[x];
        }
        while (database[i].ID!=0) {
            i++;
        }
        n_data=i;
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
     for (int i=0;i<n_data;i++) {
        if (database[i].ID==id_to_find) {
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
    while ((i>=0) && (database[i].ID!=id_to_delete)) {
        i++;
    }

    if ((i>=0) && (i<n_data)) {
        while (i<n_data) {
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
    cout<<"your code here"<<endl;





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

