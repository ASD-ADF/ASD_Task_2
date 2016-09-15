/**
    KELAS     : IF-39-01
    KELOMPOK  : 11
    NAMA(NIM) : Aditya Alif Nugraha 1301154183 , Rofif Irsyad F 1301150001 , Defa Eka Ardio 1301154281
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
