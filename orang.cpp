/**
    KELAS     : IF-39-06
    KELOMPOK  : 4
    NAMA(NIM) : RAMA ADITYA MAULANA 1301150034, KHARISMA OKTAVIANING HERWANDA 1301154496, HUTOMO AJI 1301154384, RIZKI HIDAYATULLAH 1301154118
 **/

 #include "orang.h"

 orang create_orang(string nama, int tgl, int bln, int thn) {
    /**
    *fungsi mengeset orang org dengan nama, tgl, bln, thn, mengembalikan hasilnya
    *fungsi memanggil fungsi create_tanggal untuk membuat tanggal lahir
    **/
    orang org;
    //==================================================
    //YOUR CODE STARTS HERE
    org.nama = nama;
    org.tgl_lahir.dd = tgl;
    org.tgl_lahir.mm = bln;
    org.tgl_lahir.yy = thn;

    //YOUR CODE ENDS HERE
    //==================================================
    return org;
}

int hitung_umur(orang org) {
    /**
    *fungsi menghitung umur orang org berdasarkan tahun 2016
    **/
    int umur = 0;
    //==================================================
    //YOUR CODE ENDS HERE
    umur=2016-org.tgl_lahir.yy;
    return umur;
}

void show_orang(orang org) {
    /**
    *fungsi menampilkan nama, tanggal lahir dan umur orang org
    **/
    //==================================================
    //YOUR CODE STARTS HERE
        cout<<"Nama : "<<org.nama<<endl;
        cout<<"Tanggal Lahir : ";
        show_tanggal(org.tgl_lahir);
        cout<<endl;
        cout<<"Umur : "<<hitung_umur(org)<<endl;;

    //YOUR CODE ENDS HERE
    //==================================================
}
