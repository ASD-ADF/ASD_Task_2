/**
    KELAS     : IF-39-01
    KELOMPOK  : 3
    NAMA(NIM) : [Sugianto][1301154407] , [Abram][1301154169] , [Elza Fitria][1301154533] , [Muhammad Turmudzi][1301154667]
**/


#include "orang.h"

orang create_orang(string nama, int tgl, int bln, int thn) {
    /**
    * fungsi mengeset orang org dengan nama, tgl, bln, thn, dan mengembalikan hasilnya
    * fungsi memanggil fungsi create_tanggal untuk membuat tanggal lahir
    **/
    orang org;
        org.nama = nama;
        org.tgl_orang.dd =tgl;
        org.tgl_orang.mm = bln;
        org.tgl_orang.yy = thn;
    return org;
}

int hitung_umur(orang org) {
    /**
    * fungsi menghitung umur orang org berdasarkan tahun 2016
    **/
    int umur = 0;
    umur = 2016 - org.tgl_orang.yy;
    return umur;
}

void show_orang(orang org) {
    /**
    * fungsi menampilkan nama, tanggal lahir dan umur orang org
    **/
        cout << "Nama : "  << org.nama << endl;
        cout << "Tanggal Lahir : " << org.tgl_orang.dd<< endl;
        cout << "Bulan Lahir : " << org.tgl_orang.mm<<endl;
        cout << "Tahun Lahir : " <<org.tgl_orang.yy<<endl ;
        cout << "Umur : " << hitung_umur(org)<< endl;
}
