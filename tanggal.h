/**
    KELAS     : IF 39 01
    KELOMPOK  : 6
    NAMA(NIM) : [Rd.Havez Cahyan F.][1301154197] , [Rifell Noerfiansyah][1301150085] , [Rd. Muhammad Ichsan Al Rasyid][1301154295] , [Salma Assyifa][1301154505]
**/


#ifndef TANGGAL_H_INCLUDED
#define TANGGAL_H_INCLUDED

#include <string>
#include <iostream>
using namespace std;

struct tanggal {
    //=================================================
    int tgl,bln,thn ;
    //=================================================
};

tanggal create_tanggal(int dd,int mm,int yy);
bool cek_tanggal(tanggal tgl);
void show_tanggal(tanggal tgl);
void edit_tanggal(tanggal &tgl, int dd, int mm, int yy);
int selisih_hari(tanggal tgl1, tanggal tgl2);

#endif // TANGGAL_H_INCLUDED
