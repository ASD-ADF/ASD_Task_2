/**
    KELAS     : IF 39-06
    KELOMPOK  : 2
    NAMA(NIM) : [Alfin Pratama S][1301154342] , [Hafizh][1301154272] , [Bella][1301154637] , [Amin][130115]
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
