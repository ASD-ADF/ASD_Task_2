/**
    KELAS     : IF 40-02
    KELOMPOK  : 2
    NAMA(NIM) : [Muh. Hatta Eka Putra][1301160444] , [Rifki Mifathur Sutomo][1301164225] , [Fahmi Hidayat][1301164312] , [Elsya Putri Sutomo][1301160201]
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


    if ((tgl.mm == 1) && (tgl.dd <= 31))
    {
        ok = true;
    }
    else if ((tgl.mm == 2) && (tgl.dd <= 28))
    {
        ok = true;
    }
    else if ((tgl.mm == 3) && (tgl.dd <= 31))
    {
        ok = true;
    }
    else if ((tgl.mm == 4) && (tgl.dd <= 30))
    {
        ok = true;
    }
    else if ((tgl.mm == 5) && (tgl.dd <= 31))
    {
        ok = true;
    }
    else if ((tgl.mm == 6) && (tgl.dd <= 30))
    {
        ok = true;
    }
    else if ((tgl.mm == 7) && (tgl.dd <= 31))
    {
        ok = true;
    }
    else if ((tgl.mm == 8) && (tgl.dd <= 30))
    {
        ok = true;
    }
    else if ((tgl.mm == 9) && (tgl.dd <= 31))
    {
        ok = true;
    }
    else if ((tgl.mm == 10) && (tgl.dd <= 30))
    {
        ok = true;
    }
    else if ((tgl.mm == 11) && (tgl.dd <= 31))
    {
        ok = true;
    }
    else if ((tgl.mm == 12) && (tgl.dd <= 30))
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

    string bulan;

    if (tgl.mm == 1)
    {
        bulan = "Januari";
    }
    else if (tgl.mm == 2)
    {
        bulan = "Februari";
    }
    else if (tgl.mm == 3)
    {
        bulan = "Maret";
    }
    else if (tgl.mm == 4)
    {
        bulan = "April";
    }
    else if (tgl.mm == 5)
    {
        bulan = "Mei";
    }
    else if (tgl.mm == 6)
    {
        bulan = "Juni";
    }
    else if (tgl.mm == 7)
    {
        bulan = "Juli";
    }
    else if (tgl.mm == 8)
    {
        bulan = "Agustus";
    }
    else if (tgl.mm == 9)
    {
        bulan = "September";
    }
    else if (tgl.mm == 10)
    {
        bulan = "Oktober";
    }
    else if (tgl.mm == 11)
    {
        bulan = "November";
    }
    else
    {
        bulan = "Desember";
    }

    cout<<tgl.dd<<" "<<bulan<<" "<<tgl.yy<<endl;


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



    if (tgl1.yy == tgl2.yy && tgl1.mm == tgl2.mm)
    {
        selisih = tgl2.dd - tgl1.dd;
    }

    // YOUR CODE ENDS HERE
    //=================================================
    return selisih;

}
