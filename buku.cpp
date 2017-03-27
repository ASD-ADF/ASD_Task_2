/**
    KELAS     : IF 40-02
    KELOMPOK  : 8
    NAMA(NIM) : Ayu Wulandari (1301164104),Andaresta Fauzan(1301164189), Mahendrawan Idris (1301164461), M Hanur Yoga (1301164153)
**/


#include "buku.h"

buku create_buku(string judul, string pengarang)
{
    /**
    * fungsi mengeset buku b dengan judul, dan pengarang
    * dan mengembalikan hasilnya
    **/
    buku b;
    //=================================================
    // YOUR CODE STARTS HERE
    b.judul = judul;
    b.pengarang = pengarang;
    b.status_dipinjam = false;
    // YOUR CODE ENDS HERE
    //=================================================
    return b;
}


void pinjam_buku(buku &b, int tgl, int bln, int thn)
{
    /**
    * fungsi mengeset tanggal pinjam dari buku b dengan tgl, bln, thn,
    * dan mengeset status pinjam menjadi true
    * fungsi memanggil fungsi create_tanggal untuk membuat tanggal pinjam
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    if(b.status_dipinjam == false)
    {
        tanggal t;
        t = create_tanggal(tgl,bln,thn);
        b.terakhir_dipinjam = t;
        b.status_dipinjam = true;
    }
    else
    {
        cout << "Buku telah dipinjam" << endl;
        cout << endl;

    }


    // YOUR CODE ENDS HERE
    //=================================================
}

int kembalikan_buku(buku &b, int tgl, int bln, int thn)
{
    /**
    * fungsi mengeset status pinjam menjadi false
    * fungsi memanggil fungsi create_tanggal untuk membuat tanggal kembali
    * fungsi mengembalikan selisih hari dari tanggal pinjam ke tanggal kembali
    * dengan menggunakan fungsi selisih_hari
    **/
    int selisih;
    //=================================================
    // YOUR CODE STARTS HERE
    tanggal t;
    b.status_dipinjam = false;
    t = create_tanggal(tgl,bln,thn);
    selisih = selisih_hari(t,b.terakhir_dipinjam);

    // YOUR CODE ENDS HERE
    //=================================================
    return selisih;
}


void tampil_buku(buku b)
{
    /**
    * fungsi menampilkan judul, pengarang, dan status dipinjam dari buku b
    * contoh output:
            Judul Buku : XXXXXXX,
            Pengarang  : AAAA AAAAAAA,
            Status     : dipinjam
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    cout << "Judul Buku :" << b.judul << endl;
    cout << "Pengarang :" << b.pengarang << endl;
    if (b.status_dipinjam == true)
    {
        cout << "Status : Sedang Dipinjam" << endl;
    }
    else
    {
        cout << "Status : Tidak Dipinjam" << endl;
    }

// YOUR CODE ENDS HERE
//=================================================
}
