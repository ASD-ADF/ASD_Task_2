/**
    KELAS     : IF 39-06
    KELOMPOK  : 1
    NAMA(NIM) : [Muhammad Iqbal][13401154300] , [Vatana Rianti Aldefi][1301154566] , [Ibrahim Bimo Wicaksono][1301154356] , [Rian Pebi][1301154426]
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
	 	int mm, yy;


    // YOUR CODE ENDS HERE
    //=================================================
};

tanggal create_tanggal(int dd,int mm,int yy);
bool cek_tanggal(tanggal tgl);
void show_tanggal(tanggal tgl);
void edit_tanggal(tanggal &tgl, int dd, int mm, int yy);
int selisih_hari(tanggal tgl1, tanggal tgl2);

#endif // TANGGAL_H_INCLUDED
