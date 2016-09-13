/**
    KELAS     :IF 39-06
    KELOMPOK  :7
    NAMA(NIM) : [RITA AJENG NUGRAHENI][1301154524] , [ADAM TUA RAHMAN S][1301154286] , [RIDHO DWI PANGESTU][1301140110 ] , [nama][nim]
**/


#ifndef ORANG_H_INCLUDED
#define ORANG_H_INCLUDED

#include "tanggal.h"

struct orang {
    //=================================================
    // YOUR CODE STARTS HERE
     string nama ;
     tanggal tgl_lahir;

    // YOUR CODE ENDS HERE
    //=================================================
};

orang create_orang(string nama, int tgl,int bln,int thn);
int hitung_umur(orang org);
void show_orang(orang org);


#endif // ORANG_H_INCLUDED
