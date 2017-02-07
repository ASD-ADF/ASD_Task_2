/**
    KELAS     : IF-40-02
    KELOMPOK  : 1 (Satu)
    NAMA(NIM) : Fuad Zauqi Nur (1301164392), Indah Ayu Nur Fauziah (1301164004), Refin Heryanto (1301164324), Mohammad Izzauhaq Huda (1301160565)
**/

#ifndef TANGGAL_H_INCLUDED
#define TANGGAL_H_INCLUDED

#include <string>
#include <iostream>
using namespace std;

struct tanggal {
    //=================================================
    // YOUR CODE STARTS HERE
    int dd, mm, yy;
    // YOUR CODE ENDS HERE
    //=================================================
};

tanggal create_tanggal(int dd,int mm,int yy);
bool cek_tanggal(tanggal tgl);
void tampil_tanggal(tanggal tgl);
int selisih_hari(tanggal tgl1, tanggal tgl2);

#endif // TANGGAL_H_INCLUDED
