/**
    KELAS     : IF 40-02
    KELOMPOK  : Kelompok 4
    NAMA(NIM) : [Joel Andrew][1301164165Lucky Olivera][1301164055] , [Rangga Dwi A][1301164030] , [Diah Hevyka M][1301164336]
**/

#ifndef BUKU_H_INCLUDED
#define BUKU_H_INCLUDED

#include "tanggal.h"


struct buku {
    //=================================================
    // YOUR CODE STARTS HERE
    string judul;
    string pengarang;
    tanggal Terakhir_dipinjam;
    bool tersedia=true;

    // YOUR CODE ENDS HERE
    //=================================================
};

buku create_buku(string judul, string pengarang);
void pinjam_buku(buku &b, int tgl, int bln, int thn);
int kembalikan_buku(buku &b, int tgl, int bln, int thn);
void tampil_buku(buku b);


#endif // BUKU_H_INCLUDED
