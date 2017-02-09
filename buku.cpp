/**
    KELAS     : IF 40-02
    KELOMPOK  : 10
    NAMA(NIM) : [Ranggha Adytia][1301164017] , [Javiar Fasyah][1301164477] , [Rani Sari Murti][1301160544]
                [Dianita Yustika Sari][1301164349] , [Try Arie Rahmat Insani][1301164513]
**/

#include "buku.h"

buku create_buku(string judul, string pengarang)
{
    buku b;
    b.judul = judul;
    b.pengarang = pengarang;
    b.status_dipinjam = false;

    return b;
}

void pinjam_buku(buku &b, int tgl, int bln, int thn)
{
    /**
    * fungsi mengeset tanggal pinjam dari buku b dengan tgl, bln, thn,
    * dan mengeset status pinjam menjadi true
    * fungsi memanggil fungsi create_tanggal untuk membuat tanggal pinjam
    **/
    if (b.status_dipinjam == true)
    {
        cout << "Sedang Dipinjam" << endl;
    }
    else
    {
        if(cek_tanggal (create_tanggal(tgl,bln,thn))== true){
         b.status_dipinjam = true;
         b.terakhir_dipinjam = create_tanggal(tgl, bln, thn);
        }
        else
            {
                cout << "Tanggal Salah" << endl;
            }

    }

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

    if(cek_tanggal(create_tanggal(tgl,bln,thn)) == true)
    {
        b.status_dipinjam = false;
        selisih = selisih_hari(b.terakhir_dipinjam, create_tanggal(tgl,bln,thn));
    }
    else
    {
        cout << "format tanggal salah" << endl;
    }

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
     cout << "Judul :  "<< b.judul << endl;
    cout<< "Pengarang : "<<b.pengarang << endl;
    if (b.status_dipinjam == true)
    {
        cout << " Dipinjam" << endl;
    }
    else
    {
        cout << "Tersedia" << endl;
    }

}
