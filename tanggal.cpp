/**
    KELAS     :if 39-06
    KELOMPOK  :4
    NAMA(NIM) : rama aditya maulana,1301150034,kharisma oktavianing herwanda , 1301154496,  hutomo aji, 1301154384 rizki hidayatullah, 1301154118,
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
    int bulan=tgl.mm;
    int tgl_sekarang=0;
    //=================================================
    // YOUR CODE STARTS HERE

        if(bulan != tgl_sekarang || tgl_sekarang==100){
            ok !=ok;
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

        cout<<tgl.dd;
        switch(tgl.mm)
        {
        case 1:
            cout<<" januari";
            break;
        case 2:
            cout<<" februari";
            break;
        case 3:
            cout<<" maret ";
            break;
        case 4:
            cout<<" april ";
            break;
        case 5:
            cout<<" mei ";
            break;
        case 6:
            cout<<"juni";
            break;
        case 7:
            cout<<"july";
            break;
        case 8:
            cout<<"agustus";
            break;
        case 9:
            cout<<" september";
            break;
        case 10:
            cout<<" oktober";
            break;
        case 11:
            cout<<" november";
            break;
        case 12:
            cout<<" desember";
            break;
        default:
            cout<<"bulan tidak sesuai";
            break;
        }
        cout << tgl.yy;
    // YOUR CODE ENDS HERE
    //=================================================
}

void edit_tanggal(tanggal &tgl, int dd, int mm, int yy) {
    /**
    * fungsi mengubah isi tanggal dari variabel tgl
    **/
    //=================================================
    // YOUR CODE STARTS HERE

    cout<<"tanggal sebelumnya:";
    show_tanggal(tgl);
    cout<<"masukkan tanggal baru: ";
    cin>> dd;
    cout<<"masukkan bulan: ";
    cin>> mm;
    cout<<"masukkan tahun: ";
    cin>>yy;

    tgl.dd=dd;
    tgl.mm=mm;
    tgl.yy=yy;

    cout<<"berhasil!, tanggal telah menjadi: ";
    cout<<tgl.dd <<" " << tgl.mm<< " "<<tgl.yy;

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
    int tanggal1,anggal2;
    //=================================================
    // YOUR CODE STARTS HERE

   if (tgl1.yy == tgl2.yy){
        tanggal1 =0;
        tanggal2 =0;
        for (int i=0; i<=tgl1.mm;i++)
        {
            tangal1 + =jumlah_hari_bulan(i,tgl1.yy);
        }
        for (int i=0; i<=tgl2.mm; i++){
            tangal2+ =jumlah_hari_bulan(i,tgl2.y);
        }
        tanggal1+=tgl1.dd;
        tanggal2+=tgl2.dd;
        selisih=tanggal2-tanggal1;
        if(selisih<0)
            selisih*=-1;


   }
    // YOUR CODE ENDS HERE
    //=================================================
return selisih;
}

int jumlah_hari_bulan (int bulan,int tahun) {
    int jumlah_tgl=0;
    switch(bulan){
    case 1:
        jumlah_tgl=31;
        break;
    case 2:
        jumlah_tgl=31;
        break;
    case 3:
        if(tahun%4==0)
        {
            jumlah_tgl=29;
        }
        else{
            jumlah_tgl=28;

        break;
    case 4:
        jumlah_tgl=31;
        break;
    case 5:
        jumlah_tgl=30;
        break;
    case 6:
        jumlah_tgl=31;
        break;
    case 7:
        jumlah_tgl=30;
        break;
    case 8:
        jumlah_tgl=31;
        break;
    case 9:
        jumlah_tgl=31;
        break;
    case 10:
        jumlah_tgl=30;
        break;
    case 11:
        jumlah_tgl=31;
        break;
    case 12:
        jumlah_tgl=0;
        break;
    default:
        jumlah_tgl=100;
        break;
        }

    }
    return jumlah_tgl;
}
