/**
    KELAS     : IF-40-02
    KELOMPOK  : 1 (Satu)
    NAMA(NIM) : Fuad Zauqi Nur (1301164392), Indah Ayu Nur Fauziah (1301164004), Refin Heryanto (1301164324), Mohammad Izzauhaq Huda (1301160565)
**/

#include <string>
#include "tanggal.h"


tanggal create_tanggal(int dd,int mm,int yy)
{
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
    if ((tgl.dd <= 30) && (tgl.mm<=7) && (tgl.mm%2==1))
    {
        ok = true;
    }
    else if ((tgl.dd <= 30) && (tgl.mm <=12) && (tgl.mm%2==0))
    {
        ok = true;
    }
    else if ((tgl.dd <= 31) && (tgl.mm<=7) && (tgl.mm%2==0))
    {
        ok = true;
    }
    else if ((tgl.dd <= 31) && ((tgl.mm) <=12) && (tgl.mm%2==1))
    {
        ok = true;
    }
    else if ((tgl.dd == 29) && (tgl.dd == 28 ) && (tgl.mm==2) && (tgl.mm <=12) && (tgl.yy%4==0))
    {
        ok = true;
    }
    else
    {
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
    cout << tgl.dd << "/" << tgl.mm << "/" << tgl.yy << endl;
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

    // Jika tahun sama maka nilai selisih tetap -1
    if (tgl2.yy == tgl1.yy)
    {

        // Selisih hari
        selisih = tgl2.dd - tgl1.dd;
    }
    // YOUR CODE ENDS HERE
    //=================================================
    return selisih;

}
