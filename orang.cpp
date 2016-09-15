/**
    KELAS     : IF-39-01
    KELOMPOK  : 10
    NAMA(NIM) : [Anjar Afrizal][1301154239] , [Fahru Adi Ramadhan][nim] , [Fauzi Kurniawan][nim] , [Regita Ratih][nim]
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
    tanggal tgl_lahir = create_tanggal(tgl,bln,thn);
    org.tgl_lahir = tgl_lahir;

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
    cout << "Nama anda          : "<<org.nama<<endl;
    cout << "Tanggal Lahir Anda : ";
    show_tanggal(org.tgl_lahir);
    cout << "Umur anda          : "<<hitung_umur(org)<< endl;


    // YOUR CODE ENDS HERE
    //=================================================
}
