/**
    KELAS     : IF 39 01
    KELOMPOK  : 6
    NAMA(NIM) : [Rd.Havez Cahyan F.][1301154197] , [Rifell Noerfiansyah][1301150085] , [Rd. Muhammad Ichsan Al Rasyid][1301154295] , [Salma Assyifa][1301154505]
**/


#include "orang.h"

orang create_orang(string nama, int tgl, int bln, int thn) {
    /**
    * fungsi mengeset orang org dengan nama, tgl, bln, thn, dan mengembalikan hasilnya
    * fungsi memanggil fungsi create_tanggal untuk membuat tanggal lahir
    **/
    orang org;
    //=================================================
        org.nama = nama;
        tanggal tgl_lahir = create_tanggal(tgl,bln,thn) ;
        org.tgl_lahir = tgl_lahir;
    //=================================================
    return org;
}

int hitung_umur(orang org) {
    /**
    * fungsi menghitung umur orang org berdasarkan tahun 2016
    **/
    int umur = 0;
    //=================================================
        umur = 2016 - org.tgl_lahir.thn;
    //=================================================
    return umur;
}

void show_orang(orang org) {
    /**
    * fungsi menampilkan nama, tanggal lahir dan umur orang org
    **/
    //=================================================
        cout<<"Nama : "<<org.nama<<endl;
        cout<<"Tanggal Lahir : ";
        cout<<org.tgl_lahir.tgl<<" ";
        cout<<org.tgl_lahir.bln<<" ";
        cout<<org.tgl_lahir.thn<<endl;
        cout<<"Umur : "<<hitung_umur(org)<<" Tahun "<< endl;
    //=================================================
}
