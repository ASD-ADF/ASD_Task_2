/**
    KELAS     : IF 39-06
    KELOMPOK  : 10
    NAMA(NIM) : [nama][nim] , [M. Fadhlan Supriadi][1301154202] , [Hardo Fernando Silalahi][1301154216] , [Dhevi Larasati][1301154454]
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
    int dd1, mm1, yy1;
    // YOUR CODE ENDS HERE
    //=================================================
};

tanggal create_tanggal(int dd,int mm,int yy);
bool cek_tanggal(tanggal tgl);
void show_tanggal(tanggal tgl);
void edit_tanggal(tanggal &tgl, int dd, int mm, int yy);
int selisih_hari(tanggal tgl1, tanggal tgl2);

#endif // TANGGAL_H_INCLUDED
