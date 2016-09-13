/**
    KELAS     : IF 39-06
    KELOMPOK  : 7
    NAMA(NIM) : [Adam Tua Rahman][1301154286] , [Rita Ajeng Nugraheni][1301154524] , [Ridho Dwi Pangestu][1301140110]
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
