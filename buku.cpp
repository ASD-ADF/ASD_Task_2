/**
    KELAS     : IF 40 02
    KELOMPOK  : 6
    NAMA(NIM) : [nama][nim] , [nama][nim] , [nama][nim] , [nama][nim]
**/


#include "buku.h"
#include "aplikasi.h"


buku create_buku(string judul, string pengarang)
{
    /**
    * fungsi mengeset buku b dengan judul, dan pengarang
    * dan mengembalikan hasilnya
    **/
    buku b;
    //=================================================

    b.judul = judul;
    b.pengarang = pengarang;
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
    b.pinjam = "true";
    b.tgl = tgl;
    b.bln = bln;
    b.thn = thn;
    if (b.bln>=13)
    {
        cout<<"Maaf bulan yang anda masukan tidak valid silahkan ulangi lagi\n";
        b.tgl = 0;
        b.bln = 0;
        b.thn = 0;
        b.pinjam = "false";
    }

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
    b.pinjam = "false";
    b.tgl2 = tgl;
    b.bln2 = bln;
    b.thn2 = thn;
    if (b.thn2>=b.thn)
    {
        if (b.bln2==b.bln)
        {
            if (b.bln2<=12)
            {
                selisih=(b.tgl2-b.tgl);
            }
            else
            {
                cout<<"Maaf bulan yang anda inputkan tidak valid, silahkan ulangi lagi\n";
                b.tgl2 = 0;
                b.bln2 = 0;
                b.thn2 = 0;
                b.pinjam = "true";
            }
        }
        else
        {
            selisih=(((b.bln2-b.bln)*30)-b.tgl+b.tgl2);

        }
    }
    else
    {
        cout<<"Maaf Tahun yang anda inputkan tidak valid, silahkan ulangi lagi \n";
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
    cout<<"Judul Buku : "<<b.judul<<endl;
    cout<<"Pengarang  : "<<b.pengarang<<endl;
    if(b.pinjam=="false")
    {
        cout<<"Status   : Tersedia";
    }
    else if(b.pinjam=="true")
    {
        cout<<"Status   : Dipinjam";
    }

    // YOUR CODE ENDS HERE
    //=================================================
}
