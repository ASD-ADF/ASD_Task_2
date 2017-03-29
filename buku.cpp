/**
    KELAS     : IF 40-02
    KELOMPOK  : 8
    NAMA(NIM) : Andaresta Fauzan(1301164189), Mahendrawan Idris (1301164461), Ayu Wulandari (1301164104), M Hanur Yoga (1301164153)
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
    if (b.status_dipinjam == true)
    {
        cout << "Buku Sudah Dipinjam" << endl;
    }
    else
    {
        if(cek_tanggal(create_tanggal(tgl,bln,thn)) == true) {
            b.status_dipinjam = true;
            b.terakhir_dipinjam = create_tanggal(tgl,bln,thn);
        } else {
            cout << "Format Tanggal Salah" << endl;
        }
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
    if(cek_tanggal(create_tanggal(tgl,bln,thn)) == true) {
        b.status_dipinjam = false;
        selisih = selisih_hari(b.terakhir_dipinjam, create_tanggal(tgl,bln,thn));
    } else {
        cout << "Format Tanggal Salah" << endl;
    }

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

    cout << "judul buku :" << " " << b.judul << endl;
    cout << "pengarang  :" << " " << b.pengarang << endl;
    if (b.status_dipinjam == true)
    {
        cout << "Status  :" << " " << "Dipinjam" << endl;
    }
    else
    {
        cout << "Status" << " " << "Ada" << endl;
    }


    // YOUR CODE ENDS HERE
    //=================================================
}
