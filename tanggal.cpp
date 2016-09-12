/**
    KELAS     : IF 39-06
    KELOMPOK  : 8
    NAMA(NIM) : [Aziza Hayupratiwi][1301150440] , [M. Luthfi A.S][1301154328] , [Rafi][nim] , [nama][nim]
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
    //February
    if (tgl.mm == 2) {
        if (tgl.yy % 4 == 0) {
            if (tgl.dd <=29 ) {
                ok = true;
            } else {
                ok = false;
            }
        } else {
            if (tgl.dd <= 28) {
                ok = true;
            } else {
                ok = false;
            }
        }
    }

    //Tanggal 30
    else if ((tgl.mm == 4) || (tgl.mm == 6) || (tgl.mm == 9) || (tgl.mm == 11)) {
        if (tgl.dd <= 30) {
            ok = true;
        } else {
            ok = false;
        }
    }

    //Tanggal 31
    else {
        if(tgl.dd <= 31) {
            ok = true;
        } else {
            ok = false;
        }
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
    cout << tgl.dd <<" "<< tgl.mm <<" "<< tgl.yy << endl;

    // YOUR CODE ENDS HERE
    //=================================================
}

void edit_tanggal(tanggal &tgl, int dd, int mm, int yy) {
    /**
    * fungsi mengubah isi tanggal dari variabel tgl
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    tgl.dd = dd;
    tgl.mm = mm;
    tgl.yy = yy;

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
    int tot_Bulan, tot_Hari;
    //=================================================
    // YOUR CODE STARTS HERE

    if (tgl1.yy == tgl2.yy) {
        if (tgl1.mm == 2) {
            if (tgl1.yy % 4 ==0) {
                tot_Bulan=abs((tgl1.mm-tgl2.mm)*29);
                tot_Hari=abs(tgl1.dd-tgl2.dd);
                selisih=tot_Bulan+tot_Hari;
            } else {
                tot_Bulan=abs((tgl1.mm-tgl2.mm)*28);
                tot_Hari=abs(tgl1.dd-tgl2.dd);
                selisih=tot_Bulan+tot_Hari;
            }
        } else if ((tgl1.mm == 4) || (tgl1.mm == 6) || (tgl1.mm == 9) || (tgl1.mm == 11) || (tgl2.mm == 4) || (tgl2.mm == 6) || (tgl2.mm == 9) || (tgl2.mm == 11)) {
            tot_Bulan=abs((tgl1.mm-tgl2.mm)*30);
            tot_Hari=abs(tgl1.dd-tgl2.dd);
            selisih=tot_Bulan+tot_Hari;
        } else if ((tgl1.mm == 1) || (tgl1.mm == 3) || (tgl1.mm == 5) || (tgl1.mm == 7) || (tgl1.mm == 8) || (tgl1.mm == 10) || (tgl1.mm == 12) || (tgl2.mm == 1) || (tgl2.mm == 3) || (tgl2.mm == 5) || (tgl2.mm == 7) || (tgl2.mm == 8) || (tgl2.mm == 10) || (tgl2.mm == 12)) {
            tot_Bulan=abs((tgl1.mm-tgl2.mm)*31);
            tot_Hari=abs(tgl1.dd-tgl2.dd);
            selisih=tot_Bulan+tot_Hari;
        }
    } else {
        selisih = -1;
    }
    // YOUR CODE ENDS HERE
    //=================================================
    return selisih;

}
