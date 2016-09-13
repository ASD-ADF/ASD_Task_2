/**
    KELAS     : IF 39-06
    KELOMPOK  : 1
    NAMA(NIM) : [Muhammad Iqbal][13401154300] , [Vatana Rianti Aldefi][1301154566] , [Ibrahim Bimo Wicaksono][1301154356] , [Rian Pebi][1301154426]
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
