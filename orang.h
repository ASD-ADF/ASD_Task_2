/**
    KELAS     : IF 39 01
    KELOMPOK  : 6
    NAMA(NIM) : [Rd.Havez Cahyan F.][1301154197] , [Rifell Noerfiansyah][1301150085] , [Rd. Muhammad Ichsan Al Rasyid][1301154295] , [Salma Assyifa][1301154505]
**/


#ifndef ORANG_H_INCLUDED
#define ORANG_H_INCLUDED

#include "tanggal.h"

struct orang {
    //=================================================
    string nama;
    tanggal tgl_lahir ;
    //=================================================
};

orang create_orang(string nama, int tgl,int bln,int thn);
int hitung_umur(orang org);
void show_orang(orang org);


#endif // ORANG_H_INCLUDED
