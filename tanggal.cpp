/**
    KELAS     : IF-39-06
    KELOMPOK  :
    NAMA(NIM) : [Faishal Rachman][1301154160] , [nama][nim] , [nama][nim] , [nama][nim]
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
    int X = tgl.mm;
    int tanggalnya = 0;

    //=================================================
    // YOUR CODE STARTS HERE
    if (X != tanggalnya || tanggalnya == 999)
        ok = !ok;


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
    default :
        cout << "ERROR";
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
    cout << "Tanggal sebelumnya : ";
    show_tanggal(tgl);
    cout << endl;
    cout << "Tanggal baru : ";
    cin >> dd;
    cout << "Bulan baru : ";
    cin >> mm;
    cout << "Tahun baru : ";
    cin >> yy;
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
    int A,B;
    //=================================================
    // YOUR CODE STARTS HERE
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

int bulankehari(int A, int B)
{
    int tanggalnya = 0;
    switch(A)
    {
    case 1 :
        tanggalnya = 31;
        break;
    case 2 :
        tanggalnya = 31;
        break;
    case 3 :
        if (B % 4 == 0)
            tanggalnya = 29;
        else
            tanggalnya = 28;
        break;
    case 4 :
        tanggalnya = 31;
        break;
    case 5 :
        tanggalnya = 30;
        break;
    case 6 :
        tanggalnya = 31;
        break;
    case 7 :
        tanggalnya = 30;
        break;
    case 8 :
        tanggalnya = 31;
        break;
    case 9 :
        tanggalnya = 31;
        break;
    case 10 :
        tanggalnya = 30;
        break;
    case 11 :
        tanggalnya = 31;
        break;
    case 12 :
        tanggalnya = 0 ;
        break;
    default :
        tanggalnya = 999;
        break;
    }

    return tanggalnya;
}
