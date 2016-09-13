/**
    KELAS     : IF-39-06
    KELOMPOK  : 4
    NAMA(NIM) : [Faishal Rachman][1301154160] , [I Ketut Sudika Kertayasa][1301154244] , [Arli Mutiara Gusriyanti][1301154538] , [nama][nim]
**/


#ifndef ORANG_H_INCLUDED
#define ORANG_H_INCLUDED

#include "tanggal.h"

struct orang
{
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
