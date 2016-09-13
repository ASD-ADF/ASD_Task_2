/**
    KELAS     : IF 39-06
    KELOMPOK  : 1
    NAMA(NIM) : [Muhammad Iqbal][13401154300] , [Vatana Rianti Aldefi][1301154566] , [Ibrahim Bimo Wicaksono][1301154356] , [Rian Pebi][1301154426]
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
    tgl.dd=dd;
	tgl.mm=mm;
	tgl.yy=yy;


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
    if (tgl.dd>=31 || tgl.dd<=0){
    ok=false;
    }
    if (tgl.mm>=12 || tgl.dd<=0){
    ok=false;
    }
    if (tgl.yy>=2016){
    ok=false;
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
    switch (tgl.mm)
     {
 case 1:
    cout<<"Januari ";
    break;
 case 2:
    cout<<"Februari ";
    break;
 case 3:
    cout<<"Maret ";
    break;
 case 4:
    cout<<"April ";
    break;
 case 5:
    cout<<"Mei ";
    break;
 case 6:
    cout<<"Juni ";
    break;
 case 7:
    cout<<"Juli ";
    break;
 case 8:
    cout<<"Agustus ";
    break;
 case 9:
    cout<<"September ";
    break;
 case 10:
    cout<<"Oktober ";
    break;
 case 11:
    cout<<"November ";
    break;
 case 12:
    cout<<"Desember ";
    break;


    }

    // YOUR CODE ENDS HERE
    //=================================================
}

void edit_tanggal(tanggal &tgl, int dd, int mm, int yy) {
    /**
    * fungsi mengubah isi tanggal dari variabel tgl
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    cout<<"masukkan tanggal yang benar";
    cin>>tgl.dd;
    cout<<"masukkan bukan yang benar";
    cin>>tgl.mm;
    cout<<"masukkan tahun yang benar";
    cin>>tgl.yy;


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
    int n;
    int s;
    //=================================================
    // YOUR CODE STARTS HERE
    if (tgl1.yy==tgl2.yy){
    s=tgl1.dd - tgl2.dd;
    if (s<0){
        s=s*-1;
    }
    }
    n=tgl1.mm-tgl2.mm;
    if (n<0){
        n=n*-1;
    }
    selisih=s+n;


    // YOUR CODE ENDS HERE
    //=================================================
    return selisih;

}
