/**
    KELAS     :IF 40 02
    KELOMPOK  : 6
    NAMA(NIM) : [Ibnu][1301164177] , [reynaldi s][1301164141] , [Falia Amalia][1301164602] , [Hilmi Triandi][nim]
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
    //=================================================
    // YOUR CODE STARTS HERE
    if (tgl.mm==1){
        if (tgl.dd<31){
            ok = true;
        }
        else {
            ok = false;
        }
    }
    else if (tgl.mm==2){
        if (tgl.dd<28){
            ok = true;
        }
        else {
            ok = false;
        }
    }
    else if (tgl.mm==3){
        if (tgl.dd<31){
            ok = true;
        }
        else {
            ok = false;
        }
    }
    else if (tgl.mm==4){
        if (tgl.dd<30){
            ok = true;
        }
        else {
            ok = false;
        }
    }
    else if (tgl.mm==5){
        if (tgl.dd<31){
            ok = true;
        }
        else {
            ok = false;
        }
    }
    else if (tgl.mm==6){
        if (tgl.dd<30){
            ok = true;
        }
        else {
            ok = false;
        }
    }
    else if (tgl.mm==7){
        if (tgl.dd<31){
            ok = true;
        }
        else {
            ok = false;
        }
    }
    else if (tgl.mm==8){
        if (tgl.dd<31){
            ok = true;
        }
        else {
            ok = false;
        }
    }
    else if (tgl.mm==9){
        if (tgl.dd<30){
            ok = true;
        }
        else {
            ok = false;
        }
    }
    else if (tgl.mm==10){
        if (tgl.dd<31){
            ok = true;
        }
        else {
            ok = false;
        }
    }
    else if (tgl.mm==11){
        if (tgl.dd<30){
            ok = true;
        }
        else {
            ok = false;
        }
    }
    else if (tgl.mm==12){
        if (tgl.dd<31){
            ok = true;
        }
        else {
            ok = false;
        }
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
    string con;
    if (tgl.mm==1){
        con = "Januari";
    }
    else if (tgl.mm==2){
        con = "Februari";
    }
    else if (tgl.mm==3){
        con = "Maret";
    }
    else if (tgl.mm==4){
        con = "April";
    }
    else if (tgl.mm==5){
        con = "Mei";
    }
    else if (tgl.mm==6){
        con = "Juni";
    }
    else if (tgl.mm==7){
        con = "Juli";
    }
    else if (tgl.mm==8){
        con = "Agustus";
    }
    else if (tgl.mm==9){
        con = "September";
    }
    else if (tgl.mm==10){
        con = "Oktober";
    }
    else if (tgl.mm==11){
        con = "November";
    }
    else if (tgl.mm==12){
        con = "Desember";
    }

    cout<<tgl.dd<<" "<<con<<" "<<tgl.yy;
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


    // YOUR CODE ENDS HERE
    //=================================================
    return selisih;

}
