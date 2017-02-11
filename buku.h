/**
    KELAS     : IF-40-02
    KELOMPOK  : 1 (Satu)
    NAMA(NIM) : Fuad Zauqi Nur (1301164392), Indah Ayu Nur Fauziah (1301164004), Refin Heryanto (1301164324), Mohammad Izzauhaq Huda (1301160565)
**/

#ifndef BUKU_H_INCLUDED
#define BUKU_H_INCLUDED

#include "tanggal.h"


struct buku {
    //=================================================
    // YOUR CODE STARTS HERE
    string judul, pengarang;
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
