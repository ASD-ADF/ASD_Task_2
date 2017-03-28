/**
    KELAS     : IF 40-02
    KELOMPOK  : 8
    NAMA(NIM) : Andaresta Fauzan(1301164189), Mahendrawan Idris (1301164461), Ayu Wulandari (1301164104), M Hanur Yoga (1301164153)
**/

#include <string>
#include "tanggal.h"


tanggal create_tanggal(int dd,int mm,int yy)
{
    /**
    * fungsi mengeset tanggal tgl dengan hari, bulan, dan tahun dan mengembalikan hasilnya
    **/

    tanggal tgl;//tanggal = tgl
    //=================================================
    // YOUR CODE STARTS HERE

    tgl.dd = dd;
    tgl.mm = mm;
    tgl.yy = yy;
    // YOUR CODE ENDS HERE
    //=================================================
    return tgl;
}

bool cek_tanggal(tanggal tgl)
{
    /**
    * fungsi mengecek tanggal
    * fungsi mengembalikan nilai true jika isi tanggal sesuai dengan bulannya
    * fungsi mengembalikan nilai false jika isi tanggal atau bulan atau tahun salah
    **/
    bool ok = true;
    //=================================================
    // YOUR CODE STARTS HERE
    if(tgl.mm == 1) {
        if(tgl.dd > 31) {
            ok = false;
        }
    }
    else if(tgl.mm == 2) {
        if(tgl.dd > 29) {
            ok = false;
        }
    }
    else if(tgl.mm == 3) {
        if(tgl.dd > 30) {
            ok = false;
        }
    }
    else if(tgl.mm == 4) {
        if(tgl.dd > 31) {
            ok = false;
        }
    }
    else if(tgl.mm == 5) {
        if(tgl.dd > 30) {
            ok = false;
        }
    }
    else if(tgl.mm == 6) {
        if(tgl.dd > 31) {
            ok = false;
        }
    }
    else if(tgl.mm == 7) {
        if(tgl.dd > 30) {
            ok = false;
        }
    }
    else if(tgl.mm == 8) {
        if(tgl.dd > 31) {
            ok = false;
        }
    }
    else if(tgl.mm == 9) {
        if(tgl.dd > 31) {
            ok = false;
        }
    }
    else if(tgl.mm == 10) {
        if(tgl.dd > 30) {
            ok = false;
        }
    }
    else if(tgl.mm == 11) {
        if(tgl.dd > 30) {
            ok = false;
        }
    }
    else if(tgl.mm == 12) {
        if(tgl.dd > 31) {
            ok = false;
        }
    }
    else {
        ok = false;
    }
    // YOUR CODE ENDS HERE
    //=================================================
    return ok;
}

void tampil_tanggal(tanggal tgl)
{
    /**
    * fungsi menampilkan tanggal bulan tahun dengan format menampilkan nama bulan
    * contoh : 1 Januari 1980
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    switch(tgl.mm)
    {
case 1 : cout << tgl.dd << "/" << "Januari"<< tgl.yy;
case 2 : cout << tgl.dd << "/" << "Februari"<< tgl.yy;
case 3 : cout << tgl.dd << "/" << "Maret" << tgl.yy;
case 4 : cout << tgl.dd << "/" << "April"<< tgl.yy;
case 5 : cout << tgl.dd << "/" << "Mei"<< tgl.yy;
case 6 : cout << tgl.dd << "/" << "Juni"<< tgl.yy;
case 7 : cout << tgl.dd << "/" << "Juli"<< tgl.yy;
case 8 : cout << tgl.dd << "/" << "Agustus"<< tgl.yy;
case 9 : cout << tgl.dd << "/" << "September"<< tgl.yy;
case 10: cout << tgl.dd << "/" << "Oktober"<< tgl.yy;
case 11: cout << tgl.dd << "/" << "November"<< tgl.yy;
case 12:cout << tgl.dd << "/" << "Desember"<< tgl.yy;

    }

    // YOUR CODE ENDS HERE
    //=================================================
}

int selisih_hari(tanggal tgl1, tanggal tgl2)
{
    /**
    * fungsi menghitung selisih hari dari variable tgl1 dan tgl2
    * fungsi selalu mengembalikan selisih dalam nilai positif
    * syarat tahun tgl1 dan tgl2 harus sama
    * jika tahun pada tgl1 berbeda dengan tgl2, maka fungsi mengembalikan nilai -1
    **/
    int selisih = -1;
    //=================================================
    // YOUR CODE STARTS HERE
    if (tgl1.yy = tgl2.yy)
    {
        selisih =  tgl2.dd - tgl1.dd;
    }

    // YOUR CODE ENDS HERE
    //=================================================
    return selisih;

}
