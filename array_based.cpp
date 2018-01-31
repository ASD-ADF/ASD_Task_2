#include "array_based.h"
/**
    CLASS      : IF-41-08
    NAME       : FAREZA ADITYANTO
    STUDENT ID : 1301174228
**/



void add_new_data(mytype database[10], int &n_data, mytype d) {
    /**
    TODO:   add the new data d inside the database,
            the new data will be located at the end of database array
    */
    // ===========================
    // YOUR CODE HERE
    cout<<"your code here"<<endl;

    mytype history2;
    //-----------------------------
    create_data();
//a
    int indeks;
    int i=9;
    bool found=false;
    while((i>0)&&(!found)){
        if(d.ID==database[i].ID){
            found=true;
        }
        else{
            i--;
        }

    if(found==true){
        cout<<"Maaf, ID tersebut sudah ada. Silahkan input ID yang lain atau edit data"<<endl;
    }else {
        i=9;
        while(i>=5){
            if(database[9].ID==0){
                database[9]=d;
            }else{
                if(database[i--].ID==0){
                    history2=database[9];
                    database[i]=database[i++];
                    if(database[8].ID==history2.ID){
                        database[9]=d;
                    }
                }else{
                    i--;
                }
            }
        }
    }

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
    cout<<"your code here"<<endl;

    create_data();

    int indeks;
    //int i=0;
    bool found=false;
    while((n_data<10)&&(!found)){
        if(d.ID==database[n_data].ID){
            found=true;
        }
        else{
            n_data++;
        }
    }

    if(found==true){
        cout<<"Maaf, ID tersebut sudah ada. Silahkan input ID yang lain atau edit data"<<endl;
    }else{
        if(database[0].ID==0){
        database[0]=d;
        }else {
            int i=0;
            mytype history;
            while(i<=4){
              if(database[i++].ID==0){
                history=database[0];
                database[i]=database[i-1];
                if(database[i].ID==d.ID){
                    database[0]=d;
                }
            }else{
                i++;}
        }
      }
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
    cout<<"your code here"<<endl;

    cout<<"Masukkan id yang ingin dicari = ";
    cin>>id_to_find;
    cout<<endl<<endl;

    int indeks;
    //n_data=0;
    bool found=false;
    while((n_data<10)&&(!found)){
        if(id_to_find==database[n_data].ID){
            indeks=n_data;
            found=true;
            n_data++;
        }
        else{
            n_data++;
        }
    }
    if(found==true){
        return indeks;
    }
    else{
        cout<<"ID tidak ditemukan";
        return -1;
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
    cout<<"your code here"<<endl;

    cout<<"Masukkan id yang ingin dihapus = ";
    cin>>id_to_delete;
    cout<<endl<<endl;

    n_data=0;
    bool found=false;
    while((n_data<10)&&(!found)){
        if(id_to_delete==database[n_data].ID){
          database[n_data].ID=0;
            if(database[n_data].ID==0)
            {
                found=true;
                if(n_data>0&&n_data<10) {
                    while(n_data<10) {
                        database[n_data++]=database[n_data];
                    }
                }
            }
        else{
            n_data++;
        }
    }
    if(found==true){
        cout<<"ID berhasil dihapus!!";
    }
    else{
        cout<<"ID tidak berhasil ditemukan dan dihapus";
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


    cout<<"Daftar ID tersimpan : "<<endl;
    for(n_data=0;n_data<10;++n_data){
        cout<<". ID            = "<<database[n_data].ID<<endl;
        cout<<"   Nomor hp ortu = "<<database[n_data].hp1<<endl;
        cout<<"   Alamat rumah  = "<<database[n_data].rumah<<endl;
        cout<<"   IPK           = "<<database[n_data].IPK<<endl;
        cout<<"---------------------------------------------------------------------"<<endl;
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

    int i,imin;

    for(n_data=0;n_data<9;n_data++){
        imin=n_data;
        for (i=n_data+1;i<10;i++){
            if(database[i].IPK<database[imin].IPK){
                imin=i;
            }
        }
        d=database[n_data];
        database[n_data]=database[imin];
        database[imin]=d;
    }

    // ===========================
}

