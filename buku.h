/**
    KELAS     : IF-40-02
    KELOMPOK  : 10
    NAMA(NIM) : [Try Arie Rahmat Insani][1301164513], [Ranggha Adytia][1301164017], [Javiar Fasyah][1301164477], [Rani Sari Murti][1301160544], [Dianita Yustika Sari][1301164349]
**/

#ifndef BUKU_H_INCLUDED
#define BUKU_H_INCLUDED

#include "tanggal.h"
#include <string>
#include <iostream>

using namespace std;


struct buku
{
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
