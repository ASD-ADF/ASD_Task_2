/**
    KELAS     : IF-40-02
    KELOMPOK  : 10
    NAMA(NIM) : [Try Arie Rahmat Insani][1301164513], [Ranggha Adytia][1301164017], [Javiar Fasyah][1301164477], [Rani Sari Murti][1301160544], [Dianita Yustika Sari][1301164349]
**/

#include <string>
#include "tanggal.h"

using namespace std;

tanggal create_tanggal(int dd,int mm,int yy)
{
    /**
    * fungsi mengeset tanggal tgl dengan hari, bulan, dan tahun dan mengembalikan hasilnya
    **/

    tanggal tgl;
    //=================================================
    // YOUR CODE STARTS HERE

    tgl.dd   = dd;
    tgl.mm   = mm;
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

    if (tgl.mm == 1)
    {
        if (tgl.dd > 31)
        {
            ok = false;
        }
    }

    if (tgl.mm == 2)
    {
        if (tgl.dd > 29)
        {
            ok = false;
        }
    }

    if (tgl.mm == 3)
    {
        if (tgl.dd > 31)
        {
            ok = false;
        }
    }

    if (tgl.mm == 4)
    {
        if (tgl.dd > 30)
        {
            ok = false;
        }
    }

    if (tgl.mm == 5)
    {
        if (tgl.dd > 31)
        {
            ok = false;
        }
    }

    if (tgl.mm == 6)
    {
        if (tgl.dd > 30)
        {
            ok = false;
        }
    }

    if (tgl.mm == 7)
    {
        if (tgl.dd > 31)
        {
            ok = false;
        }
    }

    if (tgl.mm == 8)
    {
        if (tgl.dd > 31)
        {
            ok = false;
        }
    }

    if (tgl.mm == 9)
    {
        if (tgl.dd > 30)
        {
            ok = false;
        }
    }

    if (tgl.mm == 10)
    {
        if (tgl.dd > 31)
        {
            ok = false;
        }
    }

    if (tgl.mm == 11)
    {
        if (tgl.dd > 30)
        {
            ok = false;
        }
    }

    if (tgl.mm == 12)
    {
        if (tgl.dd > 31)
        {
            ok = false;
        }
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

    switch(tgl.mm)
    {
    case 1 :
        cout << tgl.dd << " Januari " << tgl.yy << endl;

    case 2 :
        cout << tgl.dd << " Februari " << tgl.yy << endl;

    case 3 :
        cout << tgl.dd << " Maret " << tgl.yy << endl;

    case 4 :
        cout << tgl.dd << " April " << tgl.yy << endl;

    case 5 :
        cout << tgl.dd << " Mei " << tgl.yy << endl;

    case 6 :
        cout << tgl.dd << " Juni " << tgl.yy << endl;

    case 7 :
        cout << tgl.dd << " Juli " << tgl.yy << endl;

    case 8 :
        cout << tgl.dd << " Agustus " << tgl.yy << endl;

    case 9 :
        cout << tgl.dd << " September " << tgl.yy << endl;

    case 10 :
        cout << tgl.dd << " Oktober " << tgl.yy << endl;

    case 11 :
        cout << tgl.dd << " November " << tgl.yy << endl;

    case 12 :
        cout << tgl.dd << " Desember " << tgl.yy << endl;
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

    if (tgl1.yy == tgl2.yy)
    {
        selisih = tgl2.dd - tgl1.dd;
    }

    // YOUR CODE ENDS HERE
    //=================================================
    return selisih;

}
