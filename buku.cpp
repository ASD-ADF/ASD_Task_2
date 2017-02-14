/**
    KELAS     : IF 40-02
    KELOMPOK  : 7
    NAMA(NIM) : [Ery Defriyanto.S][1301164129] , [Seiba Shonia][1301164249] , [Wira Aditama][1301164068] , [Riandi Kartiko][1301164300]
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
    b.status = false;
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
    if(b.status == true){
        cout<<"Status Buku: Terpinjam /n";
    }else{
        if(cek_tanggal(create_tanggal(tgl,bln,thn)) == true){
            b.status = true;
            b.t_pinjam = create_tanggal(tgl,bln,thn);
        }else{
            cout<<"Tanggal Salah \n";
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
    if(cek_tanggal(create_tanggal(tgl,bln,thn)) == true){
        b.status = false;
        selisih = selisih_hari(b.t_pinjam,create_tanggal(tgl,bln,thn));
    }
    else {
        cout << "Format Tanggal Salah !!"<<endl;
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
    cout <<" Judul Buku : "<<b.judul<<endl;
    cout <<" Pengarang  : "<<b.pengarang<<endl;
    if (b.status == true){
        cout<<" Status   : Dipinjam ";
    }else {
        cout<<" Status  : Tidak Dipinjam ";
    }
    // YOUR CODE ENDS HERE
    //=================================================
}
