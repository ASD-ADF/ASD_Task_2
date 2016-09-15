/**
    KELAS     : IF 39-01
    KELOMPOK  : 11
    NAMA(NIM) : [Firhan Wibianto][1301154099] , [Egriano ][13011540043] , [Bintang Aryo Dharmawan][1301140010] , [Debora N Silaban][13011540575]
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
    tgl.dd=dd;
    tgl.mm=mm;
    tgl.yy=yy;

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
    if(tgl.mm>=13)
    {
        ok=false;
    }
    else if (((tgl.mm=1)&&(tgl.dd>0)&&(tgl.dd<=31))||
             ((tgl.mm=2)&&(tgl.dd>0)&&(tgl.dd<=28)&&(tgl.yy%4!=0))||
             ((tgl.mm=2)&&(tgl.dd>0)&&(tgl.dd<=29))||
             (tgl.mm=3&&(tgl.dd>0)&&(tgl.dd<=31))||
             ((tgl.mm=4)&&(tgl.dd>0)&&(tgl.dd<=30))||
             ((tgl.mm=5)&&(tgl.dd>0)&&(tgl.dd<=31))||
             ((tgl.mm=6)&&(tgl.dd>0)&&(tgl.dd<=30))||
             ((tgl.mm=7)&&(tgl.dd>0)&&(tgl.dd<=31))||
             ((tgl.mm=8)&&(tgl.dd>0)&&(tgl.dd<=31))||
             ((tgl.mm=9)&&(tgl.dd>0)&&(tgl.dd<=30))||
             ((tgl.mm=10)&&(tgl.dd>0)&&(tgl.dd<=31))||
             ((tgl.mm=11)&&(tgl.dd>0)&&(tgl.dd<=30))||
             ((tgl.mm=12)&&(tgl.dd>0)&&(tgl.dd<=31)))
    {
        ok=true;
    }

    else
    {
        ok=false;
    }

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

    cout << tgl.dd << " ";
    switch(tgl.mm)
    {
    case 1 :
        cout << "Januari ";
        break;
    case 2 :
        cout << "Februari ";
        break;
    case 3 :
        cout << "Maret ";
        break;
    case 4 :
        cout << "April ";
        break;
    case 5 :
        cout << "Mei ";
        break;
    case 6 :
        cout << "Juni ";
        break;
    case 7 :
        cout << "Juli ";
        break;
    case 8 :
        cout << "Agustus ";
        break;
    case 9 :
        cout << "September ";
        break;
    case 10 :
        cout << "Oktober ";
        break;
    case 11 :
        cout << "November ";
        break;
    case 12 :
        cout << "Desember ";
        break;
    }
    cout << tgl.yy;


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

    tgl.dd = dd;
    tgl.mm = mm;
    tgl.yy = yy;

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

    int A,B;
    if (tgl1.yy == tgl2.yy)
    {
        A = 0;
        B = 0;
        for (int i=0; i<=tgl1.mm; i++)
        {
            A +=bulankehari(i,tgl1.yy);

        }
        for (int i = 0; i<=tgl2.mm; i++)
            B +=bulankehari(i,tgl2.yy);
        A += tgl1.dd;
        B += tgl2.dd;
        selisih = B-A;
        if (selisih < 0)
            selisih *= -1;
    }

    // YOUR CODE ENDS HERE
    //=================================================
    return selisih;

}

int bulankehari(int A,int B)
{
    int tglnya = 0;
    switch(A)
    {
    case 1 :
        tglnya = 31;
        break;
    case 2 :
        tglnya = 31;
        break;
    case 3 :
        if (B % 4 == 0)
            tglnya = 29;
        else
            tglnya = 28;
        break;
    case 4 :
        tglnya = 31;
        break;
    case 5 :
        tglnya = 30;
        break;
    case 6 :
        tglnya = 31;
        break;
    case 7 :
        tglnya = 30;
        break;
    case 8 :
        tglnya = 31;
        break;
    case 9 :
        tglnya = 31;
        break;
    case 10 :
        tglnya = 30;
        break;
    case 11 :
        tglnya = 31;
        break;
    case 12 :
        tglnya = 0 ;
        break;
    default :
        tglnya = 999;
        break;
    }

    return tglnya;
}
