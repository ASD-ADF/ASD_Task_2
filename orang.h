/**
    KELAS     : IF 39-01
    KELOMPOK  : 11
    NAMA(NIM) : [Firhan Wibianto][1301154099] , [Egriano ][13011540043] , [Bintang Aryo Dharmawan][1301140010] , [Debora N Silaban][13011540575]
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
