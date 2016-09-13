/**
    KELAS     : IF 39-06
    KELOMPOK  : 6
    NAMA(NIM) : [surya fachri idris nst][1301154230] , [sarah fauziah l][1301154552] , [abdul rahman safari][1301144380] , [nama][nim]
**/


#ifndef ORANG_H_INCLUDED
#define ORANG_H_INCLUDED

#include "tanggal.h"

struct orang {
    //=================================================
    // YOUR CODE STARTS HERE
        string nama;
        tanggal tgl_lahir;

    // YOUR CODE ENDS HERE
    //=================================================
};

orang create_orang(string nama, int tgl,int bln,int thn);
int hitung_umur(orang org);
void show_orang(orang org);


#endif // ORANG_H_INCLUDED
