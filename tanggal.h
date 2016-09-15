/**
    KELAS     : IF-39-01
    KELOMPOK  : 11
    NAMA(NIM) : Aditya Alif Nugraha 1301154183 , Rofif Irsyad F 1301150001 , Defa Eka Ardio 1301154281
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
void show_tanggal(tanggal tgl);
void edit_tanggal(tanggal &tgl, int dd, int mm, int yy);
int selisih_hari(tanggal tgl1, tanggal tgl2);
int bulankehari(int A, int B);


#endif // TANGGAL_H_INCLUDED
