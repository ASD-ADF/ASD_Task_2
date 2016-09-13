/**
    KELAS     : IF 39-06
    KELOMPOK  : 9
    NAMA(NIM) : [M.Yusuf Faishal][1301154174] , [Ni Putu Surya Febyanti Kusumadewi][1301154482] , [Wilson Immanuel Antonio][1301154104]
**/


#include "orang.h"

orang create_orang(string nama, int tgl, int bln, int thn) {
    /**
    * fungsi mengeset orang org dengan nama, tgl, bln, thn, dan mengembalikan hasilnya
    * fungsi memanggil fungsi create_tanggal untuk membuat tanggal lahir
    **/
    orang org;
    //=================================================
    org.nama=nama;
    org.tgl_lahir = create_tanggal(tgl,bln,thn);
    //=================================================
    return org;
}

int hitung_umur(orang org) {
    /**
    * fungsi menghitung umur orang org berdasarkan tahun 2016
    **/
    int umur = 0;
    //=================================================
    umur = (2016-org.tgl_lahir.yy);
    //=================================================
    return umur;
}

void show_orang(orang org) {
    /**
    * fungsi menampilkan nama, tanggal lahir dan umur orang org
    **/
    //=================================================
    cout<< "Nama anda : ";
    cout<<org.nama<<endl;

    cout<< "Tanggal lahir anda : ";
    cout<<org.tgl_lahir.dd;
    show_tanggal (org.tgl_lahir);
    cout<<org.tgl_lahir.yy<<endl;

    cout<< "Umur anda :";
    cout<<hitung_umur(org)<<endl;
    //=================================================
}
