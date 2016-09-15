/**
    KELAS     : IF 39-01
    KELOMPOK  : - (Maaf kami lupa pak)
    NAMA(NIM) : [Raden Rizky Falih P][1301154211] , [Dwiferdio Seagal P][1301154323] , [Dhevin Andrean Akbar][1301150015] , [Amelia Anis][1301154547]
**/


#ifndef ORANG_H_INCLUDED
#define ORANG_H_INCLUDED

#include "tanggal.h"

struct orang
{
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
