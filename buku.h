/**
    KELAS     : IF 40.02
    KELOMPOK  : 9
    NAMA(NIM) : Andini Salimah (1301164080), Fajar Alif (1301164274), Isnan Akbar (1301164490), Hanafi Abdullah Gusman (1301160362)
**/

#ifndef BUKU_H_INCLUDED
#define BUKU_H_INCLUDED

#include "tanggal.h"


struct buku {
    //=================================================
    // YOUR CODE STARTS HERE

    string judul;
    string pengarang;
    tanggal terakhir_dipinjam;
    bool status_dipinjam;

    // YOUR CODE ENDS HERE
    //=================================================
};

buku create_buku(string judul, string pengarang);
void pinjam_buku(buku &b, int tgl, int bln, int thn);
int kembalikan_buku(buku &b, int tgl, int bln, int thn);
void tampil_buku(buku b);


#endif // BUKU_H_INCLUDED
