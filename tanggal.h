/**
    KELAS     : IF 39-01
    KELOMPOK  : 9
    NAMA(NIM) : [Moh .Abdul Haris Angio][nim] , [Nabil][nim] , [Nadine Azhalia][1301154519] , [Ressa Firmansyah Fatah][1301154105]
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

#endif // TANGGAL_H_INCLUDED
