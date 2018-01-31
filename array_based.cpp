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
for (int i = n_data; i>= 0; i--)
{
    database[i] = database[i-1];
}
 database[0] = d;
 n_data++;
}

int find_data(mytype database[10], int n_data, int id_to_find) {
    /**
    TODO:   find a data inside the database based on its id
            the function will return the index of the searched data
            the function will return -1 if such data is not found
    */
    int i = 0;
    while ((id_to_find != database[i].id) && (i<n_data))
    {
        i++;
    }
    if (id_to_find == database[i].id)
    {
        return i;
    }
    else
    {
        return -1;
    }

}

void remove_data(mytype database[10], int &n_data, int id_to_delete) {
    /**
    TODO:   find a data inside the database based on its id
            then remove such found data from database
    */
  int idx_delete = find_data(database, n_data, id_to_delete);
  if (idx_delete != -1)
  {
      for (int i = idx_delete; i< n_data; i++)
      {
          database[i++] = database[i+1];
      }
      n_data--;
  }
      else
      {
          cout<<"Data Not Found"<<endl;
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
    for(i=0; i<= n_data; i++)
    {
        d = database[i];
        int j=i;
        while (j>1 && d.nilai > database[j-1].nilai)
        {
            database[j] = database[j-1];
            j--;
        }
        database[j] = d;
    }
}

