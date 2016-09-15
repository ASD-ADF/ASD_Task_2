/**
    KELAS     : IF 39-01
    KELOMPOK  : 9
    NAMA(NIM) : [Moh. Abdul Haris Angio][nim] , [Nabil][nim] , [Nadine Azhalia][1301154519] , [Ressa Firmansyah Fatah][1301154105]
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
