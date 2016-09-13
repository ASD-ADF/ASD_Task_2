/**
    KELAS     : IF 39-06
    KELOMPOK  : 10
    NAMA(NIM) : [nama][nim] , [M. Fadhlan Supriadi][1301154202] , [HArdo Fernando Silalahi][1301154216] , [Dhevi Larasati][1301154454]
**/


#ifndef ORANG_H_INCLUDED
#define ORANG_H_INCLUDED

#include "tanggal.h"

struct orang {
    //=================================================
    // YOUR CODE STARTS HERE
    string nama, nama1, nama2;
    tanggal tgl_lahir, tgl_lahir1, tgl_lahir2;
    // YOUR CODE ENDS HERE
    //=================================================
};

orang create_orang(string nama, int tgl,int bln,int thn);
int hitung_umur(orang org);
void show_orang(orang org);


#endif // ORANG_H_INCLUDED
