/**
    KELAS     :
    KELOMPOK  :
    NAMA(NIM) : [nama][nim] , [nama][nim] , [nama][nim] , [nama][nim]
**/

#ifndef BUKU_H_INCLUDED
#define BUKU_H_INCLUDED

#include "tanggal.h"


struct buku
{
    //=================================================

    int id,tgl,tgl2,bln,bln2,thn,thn2;
    string judul,pengarang,pinjam="false";
    //=================================================
};
buku create_buku(string judul, string pengarang);
void pinjam_buku(buku &b, int tgl, int bln, int thn);
int kembalikan_buku(buku &b, int tgl, int bln, int thn);
void tampil_buku(buku b);


#endif // BUKU_H_INCLUDED
