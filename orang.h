/**
    KELAS     : IF-39-06
    KELOMPOK  :
    NAMA(NIM) : [Faishal Rachman][1301154160] , [nama][nim] , [nama][nim] , [nama][nim]
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
