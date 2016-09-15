/**
    KELAS     : IF-39-01
    KELOMPOK  : 3
    NAMA(NIM) : [Sugianto][1301154407] , [Abram][1301154169] , [Elza Fitria][1301154533] , [Muhammad Turmudzi][1301154667]
**/

#include <string>
#include "tanggal.h"

tanggal create_tanggal(int dd,int mm,int yy) {
    /**
    * fungsi mengeset tanggal tgl dengan hari, bulan, dan tahun dan mengembalikan hasilnya
    **/

    tanggal tgl;
    cout << "Masukkan Tanggal : ";
    cin >> tgl.dd;
    cout << endl;;
    cout << "Masukkan Bulan : ";
    cin >> tgl.mm ;
    cout << endl;
    cout << "Masukkan Tahun : ";
    cin >> tgl.dd ;
    cout << endl;
    return tgl;
}

bool cek_tanggal(tanggal tgl) {
    /**
    * fungsi mengecek tanggal
    * fungsi mengembalikan nilai true jika isi tanggal sesuai dengan bulannya
    * fungsi mengembalikan nilai false jika isi tanggal atau bulan atau tahun salah
    **/
    bool ok = true;
    int total_h[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (tgl.yy % 4 == 0)
    {
        total_h[1] = 29;
    }
    if (tgl.dd > total_h[tgl.mm-1] || tgl.yy<0 || tgl.dd<0 || tgl.mm <0 || tgl.mm>12)
    {
        ok = false;
    }
    return ok;
}

void show_tanggal(tanggal tgl) {
    /**
    * fungsi menampilkan tanggal bulan tahun dengan format menampilkan nama bulan
    * contoh : 1 Januari 1980
    **/
    cout << tgl.dd;
    switch (tgl.mm){
    case 1 : cout << " Januari ";break;
    case 2 : cout << " Februari ";break;
    case 3 : cout << " Maret ";break;
    case 4 : cout << " April ";break;
    case 5 : cout << " Mei ";break;
    case 6 : cout << " Juni ";break;
    case 7 : cout << " Juli ";break;
    case 8 : cout << " Agustus ";break;
    case 9 : cout << " September ";break;
    case 10 : cout << " Oktober ";break;
    case 11 : cout << " November ";break;
    case 12 : cout << " Desember ";break;
    }
    cout << tgl.yy;
}

void edit_tanggal(tanggal &tgl, int dd, int mm, int yy) {
    /**
    * fungsi mengubah isi tanggal dari variabel tgl
    **/
    cout << "Masukkan Tanggal : ";
    cin >> tgl.dd ;
    cout << endl;
    cout << "Masukkan Bulan : ";
    cin >> tgl.mm ;
    cout << endl;
    cout << "Masukkan Tahun : ";
    cin >> tgl.dd ;
    cout<< endl;
}

int selisih_hari(tanggal tgl1, tanggal tgl2) {
    /**
    * fungsi menghitung selisih hari dari variable tgl1 dan tgl2
    * fungsi selalu mengembalikan selisih dalam nilai positif
    * syarat tahun tgl1 dan tgl2 harus sama
    * jika tahun pada tgl1 berbeda dengan tgl2, maka fungsi mengembalikan nilai -1
    **/
    int selisih = 0;
    int total_h[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (tgl1.yy % 4 == 0)
    {
        total_h[1] = 29;
    };
    if (tgl1.yy == tgl2.yy)
    {
        if (tgl1.mm > tgl2.mm)
        {
            for (int i = (tgl1.mm-1) ;i>(tgl2.mm-1);i--)
            {
                selisih = selisih + total_h[i] ;
            }
        }
        else
        {
            for (int i = (tgl2.mm -1);i>(tgl1.mm-1);i--)
            {
                selisih = selisih + total_h[i];
            };
        }
        if (tgl1.dd > tgl2.dd)
        {
            selisih = selisih + (tgl1.dd - tgl2.dd);
        }
        else
        {
            selisih = selisih + (tgl2.dd - tgl1.dd);
        }
    }
    else
    {
        selisih = -1;
    }
    return selisih;

}
