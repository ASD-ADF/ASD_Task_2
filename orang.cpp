/**
    KELAS     : IF 39-06
    KELOMPOK  : 8
    NAMA(NIM) : [Aziza Hayupratiwi][1301150440] , [M. Luthfi A.S][1301154328] , [Rafi][nim] , [nama][nim]
**/


#include "orang.h"

orang create_orang(string nama, int tgl, int bln, int thn) {
    /**
    * fungsi mengeset orang org dengan nama, tgl, bln, thn, dan mengembalikan hasilnya
    * fungsi memanggil fungsi create_tanggal untuk membuat tanggal lahir
    **/
    orang org;
    tanggal tgll;
    //=================================================
    // YOUR CODE STARTS HERE
    org.nama = nama;
    tgll = create_tanggal(tgl, bln, thn);
    org.tgl_lahir = tgll;
    // YOUR CODE ENDS HERE
    //=================================================
    return org;
}

int hitung_umur(orang org) {
    /**
    * fungsi menghitung umur orang org berdasarkan tahun 2016
    **/
    int umur = 0;
    //=================================================
    // YOUR CODE STARTS HERE
    umur = 2016 - org.tgl_lahir.yy;

    // YOUR CODE ENDS HERE
    //=================================================
    return umur;
}

void show_orang(orang org) {
    /**
    * fungsi menampilkan nama, tanggal lahir dan umur orang org
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    string ket_bln;
    cout << "Nama: "<< org.nama << endl;

    if (org.tgl_lahir.mm==1) {
        ket_bln="Januari";
    } else if (org.tgl_lahir.mm==2) {
        ket_bln="Februari";
    } else if (org.tgl_lahir.mm==3) {
        ket_bln="Maret";
    } else if (org.tgl_lahir.mm==4) {
        ket_bln="April";
    } else if (org.tgl_lahir.mm==5) {
        ket_bln="Mei";
    } else if (org.tgl_lahir.mm==6) {
        ket_bln="Juni";
    } else if (org.tgl_lahir.mm==7) {
        ket_bln="Juli";
    } else if (org.tgl_lahir.mm==8) {
        ket_bln="Agustus";
    } else if (org.tgl_lahir.mm==9) {
        ket_bln="September";
    } else if (org.tgl_lahir.mm==10) {
        ket_bln="Oktober";
    } else if (org.tgl_lahir.mm==11) {
        ket_bln="November";
    } else if (org.tgl_lahir.mm==12) {
        ket_bln="Desember";
    }

    cout << "Tanggal Lahir: "<< org.tgl_lahir.dd <<" "<< ket_bln /**org.tgl_lahir.mm**/ <<" "<< org.tgl_lahir.yy << endl;
    cout << "Umur: "<< hitung_umur(org) << endl;
    cout << endl;

    // YOUR CODE ENDS HERE
    //=================================================
}
