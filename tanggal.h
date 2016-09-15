/**
    KELAS     : IF-39-01
    KELOMPOK  : 3
    NAMA(NIM) : [Sugianto][1301154407] , [Abram][1301154169] , [Elza Fitria][1301154533] , [Muhammad Turmudzi][1301154667]
**/


#ifndef TANGGAL_H_INCLUDED
#define TANGGAL_H_INCLUDED

#include <string>
#include <iostream>
using namespace std;

struct tanggal {
    int dd,mm,yy;
};

tanggal create_tanggal(int dd,int mm,int yy);
bool cek_tanggal(tanggal tgl);
void show_tanggal(tanggal tgl);
void edit_tanggal(tanggal &tgl, int dd, int mm, int yy);
int selisih_hari(tanggal tgl1, tanggal tgl2);

#endif // TANGGAL_H_INCLUDED
