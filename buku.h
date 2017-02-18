/**
    KELAS     : IF 40-02
    KELOMPOK  : 3
    NAMA(NIM) : [Muh. Hatta Eka Putra][1301160444] , [Rifki Mifathur Sutomo][1301164225] , [Fahmi Hidayat][1301164312] , [Elsya Putri Sutomo][1301160201]
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
    bool status_pinjam;
    int tgl,bln,thn;

    // YOUR CODE ENDS HERE
    //=================================================
};

buku create_buku(string judul, string pengarang);
void pinjam_buku(buku &b, int tgl, int bln, int thn);
int kembalikan_buku(buku &b, int tgl, int bln, int thn);
void tampil_buku(buku b);
bool cek_ketersediaan(buku b);

#endif // BUKU_H_INCLUDED
