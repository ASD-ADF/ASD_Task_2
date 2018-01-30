#include "array_based.h"
/**
    CLASS      :
    NAME       :
    STUDENT ID :
**/


void add_new_data(mytype database[10], int &n_data, mytype d) {
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the end of database array
    */
    // ===========================
    // YOUR CODE HERE
    /**cin<<database.id[n_data++]<<endl;
    cin<<database.nama[n_data++]<<endl;
    cin<<database.nim[n_data++]<<endl;
    cin<<database.ip[n_data++]<<endl;
    */
    cout<<"hi"<<endl;




    // ===========================
}

void add_new_priority_data(mytype database[10], int &n_data, mytype d) {
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the front of database array
    */
    // ===========================
    // YOUR CODE HERE
/**    cin<<database.id[n_data--]<<endl;
    cin<<database.nama[n_data--]<<endl;
    cin<<database.nim[n_data--]<<endl;
    cin<<database.ip[n_data--]<<endl;
*/




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
/**    for(int i = 0; i<=n_data;i++){
        if (database.id[i] == database.id[id_to_find]){
            return id_to_find;
        }
    }
*/




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
    cout<<"your code here"<<endl;






    // ===========================
}

void view_data(mytype database[10], int n_data) {
    /**
     TODO:  loop through database
            and view all data inside database
    */
    // ===========================
    // YOUR CODE HERE
    int i = 0;
    while (i <= n_data){
        cout<<database.id[i]<<endl;
        cout<<database.nama[i]<<endl;
        cout<<database.nim[i]<<endl;
        cout<<database.ip[i]<<endl;
        i++;
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

