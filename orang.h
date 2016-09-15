/**
    KELAS     : IF-39-01
    KELOMPOK  : 3
    NAMA(NIM) : [Sugianto][1301154407] , [Abram][1301154169] , [Elza Fitria][1301154533] , [Muhammad Turmudzi][1301154667]
**/


#ifndef ORANG_H_INCLUDED
#define ORANG_H_INCLUDED

#include "tanggal.h"

struct orang {
    string nama = " ";
    tanggal tgl_orang;
};

orang create_orang(string nama, int tgl,int bln,int thn);
int hitung_umur(orang org);
void show_orang(orang org);


#endif // ORANG_H_INCLUDED
