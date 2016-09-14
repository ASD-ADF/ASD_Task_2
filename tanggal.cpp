/**
    KELAS     : IF 39-06
    KELOMPOK  : 4
    NAMA(NIM) : Hutomo Aji Prasetyo 1301154384, Rama Aditya Maulana 1301150034, Kharisma Oktavianing Herwanda 1301154496, Rizki Hidayatullah 1301154118
**/

#include <string>
#include "tanggal.h"

tanggal create_tanggal(int dd,int mm,int yy) {
    /**
    * fungsi mengeset tanggal tgl dengan hari, bulan, dan tahun dan mengembalikan hasilnya
    **/

    tanggal tgl;
    //=================================================
    // YOUR CODE STARTS HERE

    tgl.dd = dd;
    tgl.mm = mm;
    tgl.yy = yy;
    // YOUR CODE ENDS HERE
    //=================================================
    return tgl;
}

bool cek_tanggal(tanggal tgl) {
    /**
    * fungsi mengecek tanggal
    * fungsi mengembalikan nilai true jika isi tanggal sesuai dengan bulannya
    * fungsi mengembalikan nilai false jika isi tanggal atau bulan atau tahun salah
    **/
    bool ok = true;
    int bulan = tgl.mm;
    int tgl_sekarang = 0;
    //=================================================
    // YOUR CODE STARTS HERE
    if (bulan != tgl_sekarang || tgl_sekarang == 100){
        ok != ok;
    }

    // YOUR CODE ENDS HERE
    //=================================================
    return ok;
}

void show_tanggal(tanggal tgl) {
    /**
    * fungsi menampilkan tanggal bulan tahun dengan format menampilkan nama bulan
    * contoh : 1 Januari 1980
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    cout << tgl.dd;
    switch (tgl.mm){
case 1:
    cout <<"Januari";
    break;
case 2:
    cout <<"Februari";
    break;
case 3:
    cout <<"Maret";
    break;
case 4:
    cout <<"April";
    break;
case 5:
    cout <<"Mei";
    break;
case 6:
    cout <<"Juni";
    break;
case 7:
    cout <<"Juli";
    break;
case 8:
    cout <<"Agustus";
    break;
case 9:
    cout <<"September";
    break;
case 10:
    cout <<"Oktober";
    break;
case 11:
    cout <<"November";
    break;
case 12:
    cout <<"Desember";
    break;
default:
    cout <<"Bulan tidak sesuai";
}

cout << tgl.yy;
    // YOUR CODE ENDS HERE
    //=================================================
}

void edit_tanggal(tanggal &tgl, int dd, int mm, int yy) {
    /**
    * fungsi mengubah isi tanggal dari variabel tgl
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    cout<<"Tanggal sebelumnya       : ";
    show_tanggal(tgl);
    cout <<"Masukkan Tanggal Baru   : ";
    cin >> dd;
    cout <<"Masukkan Bulan Baru     : ";
    cin >> mm;
    cout <<"Masukkan Tahun Baru     : ";
    cin >> yy;

    tgl.dd = dd;
    tgl.mm = mm;
    tgl.yy = yy;

    cout <<"Tanggal telah berubah menjadi   : ";
    cout << tgl.dd <<" "<< tgl.mm <<" "<< tgl.yy;

    // YOUR CODE ENDS HERE
    //=================================================
}

int selisih_hari(tanggal tgl1, tanggal tgl2) {
    /**
    * fungsi menghitung selisih hari dari variable tgl1 dan tgl2
    * fungsi selalu mengembalikan selisih dalam nilai positif
    * syarat tahun tgl1 dan tgl2 harus sama
    * jika tahun pada tgl1 berbeda dengan tgl2, maka fungsi mengembalikan nilai -1
    **/
    int selisih = -1;
    //=================================================
    // YOUR CODE STARTS HERE
    if (o1.tgl_lahir.yy != o2.tgl_lahir.yy){
        cout <<"Tahun lahir harus sama, harap masukkan kembali tahun lahir yg sama";
    }else{
        cout <<"Selisih hari : "<<selisih_hari(o1.tgl_lahir,o2.tgl_lahir)<<" hari "<<endl;
    }
    while (o1.tgl_lahir.yy != o2.tgl_lahir.yy);


    // YOUR CODE ENDS HERE
    //=================================================
    return selisih;

}
