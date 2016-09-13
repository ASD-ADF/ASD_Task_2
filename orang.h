/**
    KELAS     :IF-39-06
    KELOMPOK  : 5
    NAMA(NIM) : [A.A Gde Ratu Pemayun][1301154412] , [KM Alfarabi][1301150076] , [Gisela Anggita Ashianti][1301154468] , [fiqhi agung][1301154132]
**/


#ifndef ORANG_H_INCLUDED
#define ORANG_H_INCLUDED

#include "tanggal.h"

struct orang {
    string nama;
    tanggal tgl_lahir;
};

orang create_orang(string nama, int tgl,int bln,int thn);
int hitung_umur(orang org);
void show_orang(orang org);


#endif // ORANG_H_INCLUDED
