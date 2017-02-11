/**
    KELAS     : IF-40-02
    KELOMPOK  : 1 (Satu)
    NAMA(NIM) : Fuad Zauqi Nur (1301164392), Indah Ayu Nur Fauziah (1301164004), Refin Heryanto (1301164324), Mohammad Izzauhaq Huda (1301160565)
**/


#include "buku.h"

buku create_buku(string judul, string pengarang) {
    /**
    * fungsi mengeset buku b dengan judul, dan pengarang
    * dan mengembalikan hasilnya
    **/
    buku b;
    //=================================================
    // YOUR CODE STARTS HERE
    b.judul = judul;            // Judul Buku
    b.pengarang = pengarang;    // Pengarang Buku

    // Tanngal Pinjam Di Nol Kan Saat Pertama Di Buat
    b.terakhir_dipinjam.dd = 0;
    b.terakhir_dipinjam.mm = 0;
    b.terakhir_dipinjam.yy = 0;

    // Status pinjam true jika tersedia
    b.status_dipinjam = false;
    // YOUR CODE ENDS HERE
    //=================================================
    return b;
}

void pinjam_buku(buku &b, int tgl, int bln, int thn) {
    /**
    * fungsi mengeset tanggal pinjam dari buku b dengan tgl, bln, thn,
    * dan mengeset status pinjam menjadi true
    * fungsi memanggil fungsi create_tanggal untuk membuat tanggal pinjam
    **/
    //=================================================
    // YOUR CODE STARTS HERE

    // status pinjam false jika sedang dipinjam
    b.status_dipinjam = true;

    // tanggal diubah
    b.terakhir_dipinjam.dd = tgl;
    b.terakhir_dipinjam.mm = bln;
    b.terakhir_dipinjam.yy = thn;
    // YOUR CODE ENDS HERE
    //=================================================
}

int kembalikan_buku(buku &b, int tgl, int bln, int thn) {
    /**
    * fungsi mengeset status pinjam menjadi false
    * fungsi memanggil fungsi create_tanggal untuk membuat tanggal kembali
    * fungsi mengembalikan selisih hari dari tanggal pinjam ke tanggal kembali
    * dengan menggunakan fungsi selisih_hari
    **/
    int selisih;
    //=================================================
    // YOUR CODE STARTS HERE
    b.status_dipinjam = false;
    selisih = selisih_hari(b.terakhir_dipinjam, create_tanggal(tgl, bln, thn));
    // YOUR CODE ENDS HERE
    //=================================================
    return selisih;
}


void tampil_buku(buku b) {
    /**
    * fungsi menampilkan judul, pengarang, dan status dipinjam dari buku b
    * contoh output:
            Judul Buku : XXXXXXX,
            Pengarang  : AAAA AAAAAAA,
            Status     : dipinjam
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    cout << "Judul Buku :  " << b.judul << endl;
    cout << "Pengarang : " << b.pengarang << endl;
    if (b.status_dipinjam == false) {
        cout << "Tersedia" << endl;
    } else {
        cout << "Sedang Dipinjam" << endl;
    }
    // YOUR CODE ENDS HERE
    //=================================================
}

void gabisapinjem(){



}
