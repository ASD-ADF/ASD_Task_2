/**
    KELAS     : IF 39-06
    KELOMPOK  : 7
    NAMA(NIM) : [Adam Tua Rahman][1301154286] , [Rita Ajeng Nugraheni][1301154524] , [Ridho Dwi Pangestu][1301140110]
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
    cout<<"januari ";
    break;
 case 2:
    cout<<"februari ";
    break;
 case 3:
    cout<<"maret ";
    break;
 case 4:
    cout<<"april ";
    break;
 case 5:
    cout<<"mei ";
    break;
 case 6:
    cout<<"juni ";
    break;
 case 7:
    cout<<"juli ";
    break;
 case 8:
    cout<<"agustus ";
    break;
 case 9:
    cout<<"september ";
    break;
 case 10:
    cout<<"oktober ";
    break;
 case 11:
    cout<<"november ";
    break;
 case 12:
    cout<<"desember ";
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
