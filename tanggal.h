/**
    KELAS     : IF 40-02
    KELOMPOK  : 2
    NAMA(NIM) : [Muh. Hatta Eka Putra][1301160444] , [Rifki Mifathur Sutomo][1301164225] , [Fahmi Hidayat][1301164312] , [Elsya Putri Sutomo][1301160201]
**/

#ifndef TANGGAL_H_INCLUDED
#define TANGGAL_H_INCLUDED

#include <string>
#include <iostream>
using namespace std;

struct tanggal
{
    //=================================================
    // YOUR CODE STARTS HERE

    int dd,mm,yy;

    // YOUR CODE ENDS HERE
    //=================================================
};

tanggal create_tanggal(int dd,int mm,int yy);
bool cek_tanggal(tanggal tgl);
void tampil_tanggal(tanggal tgl);
int selisih_hari(tanggal tgl1, tanggal tgl2);

#endif // TANGGAL_H_INCLUDED
