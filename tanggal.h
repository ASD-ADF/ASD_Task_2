/**
    KELAS     : IF 40-02
    KELOMPOK  : 9
    NAMA(NIM) : [HANAFI ABDULLAH GUSMAN][1301160362] , [MUCHAMMAD FAJAR ALIF][nim] , [ISNAN AKBAR IBRAHIM][nim] , [ANDINI SALIMAH][nim]
**/

#ifndef TANGGAL_H_INCLUDED
#define TANGGAL_H_INCLUDED

#include <string>
#include <iostream>
using namespace std;

struct tanggal // struct = type
{
    //=================================================
    // YOUR CODE STARTS HERE struct = record
    int dd,mm,yy;

    // YOUR CODE ENDS HERE
    //=================================================
};

tanggal create_tanggal(int dd,int mm,int yy);
bool cek_tanggal(tanggal tgl);// tipe pengeluaran
void tampil_tanggal(tanggal tgl);
int selisih_hari(tanggal tgl1, tanggal tgl2);

#endif // TANGGAL_H_INCLUDED
