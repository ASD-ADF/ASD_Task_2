/**
    KELAS     : IF 40-02
    KELOMPOK  : Kelompok 4
    NAMA(NIM) : [Joel Andrew][1301164165Lucky Olivera][1301164055] , [Rangga Dwi A][1301164030] , [Diah Hevyka M][1301164336]
**/

#ifndef TANGGAL_H_INCLUDED
#define TANGGAL_H_INCLUDED

#include <string>
#include <iostream>
using namespace std;

struct tanggal {
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
