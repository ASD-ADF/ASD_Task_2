/**
    KELAS     : IF 39 06
    KELOMPOK  : 9
    NAMA(NIM) : [MUHAMMAD YUSUF FAISAL][1301154174] , [Wilson Immanuel Antonio][1301154104] , [Ni Putu Surya Febyanti K][1301154482]
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
