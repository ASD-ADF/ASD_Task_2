/**
   KELAS     : IF 39-01
   KELOMPOK  : 9
   NAMA(NIM) : [Moh. abdul haris angio][1301154365] , [Nadine Azhalia][1301154519] , [Nabil Bagus Pratama][1301144365] , [nama][nim]
**/

#ifndef ORANG_H_INCLUDED
#define ORANG_H_INCLUDED

#include "tanggal.h"

struct orang {
    //=================================================
    // YOUR CODE STARTS HERE
    string nama;
    tanggal tgl_lahir;

    // YOUR CODE ENDS HERE
    //=================================================
};

orang create_orang(string nama, int tgl,int bln,int thn);
int hitung_umur(orang org);
void show_orang(orang org);


#endif // ORANG_H_INCLUDED
