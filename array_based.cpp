#include "array_based.h"
/**
    CLASS      :
    NAME       :
    STUDENT ID :
**/


void add_new_data(mytype database[10], int &n_data, mytype d)
{
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the end of database array
    */
    // ===========================
    // YOUR CODE HERE
    int i;
    bool duplicate = false;
    for(i=0; i<=n_data; i++)
    {
        if(database[i].stdntid==d.stdntid)
        {
            cout<<"You can't insert data with same ID!"<<endl<<endl;
            duplicate = true;
        }
    }

    if(duplicate==false)
    {
        database[n_data].stdntid = d.stdntid;
        database[n_data].stdntname = d.stdntname;
        database[n_data].stdntclass = d.stdntclass;
        database[n_data].stdntgpa = d.stdntgpa;
        n_data++;
    }
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
    mytype temp;
    mytype prev;
    int i;

    prev.stdntid = database[0].stdntid;
    prev.stdntname = database[0].stdntname;
    prev.stdntclass = database[0].stdntclass;
    prev.stdntgpa = database[0].stdntgpa;

    for(i=1; i<=n_data; i++)
    {
        temp.stdntid = database[i].stdntid;
        temp.stdntname = database[i].stdntname;
        temp.stdntclass = database[i].stdntclass;
        temp.stdntgpa = database[i].stdntgpa;

        database[i].stdntid = prev.stdntid;
        database[i].stdntname = prev.stdntname;
        database[i].stdntclass = prev.stdntclass;
        database[i].stdntgpa = prev.stdntgpa;

        prev.stdntid = temp.stdntid;
        prev.stdntname = temp.stdntname;
        prev.stdntclass = temp.stdntclass;
        prev.stdntgpa = temp.stdntgpa;
    }

    database[0].stdntid = d.stdntid;
    database[0].stdntname = d.stdntname;
    database[0].stdntclass = d.stdntclass;
    database[0].stdntgpa = d.stdntgpa;
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
    int i = 0;
    for(i=0; i<=n_data; i++)
    {
        if(database[i].stdntid==id_to_find)
        {
            return i;
        }
    }
    // ===========================
    return -1;
}

void remove_data(mytype database[10], int &n_data, int id_to_delete)
{
    /**
    TODO:   find a data inside the database based on its id
            then remove such found data from database
    */
    // ===========================
    // YOUR CODE HERE
    int idx_to_delete, i;

    idx_to_delete = find_data(database,  n_data,  id_to_delete);
    if(idx_to_delete != -1)
    {
        for(i=idx_to_delete; i<=n_data; i++)
        {
            database[i].stdntid = database[i+1].stdntid;
            database[i].stdntname = database[i+1].stdntname;
            database[i].stdntclass = database[i+1].stdntclass;
            database[i].stdntgpa = database[i+1].stdntgpa;
        }
        n_data--;
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
    int i;
    for(i=0; i<n_data; i++)
    {
        cout<<"Student ID    #"<<i<<" : "<<database[i].stdntid<<endl;
        cout<<"Student Name  #"<<i<<" : "<<database[i].stdntname<<endl;
        cout<<"Student Class #"<<i<<" : "<<database[i].stdntclass<<endl;
        cout<<"Student GPA   #"<<i<<" : "<<database[i].stdntgpa<<endl<<endl;
    }
    // ===========================
}

void sort_data(mytype database[10], int n_data)
{
    /**
     TODO:  sort data inside database
    */
    mytype d;
    int i, j;
    // ===========================
    // YOUR CODE HERE
    for (i=2; i<=n_data; i++)
    {
        d.stdntid = database[i].stdntid;
        d.stdntname = database[i].stdntname;
        d.stdntclass = database[i].stdntclass;
        d.stdntgpa = database[i].stdntgpa;
        j=i;
        while((j>0) && (d.stdntgpa>database[j-1].stdntgpa))
        {
            database[j].stdntid = database[j-1].stdntid;
            database[j].stdntname = database[j-1].stdntname;
            database[j].stdntclass = database[j-1].stdntclass;
            database[j].stdntgpa = database[j-1].stdntgpa;
            j--;
        }
        database[j].stdntid = d.stdntid;
        database[j].stdntname = d.stdntname;
        database[j].stdntclass = d.stdntclass;
        database[j].stdntgpa = d.stdntgpa;
    }
    // ===========================
}
