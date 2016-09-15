/**
    KELAS     : IF-39-01
    KELOMPOK  : 10
    NAMA(NIM) : [ANJAR AFRIZAL][1301154239] , [FAHRU ADI RAMADHAN][1301154141] , [FAUZI KURNIAWAN][1301154267] , [REGITA RATIH P][1301150435]
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
    int tgl;     //*hari/tanggal
    int bln;     //*bulan
    int thn;     //*tahun

    // YOUR CODE ENDS HERE
    //=================================================
};

tanggal create_tanggal(int dd,int mm,int yy);
bool cek_tanggal(tanggal tgl);
void show_tanggal(tanggal tgl);
void edit_tanggal(tanggal &tgl, int dd, int mm, int yy);
int selisih_hari(tanggal tgl1, tanggal tgl2);

#endif // TANGGAL_H_INCLUDED
