/**
    KELAS     : IF 40-02
    KELOMPOK  : 9
    NAMA(NIM) : [HANAFI ABDULLAH GUSMAN][1301160362] , [MUCHAMMAD FAJAR ALIF][1301164274] , [ISNAN AKBAR IBRAHIM][1301164490] , [ANDINI SALIMAH][1301164080]
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
    b.judul = judul;
    b.pengarang = pengarang;
    b.status_pinjam = false;
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
    if (b.status_pinjam == true) {
        cout << "Sedang Dipinjam" << endl;
    } else {
        if(cek_tanggal(create_tanggal(tgl,bln,thn)) == true) {
            b.status_pinjam = true;
            b.terakhir_dipinjam = create_tanggal(tgl,bln,thn);
        } else {
            cout << "Tanggal Salah" << endl;
        }
    }
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
    if(cek_tanggal(create_tanggal(tgl,bln,thn)) == true) {
        b.status_pinjam = false;
        selisih = selisih_hari(b.terakhir_dipinjam, create_tanggal(tgl,bln,thn));
    } else {
        cout << "Format Tanggal Salah" << endl;
    }
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
    cout << "   Judul : " << b.judul << endl;
    cout << "   Pengarang : " << b.pengarang << endl;
    if (b.status_pinjam == true) {
        cout << "   Status : Dipinjam" << endl;
        tampil_tanggal(b.terakhir_dipinjam);
    } else {
        cout << "   Status : Tidak Sedang Dipinjam" << endl;
    }
    // YOUR CODE ENDS HERE
    //=================================================
}
