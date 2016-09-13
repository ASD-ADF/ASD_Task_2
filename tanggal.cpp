#include"tanggal.h"

tanggal create_tanggal(int dd, int mm, int yy) {
    /**
    *fungsi mengeset tanggal tgl dengan hari, bulan, dan tahun dan mengembalikan hasilnya
    **/

    tanggal tgl;
    //==================================================
    //YOUR CODE STARTS HERE

    tgl.dd = dd;
    tgl.mm = mm;
    tgl.yy = yy;

    //YOUR CODE ENDS HERE
    //==================================================
    return tgl;
}

bool cek_tanggal(tanggal tgl) {
    /**
    *fungsi mengecek tanggal
    *fungsi mengembalikan nilai true jika isi tanggal sesuai dengan bulannya
    *fungsi mengembalikan nilai false jika isi tanggal atau bulan atau tahun salah
    **/

    bool ok = true;
    int bulan = tgl.mm;
    int tgl_sekarang = 0;
    //==================================================
    //YOUR CODE STARTS HERE
        if (bulan != tgl_sekarang || tgl_sekarang == 100) {
            ok != ok;
        }
    //YOUR CODE ENDS HERE
    //==================================================
}

void show_tanggal(tanggal tgl) {
    /**
    *fungsi menampilkan tanggal bulan tahun dengan format menampilkan nama bulan
    *contoh : 1 Januari 1980
    **/
    //==================================================
    //YOUR CODE STARTS HERE
    cout<<tgl.dd;
    switch(tgl.mm)
    {
case 1 :
    cout<<" Januari ";
    break;
case 2 :
    cout<<" Februari ";
    break;
case 3 :
    cout<<" Maret ";
    break;
case 4:
    cout<<" April ";
    break;
case 5 :
    cout<<" Mei ";
    break;
case 6 :
    cout<<" Juni ";
    break;
case 7 :
    cout<<" Juli ";
    break;
case 8 :
    cout<<" Agustus ";
    break;
case 9 :
    cout<<" September ";
    break;
case 10 :
    cout<<" Oktober ";
    break;
case 11 :
    cout<<" November ";
    break;
case 12 :
    cout<<" Desember ";
    break;
default :
    cout<<"Bulan tidak sesuai";
    break;
    }
    cout<<tgl.yy;

    //YOUR CODE ENDS HERE
    //==================================================
}

void edit_tanggal(tanggal tgl, int dd, int mm, int yy) {
    /**
    *fungsi mengubah isi tanggal dari variabel tgl
    **/
    //==================================================
    //YOUR CODE STARTS HERE
    cout<<"Tanggal sebelumnya : ";
    show_tanggal(tgl);
    cout<<"Masukkan tanggal baru : ";
    cin>>dd;
    cout<<"Masukkan bulan baru : ";
    cin>>mm;
    cout<<"Masukkan tahun baru : ";
    cin>>yy;

    tgl.dd = dd;
    tgl.mm = mm;
    tgl.yy = yy;

    cout<<"Berhasil!!!, Tanggal telah berubah menjadi : ";
    cout<<tgl.dd<<" "<<tgl.mm<<" "<<tgl.yy;

    //YOUR CODE ENDS HERE
    //==================================================

}

int jumlah_hari_bulan(int bulan, int tahun) {
    int jumlah_tgl = 0;
    switch(bulan){
case 1 :
    jumlah_tgl = 31;
    break;
case 2 :
    jumlah_tgl = 31;
    break;
case 3 :
    if (tahun %4 == 0)
    {
        jumlah_tgl = 29;
    }
    else{
        jumlah_tgl = 28;
    }
    break;
case 4 :
    jumlah_tgl = 31;
    break;
case 5 :
    jumlah_tgl = 30;
    break;
case 6 :
    jumlah_tgl = 31;
    break;
case 7 :
    jumlah_tgl = 30;
    break;
case 8 :
    jumlah_tgl = 31;
    break;
case 9 :
    jumlah_tgl = 31;
    break;
case 10 :
    jumlah_tgl = 30;
    break;
case 11 :
    jumlah_tgl = 31;
    break;
case 12 :
    jumlah_tgl = 0;
    break;
default :
    jumlah_tgl = 100;
    break;

    }
    return jumlah_tgl;

}
