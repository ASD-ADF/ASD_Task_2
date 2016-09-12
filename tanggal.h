/**
    KELAS     : IF 39-06
    KELOMPOK  : 8
    NAMA(NIM) : [Aziza Hayupratiwi][1301150440] , [M. Luthfi A.S][1301154328] , [Rafi][nim] , [nama][nim]
**/


#ifndef TANGGAL_H_INCLUDED
#define TANGGAL_H_INCLUDED

#include <string>
#include <iostream>
#include <stdlib.h>
#include <math.h>

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
void show_tanggal(tanggal tgl);
void edit_tanggal(tanggal &tgl, int dd, int mm, int yy);
int selisih_hari(tanggal tgl1, tanggal tgl2);

#endif // TANGGAL_H_INCLUDED
