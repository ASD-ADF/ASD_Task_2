/**
    KELAS     : IF 39 06
    KELOMPOK  : 9
    NAMA(NIM) : [MUHAMMAD YUSUF FAISAL][1301154174] , [Wilson Immanuel Antonio][1301154104] , [Ni Putu Surya Febyanti K][1301154482]
**/


#ifndef ORANG_H_INCLUDED
#define ORANG_H_INCLUDED

#include "tanggal.h"

struct orang {
    //=================================================
    // YOUR CODE STARTS HERE
    string nama;
    tanggal tgl;
    // YOUR CODE ENDS HERE
    //=================================================
};

orang create_orang(string nama, int tgl,int bln,int thn);
int hitung_umur(orang org);
void show_orang(orang org);


#endif // ORANG_H_INCLUDED
