/**
    KELAS     :
    KELOMPOK  :
    NAMA(NIM) : [nama][nim] , [nama][nim] , [nama][nim] , [nama][nim]
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
    if (cek_buku(b) == false)
    {
        cout << "Sedang tidak tersedia atau sedang dipinjam" << endl;
    }
    else
    {
        if(cek_tanggal(create_tanggal(tgl,bln,thn)) == true)
        {
            b.status_dipinjam = true;
            b.terakhir_dipinjam = create_tanggal(tgl,bln,thn);
        }
        else
        {
            cout << "Anda memasukkan tanggal yang salah" << endl;
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

    if(cek_tanggal(create_tanggal(tgl,bln,thn)) == true)
    {
        b.status_dipinjam = false;
        selisih = selisih_hari(b.terakhir_dipinjam, create_tanggal(tgl,bln,thn));
    }
    else
    {
        cout << "Anda memasukkan tanggal yang salah" << endl;
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
    if (b.status_dipinjam == true)
    {
        cout << "   Status : Sedang tidak tersedia atau sedang dipinjam." << endl;
        tampil_tanggal(b.terakhir_dipinjam);
    }
    else
    {
        cout << "   Status : Tersedia. Anda dapat meminjamnya." << endl;
    }
    // YOUR CODE ENDS HERE
    //=================================================
}
bool cek_buku (buku b)
{
    bool cek;
    if (b.status_dipinjam == true)
    {
        cek = false;
    }
    else
    {
        cek = true;
    }

    return cek;

}
