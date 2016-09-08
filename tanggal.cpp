/**
    KELAS     :
    KELOMPOK  :
    NAMA(NIM) : [nama][nim] , [nama][nim] , [nama][nim] , [nama][nim]
**/

#include <string>
#include "tanggal.h"
#define TIGASATU (X == 1) && (X

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
    int X = tgl.mm;
    int tanggalnya = 0;
    switch(tgl.mm)
    {
    case 1 :
        tanggalnya = 31;
        break;
    case 2 :
        tanggalnya = 28;
        break;
    case 3 :
        tanggalnya = 31;
        break;
    case 4 :
        tanggalnya = 30;
        break;
    case 5 :
        tanggalnya = 31;
        break;
    case 6 :
        tanggalnya = 30;
        break;
    case 7 :
        tanggalnya = 31;
        break;
    case 8 :
        tanggalnya = 31;
        break;
    case 9 :
        tanggalnya = 30;
        break;
    case 10 :
        tanggalnya = 31;
        break;
    case 11 :
        tanggalnya = 30;
        break;
    case 12 :
        tanggalnya = 31;
        break;
    }
    //=================================================
    // YOUR CODE STARTS HERE
    if ()

        // YOUR CODE ENDS HERE
        //=================================================
        return ok;
}

void show_tanggal(tanggal tgl)
{
    /**
    * fungsi menampilkan tanggal bulan tahun dengan format menampilkan nama bulan
    * contoh : 1 Januari 1980
    **/
    //=================================================
    // YOUR CODE STARTS HERE


    // YOUR CODE ENDS HERE
    //=================================================
}

void edit_tanggal(tanggal &tgl, int dd, int mm, int yy)
{
    /**
    * fungsi mengubah isi tanggal dari variabel tgl
    **/
    //=================================================
    // YOUR CODE STARTS HERE


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


    // YOUR CODE ENDS HERE
    //=================================================
    return selisih;

}
