/**
    KELAS     : IF 40-02
    KELOMPOK  : 8
    NAMA(NIM) : Andaresta Fauzan(1301164189), Mahendrawan Idris (1301164461), Ayu Wulandari (1301164104), M Hanur Yoga (1301164153)
**/

#include <string>
#include "tanggal.h"


tanggal create_tanggal(int dd,int mm,int yy) {
    /**
    * fungsi mengeset tanggal tgl dengan hari, bulan, dan tahun dan mengembalikan hasilnya
    **/

    tanggal tgl;
    //=================================================
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
    //=================================================
    // YOUR CODE STARTS HERE
    if ((tgl.mm == 2) && ((tgl.yy % 4) == 0)&& (tgl.dd > 29)){
        return(false);
    }
    else if ((tgl.mm == 2) && (tgl.dd > 28)) {
        return(false);
    }
    else if (((tgl.mm == 1) || (tgl.mm == 3 ) || (tgl.mm == 5) || (tgl.mm == 7) || (tgl.mm == 8) || (tgl.mm == 10) || (tgl.mm == 12)) && (tgl.dd > 31)){
        return(false);
    }
    else if ((((tgl.mm == 2) || (tgl.mm == 4) || (tgl.mm == 6) || (tgl.mm == 9) || (tgl.mm == 11)) && (tgl.dd > 30))) {
        return(false);
    }
    // YOUR CODE ENDS HERE
    //=================================================
    return ok;
}

void tampil_tanggal(tanggal tgl) {
    /**
    * fungsi menampilkan tanggal bulan tahun dengan format menampilkan nama bulan
    * contoh : 1 Januari 1980
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    if ((tgl.mm == 1)) {
        cout << tgl.dd << "Januari 19" <<tgl.yy;
    }
    else if ((tgl.mm == 2)) {
        cout << tgl.dd << "Februari 19" <<tgl.yy;
    }
     else if ((tgl.mm == 3)) {
        cout << tgl.dd << "Maret 19" <<tgl.yy;
    }
     else if ((tgl.mm == 4)) {
        cout << tgl.dd << "April 19" <<tgl.yy;
    }
     else if ((tgl.mm == 5)) {
        cout << tgl.dd << "Mei 19" <<tgl.yy;
    }
     else if ((tgl.mm == 6)) {
        cout << tgl.dd << "Juni 19" <<tgl.yy;
    }
     else if ((tgl.mm == 7)) {
        cout << tgl.dd << "Juli 19" <<tgl.yy;
    }
     else if ((tgl.mm == 8)) {
        cout << tgl.dd << "Agustus 19" <<tgl.yy;
    }
     else if ((tgl.mm == 9)) {
        cout << tgl.dd << "September 19" <<tgl.yy;
    }
     else if ((tgl.mm == 10)) {
        cout << tgl.dd << "Oktober 19" <<tgl.yy;
    }
     else if ((tgl.mm == 11)) {
        cout << tgl.dd << "November 19" <<tgl.yy;
    }
     else if ((tgl.mm == 12)) {
        cout << tgl.dd << "Desember 19" <<tgl.yy;
    }
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
    if ((tgl1.yy == tgl2.yy)) {
        selisih = tgl2.dd - tgl1.dd;
        return(selisih);
    }
    else{}

    // YOUR CODE ENDS HERE
    //=================================================
    return selisih;

}
