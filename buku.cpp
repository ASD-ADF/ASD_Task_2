/**
    KELAS     : IF 40-02
    KELOMPOK  : 2
    NAMA(NIM) : [Muh. Hatta Eka Putra][1301160444] , [Rifki Mifathur Sutomo][1301164225] , [Fahmi Hidayat][1301164312] , [Elsya Putri Sutomo][1301160201]
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
    b.status_pinjam = false;

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

    if (cek_ketersediaan(b) == false)
    {
        cout<<" > Mohon Maaf, Buku Sedang Dipinjam"<<endl<<endl;
    }
    else
    {
        b.tgl = tgl;
        b.bln = bln;
        b.thn = thn;

        if (cek_tanggal(create_tanggal(tgl,bln,thn)))
        {
            b.status_pinjam = true;
        }
        else
        {
            cout<<" > Mohon Maaf, Tanggal yang Andah Masukkan Salah!"<<endl<<endl;
            b.status_pinjam = false;
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
    tanggal tgl1;
    tanggal tgl2;
    //=================================================
    // YOUR CODE STARTS HERE


    tgl1.dd = b.tgl;
    tgl1.mm = b.bln;
    tgl1.yy = b.thn;
    tgl2 = create_tanggal(tgl,bln,thn);
    selisih = selisih_hari(tgl1,tgl2);
    if (selisih != -1){
        b.status_pinjam = false;
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


    cout <<endl;
    cout <<"  > Judul Buku : "<<b.judul<<endl;
    cout <<"  > Nama Pengarang : "<<b.pengarang<<endl;
    cout <<"  > Status : ";
    if (b.status_pinjam)
    {
        cout<<"Sudah Dipinjam"<<endl;
        cout<<"  > Dipinjam Tanggal : ";
        tampil_tanggal(create_tanggal(b.tgl,b.bln,b.thn));
    }
    else
    {
        cout<<"Belum Dipinjam";
    }

    // YOUR CODE ENDS HERE
    //=================================================
}

//Fungsi Tambahan Agar Tidak Bisa Meminjam Buku Yang Sedang Dipinjam

bool cek_ketersediaan(buku b)
{
    bool cek;

    if (b.status_pinjam == true)
    {
        cek = false;
    }
    else
    {
        cek = true;
    }

    return cek;
}
