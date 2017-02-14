/**
    KELAS     : IF 40-02
    KELOMPOK  : 7
    NAMA(NIM) : [Ery Defriyanto.S][1301164129] , [Seiba Shonia][1301164249] , [Wira Aditama][1301164068] , [Riandi Kartiko][1301164300]
**/

#ifndef BUKU_H_INCLUDED
#define BUKU_H_INCLUDED
#include <string>
#include "tanggal.h"


struct buku {
    //=================================================
    // YOUR CODE STARTS HERE
    string judul,pengarang;
    bool status;
    tanggal t_pinjam;
    // YOUR CODE ENDS HERE
    //=================================================
};

buku create_buku(string judul, string pengarang);
void pinjam_buku(buku &b, int tgl, int bln, int thn);
int kembalikan_buku(buku &b, int tgl, int bln, int thn);
void tampil_buku(buku b);


#endif // BUKU_H_INCLUDED
