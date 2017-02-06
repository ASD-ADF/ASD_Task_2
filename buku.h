/**
    KELAS     : IF 40-02
    KELOMPOK  : 9
    NAMA(NIM) : [HANAFI ABDULLAH GUSMAN][1301160362] , [MUCHAMMAD FAJAR ALIF][nim] , [ISNAN AKBAR IBRAHIM][nim] , [ANDINI SALIMAH][nim]
**/

#ifndef BUKU_H_INCLUDED
#define BUKU_H_INCLUDED

#include "tanggal.h"


struct buku
{
    //=================================================
    // YOUR CODE STARTS HERE

    string judul,pengarang;
    tanggal terakhir_dipinjam;
    bool status_dipinjam;//bool = boolean
    // YOUR CODE ENDS HERE
    //=================================================
};

buku create_buku(string judul, string pengarang);
void pinjam_buku(buku &b, int tgl, int bln, int thn);
int kembalikan_buku(buku &b, int tgl, int bln, int thn);
void tampil_buku(buku b);


#endif // BUKU_H_INCLUDED
