/**
    KELAS     : IF-39-01
    KELOMPOK  : 10
    NAMA(NIM) : [Anjar Afrizal][1301154239] , [Fahru Adi Ramadhan][1301154141] , [Fauzi Kurniawan][1301154267] , [Regita Ratih P][1301150435]
**/


#ifndef ORANG_H_INCLUDED
#define ORANG_H_INCLUDED

#include "tanggal.h"

struct orang
{
    //=================================================
    // YOUR CODE STARTS HERE
    string nama;
    tanggal tgl_lahir; // variabel tgl_lahir dengan tipe data tanggal, struct tanggal terdapat pada file tanggal.h

    // YOUR CODE ENDS HERE
    //=================================================
};

orang create_orang(string nama, int tgl,int bln,int thn);
int hitung_umur(orang org);
void show_orang(orang org);


#endif // ORANG_H_INCLUDED
