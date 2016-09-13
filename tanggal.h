/**
    KELAS     : IF-39-06
    KELOMPOK  : 4
    NAMA(NIM) : RAMA ADITYA MAULANA 1301150034, KHARISMA OKTAVIANING HERWANDA 1301154496, HUTOMO AJI 1301154384, RIZKI HIDAYATULLAH 1301154118
 **/


#ifndef TANGGAL_H_INCLUDED
#define TANGGAL_H_INCLUDED

#include<string>
#include<iostream>
using namespace std;

struct tanggal {
    //==================================================
    //YOUR CODE STARTS HERE
    int dd;
    int mm;
    int yy;

    //YOUR CODE ENDS HERE
    //==================================================
};

tanggal create_tanggal(int dd, int mm, int yy);
bool cek_tanggal(tanggal tgl);
void show_tanggal(tanggal tgl);
void edit_tanggal(tanggal &tgl, int dd, int mm, int yy);
int selisih_hari(tanggal tgl1, tanggal tgl2);
int jumlah_hari_bulan(int bulan, int tahun);

#endif // TANGGAL_H_INCLUDED
