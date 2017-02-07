/**
    KELAS     : IF 40-02
    KELOMPOK  : 9
    NAMA(NIM) : [HANAFI ABDULLAH GUSMAN][1301160362] , [MUCHAMMAD FAJAR ALIF][1301164274] , [ISNAN AKBAR IBRAHIM][1301164490] , [ANDINI SALIMAH][1301164080]
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
    } else {
        ok = false;
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
    switch(tgl.mm) {
        case 1 :
            cout << tgl.dd << "/ JANUARI / " << tgl.yy;
            break;
        case 2 :
            cout << tgl.dd << "/  FEBUARI / " << tgl.yy;
            break;
        case 3 :
            cout << tgl.dd << "/ MARET / " << tgl.yy;
            break;
        case 4 :
            cout << tgl.dd << "/ APRIL / " << tgl.yy;
            break;
        case 5 :
            cout << tgl.dd << "/ MEI / " << tgl.yy;
            break;
        case 6 :
            cout << tgl.dd << "/ JUNI / " << tgl.yy;
            break;
        case 7 :
            cout << tgl.dd << "/ JULI / " << tgl.yy;
            break;
        case 8 :
            cout << tgl.dd << "/ AGUSTUS / " << tgl.yy;
            break;
        case 9 :
            cout << tgl.dd << "/ SEPTEMBER / " << tgl.yy;
            break;
        case 10 :
            cout << tgl.dd << "/ OKTOBER / " << tgl.yy;
            break;
        case 11 :
            cout << tgl.dd << "/ NOVEMBER / " << tgl.yy;
            break;
        case 12 :
            cout << tgl.dd << "/ DESEMBER / " << tgl.yy;
            break;
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
    if(tgl1.yy == tgl2.yy) {
        selisih = tgl2.dd - tgl1.dd;
    }
    // YOUR CODE ENDS HERE
    //=================================================
    return selisih;

}
