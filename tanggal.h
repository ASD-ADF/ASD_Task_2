/**
    KELAS     :IF-39-06
    KELOMPOK  : 5
    NAMA(NIM) : [A.A Gde Ratu Pemayun][1301154412] , [KM Alfarabi][1301150076] , [Gisela Anggita Ashianti][1301154468] , [fiqhi agung][1301154132]
**/


#ifndef TANGGAL_H_INCLUDED
#define TANGGAL_H_INCLUDED

#include <string>
#include <iostream>
using namespace std;

struct tanggal {
    int tgl, bln , thn;

};

tanggal create_tanggal(int dd,int mm,int yy);
bool cek_tanggal(tanggal tgl);
void show_tanggal(tanggal tgl);
void edit_tanggal(tanggal &tgl, int dd, int mm, int yy);
int selisih_hari(tanggal tgl1, tanggal tgl2);

#endif // TANGGAL_H_INCLUDED
