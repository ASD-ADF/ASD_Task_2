/**
    KELAS     : IF 39 - 06
    KELOMPOK  : 9
    NAMA(NIM) : [M.Yusuf Faishal][1301154174] , [Ni Putu Surya Febyanti Kusumadewi][1301154482] , [Wilson Immanuel Antonio][1301154104]
**/


#ifndef TANGGAL_H_INCLUDED
#define TANGGAL_H_INCLUDED

#include <string>
#include <iostream>
using namespace std;

struct tanggal {
    //=================================================
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
