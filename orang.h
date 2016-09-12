/**
    KELAS     : IF 39 - 06
    KELOMPOK  : 9
    NAMA(NIM) : [M.Yusuf Faishal][1301154174] , [Ni Putu Surya Febyanti Kusumadewi][1301154482] , [Wilson Immanuel Antonio][1301154104]
**/


#ifndef ORANG_H_INCLUDED
#define ORANG_H_INCLUDED

#include "tanggal.h"

struct orang {
    //=================================================
    string nama;
    tanggal tgl_lahir;
    //=================================================
};

orang create_orang(string nama, int tgl,int bln,int thn);
int hitung_umur(orang org);
void show_orang(orang org);


#endif // ORANG_H_INCLUDED
