#include "array_based.h"
#include <iostream>
/**
    CLASS      : IF 40 INT
    NAME       : Purnama Sari Nur Mellinda
    STUDENT ID : 1301160541
**/


void add_new_data(mytype database[10], int &n_data, mytype d) {
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the end of database array
    */
    int i = n_data;
    if(database[n_data].id==0 && n_data<11){
        database[n_data] = d;
        n_data++;
    }else {
        add_new_data(database,n_data,d);
    }
}

void add_new_priority_data(mytype database[10], int &n_data, mytype d) {
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the front of database array
    */
    int i=n_data;
    if(database[0].id!=0){
        n_data++;
        while(i>=0){
            database[i+1]=database[i];
            i--;
        }
        database[0]=d;
    }else{
        add_new_data(database,n_data,d);
    }
}

int find_data(mytype database[10], int n_data, int id_to_find) {
    /**
    TODO:   find a data inside the database based on its id
            the function will return the index of the searched data
            the function will return -1 if such data is not found
    */
    int j=0;
    int found=-1;
    while ((j<n_data)&&(found==-1)) {
        if(database[j].id==id_to_find){
            found = 1;
        }else{
            j++;
        }
    }
    return found;
}

void remove_data(mytype database[10], int &n_data, int id_to_delete) {
    /**
    TODO:   find a data inside the database based on its id
            then remove such found data from database
    */
    int target = find_data(database,n_data,id_to_delete);
    if(target!=-1){
        int i = target;
        for(i;i<n_data;i++){
            database[i]=database[i+1];
        }
        n_data--;
    }else {
        cout<<"It doesn't exist"<<endl;
    }
}

void view_data(mytype database[10], int n_data) {
    /**
     TODO:  loop through database
            and view all data inside database
    */
    int a =0;
    for (a;a<n_data;a++){
        cout<<"Name: "<<database[a].name<<endl;
        cout<<"Class: "<<database[a].clas<<endl;
        cout<<"ID: "<<database[a].id<<endl;
        cout<<"Score: "<<database[a].score<<endl;
        cout<<endl;
    }
}

void sort_data(mytype database[10], int n_data) {
    /**-
     TODO:  sort data inside database
    */
    mytype temp;
    // ===========================
    // YOUR CODE HERE
    int m = 0;
    int n = 1;
    if(database[m].id != 0){
        for (m=0;m<n_data-1;m++){
            for(n=m+1;n<n_data;n++){
                if(database[m].score>database[n].score){
                    temp = database[m];
                    database[m]=database[n];
                    database[n]=temp;
                }
            }
        }
    }else{
        cout<<"Database is Empty"<<endl;
    }

    // ===========================
}

