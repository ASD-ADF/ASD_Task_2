/**
    KELAS     : IF 39-06
    KELOMPOK  : 2
    NAMA(NIM) : [Amin][1301154398] , [Alfin Pratama S][1301154342] , [Hafizh][1301154272] , [Bella][1301154637]
**/


#include "orang.h"

orang create_orang(string nama, int tgl, int bln, int thn)
{
    /**
    * fungsi mengeset orang org dengan nama, tgl, bln, thn, dan mengembalikan hasilnya
    * fungsi memanggil fungsi create_tanggal untuk membuat tanggal lahir
    **/
    orang org;
    //=================================================
    // YOUR CODE STARTS HERE
    org.nama = nama;
    tanggal tanggal_lahir = create_tanggal (tgl,bln,thn);
    org.tgl_lahir = tanggal_lahir;

    // YOUR CODE ENDS HERE
    //=================================================
    return org;
}

int hitung_umur(orang org)
{
    /**
    * fungsi menghitung umur orang org berdasarkan tahun 2016
    **/
    int umur = 0;
    //=================================================
    // YOUR CODE STARTS HERE
    umur = 2016 - org.tgl_lahir.thn;

    // YOUR CODE ENDS HERE
    //=================================================
    return umur;
}

void show_orang(orang org)
{
    /**
    * fungsi menampilkan nama, tanggal lahir dan umur orang org
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    cout<<org.nama<<" ";
    cout<<org.tgl_lahir.tgl<<" ";
    cout<<org.tgl_lahir.bln<<" ";
    cout<<org.tgl_lahir.thn<<" ";
    cout<<hitung_umur(org)<<" ";

    // YOUR CODE ENDS HERE
    //=================================================
}
