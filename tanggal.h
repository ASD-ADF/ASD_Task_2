/**
    KELAS     : IF 40-02
    KELOMPOK  : 8
    NAMA(NIM) : Ayu Wulandari (1301164104), Andaresta Fauzan(1301164189), Mahendrawan Idris (1301164461), M Hanur Yoga (1301164153)
**/

#ifndef TANGGAL_H_INCLUDED
#define TANGGAL_H_INCLUDED

#include <string>
#include <iostream>
using namespace std;

struct tanggal {
    //=================================================
    // YOUR CODE STARTS HERE
    int dd;
    int mm;
    int yy;

    // YOUR CODE ENDS HERE
    //=================================================
};

tanggal create_tanggal(int dd,int mm,int yy);
bool cek_tanggal(tanggal tgl);
void tampil_tanggal(tanggal tgl);
int selisih_hari(tanggal tgl1, tanggal tgl2);

#endif // TANGGAL_H_INCLUDED
