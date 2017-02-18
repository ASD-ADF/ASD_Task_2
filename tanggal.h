/**
    KELAS     : IF 40-02
    KELOMPOK  : 3
    NAMA(NIM) : [TAUFIQ AKMAL DAWAMI][1301164426] , [FAHRUR ROZI SYARBINI][1301164213] , [FANNY RISCA W][1301164237] , [YEDIZA FRANS DHIKA][1301160622]
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
    int dd, mm, yy;
    // YOUR CODE ENDS HERE
    //=================================================
};

tanggal create_tanggal(int dd,int mm,int yy);
bool cek_tanggal(tanggal tgl);
void tampil_tanggal(tanggal tgl);
int selisih_hari(tanggal tgl1, tanggal tgl2);

#endif // TANGGAL_H_INCLUDED
