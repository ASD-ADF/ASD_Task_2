/**
    KELAS     : IF 39-06
    KELOMPOK  : 6
    NAMA(NIM) : [surya fachri idris nst][1301154230] , [sarah fauziah l][1301154552] , [abdul rahman safari][1301144380] , [nama][nim]
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
        if ((tgl.dd > 30) || (tgl.mm > 12)){
        ok = false;
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
        string bulan;
    switch (tgl.mm) {
        case 1 : bulan = "Januari";
        break;
        case 2 : bulan = "Februari";
        break;
        case 3 : bulan = "Maret";
        break;
        case 4 : bulan = "April";
        break;
        case 5 : bulan = "Mei";
        break;
        case 6 : bulan = "Juni";
        break;
        case 7 : bulan = "Juli";
        break;
        case 8 : bulan = "Agustus";
        break;
        case 9 : bulan = "September";
        break;
        case 10 : bulan = "Oktober";
        break;
        case 11 : bulan = "November";
        break;
        case 12 : bulan = "Desember";
        break;
    }

    cout << tgl.dd << " " << bulan << " "<< tgl.yy <<endl;

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
    //=================================================
    // YOUR CODE STARTS HERE
        int sh, sb;
    if ((tgl1.yy) == (tgl2.yy)) {

        sh = tgl1.dd - tgl2.dd;
        sb = tgl1.mm - tgl2.mm;
        if (sh < 0) {
            sh *= -1;
        }
        if (sb < 0) {
            sb *= -1;
        }
        selisih = ((sb * 30) + (sh));

    // YOUR CODE ENDS HERE
    //=================================================


}