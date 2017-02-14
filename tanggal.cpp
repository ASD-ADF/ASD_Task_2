/**
    KELAS     : IF-40-02
    KELOMPOK  : 7
    NAMA(NIM) : [Seiba Shonia][1301164249] , [Wira Aditama][1301164068] , [Riandi Kartiko][1301164300] , [Ery Defriyanto S][1301164129]
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
    if (tgl.mm = 1){
        if (tgl.dd > 31){
            ok = false;
        }
    }
    else if (tgl.mm = 2){
        if (tgl.dd > 28){
            ok = false;
        }
    }
    else if (tgl.mm = 3){
        if (tgl.dd > 31){
            ok = false;
        }
    }
    else if (tgl.mm = 4){
        if (tgl.dd > 30){
            ok = false;
        }
    }
    else if (tgl.mm = 5){
        if (tgl.dd > 31){
            ok = false;
        }
    }
    else if (tgl.mm = 6){
        if (tgl.dd > 30){
            ok = false;
        }
    }
    else if (tgl.mm = 7){
        if (tgl.dd > 31){
            ok = false;
        }
    }
    else if (tgl.mm = 8){
        if (tgl.dd > 31){
            ok = false;
        }
    }
    else if (tgl.mm = 9){
        if (tgl.dd > 30){
            ok = false;
        }
    }
    else if (tgl.mm = 10){
        if (tgl.dd > 31){
            ok = false;
        }
    }
    else if (tgl.mm = 11){
        if (tgl.dd > 30){
            ok = false;
        }
    }
    else if (tgl.mm = 12){
        if (tgl.dd > 31){
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
    switch(tgl.mm){
        case 1:
            tgl.mm1 = " Januari ";
            cout << tgl.dd << tgl.mm1 << tgl.yy;
        case 2:
            tgl.mm1 = " Februari ";
            cout << tgl.dd << tgl.mm1 << tgl.yy;
        case 3:
            tgl.mm1 = " Maret ";
            cout << tgl.dd << tgl.mm1 << tgl.yy;
        case 4:
            tgl.mm1 = " April ";
            cout << tgl.dd << tgl.mm1 << tgl.yy;
        case 5:
            tgl.mm1 = " Mei ";
            cout << tgl.dd << tgl.mm1 << tgl.yy;
        case 6:
            tgl.mm1 = " Juni ";
            cout << tgl.dd << tgl.mm1 << tgl.yy;
        case 7:
            tgl.mm1 = " Juli ";
            cout << tgl.dd << tgl.mm1 << tgl.yy;
        case 8:
            tgl.mm1 = " Agustus ";
            cout << tgl.dd << tgl.mm1 << tgl.yy;
        case 9:
            tgl.mm1 = " September ";
            cout << tgl.dd << tgl.mm1 << tgl.yy;
        case 10:
            tgl.mm1 = " Oktober ";
            cout << tgl.dd << tgl.mm1 << tgl.yy;
        case 11:
            tgl.mm1 = " November ";
            cout << tgl.dd << tgl.mm1 << tgl.yy;
        case 12:
            tgl.mm1 = " Desember ";
            cout << tgl.dd << tgl.mm1 << tgl.yy;
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
    if (tgl1.yy == tgl2.yy){
        selisih = (tgl2.dd - tgl1.dd);
    }
    // YOUR CODE ENDS HERE
    //=================================================
    return selisih;

}
