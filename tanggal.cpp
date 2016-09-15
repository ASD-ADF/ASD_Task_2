/**
    KELAS     : IF 39-01
    KELOMPOK  : 12
    NAMA(NIM) : Rismada Gerra Nindya(1301154561), M. Rezky Alpin Gumay (1301154155),Baginda Praka G(1301154113)
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
    tgl.tgl;
    tgl.bln;
    tgl.thn;

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
    if (tgl.bln<=0&&tgl.bln>12)
    {
        ok=false;
    }
    else if (((tgl.bln=1)||(tgl.bln=3)||(tgl.bln=5)||(tgl.bln=7)||(tgl.bln=8)||(tgl.bln=10)||(tgl.bln=12))&&(tgl.tgl>0&&tgl.tgl<=31))
    {
        ok=true;
    }
    else if (((tgl.bln=2)&&(tgl.tgl>0&&tgl.tgl<=28)&&(tgl.thn%4!=0))||((tgl.bln=2)&&(tgl.tgl>0)&&(tgl.tgl<=29)))
    {
        ok=true;
    }else if(((tgl.bln=4)||(tgl.bln=6)||(tgl.bln=9)||(tgl.bln=11))&&(tgl.tgl>0&&tgl.tgl<=30))
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

void show_tanggal(tanggal tgl) {
    /**
    * fungsi menampilkan tanggal bulan tahun dengan format menampilkan nama bulan
    * contoh : 1 Januari 1980
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    cout<<tgl.tgl<< " ";
    switch (tgl.bln)
    {
    case 1 :
        cout<< "Januari ";
        break;
    case 2 :
        cout<< "Februari ";
        break;
     case 3 :
        cout<< "Maret ";
        break;
     case 4 :
        cout<< "April ";
        break;
     case 5 :
        cout<< "Mei ";
        break;
     case 6 :
        cout<< "Juni ";
        break;
     case 7 :
        cout<< "Juli ";
        break;
     case 8 :
        cout<< "Agustus ";
        break;
     case 9 :
        cout<< "September ";
        break;
     case 10 :
        cout<< "Oktober ";
        break;
     case 11 :
        cout<< "November ";
        break;
     case 12 :
        cout<< "Desember ";
        break;
    }
    cout<<tgl.thn;

    // YOUR CODE ENDS HERE
    //=================================================
}

void edit_tanggal(tanggal &tgl, int dd, int mm, int yy) {
    /**
    * fungsi mengubah isi tanggal dari variabel tgl
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    cout<< "Masukkan tanggal baru : "; cin>> tgl.tgl;
    cout<< "Masukkan bulan baru : "; cin>> tgl.bln;
    cout<< "Masukkan tahun baru : "; cin>>tgl.bln;

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
    //=================================================
    // YOUR CODE STARTS HERE
    if (tgl1.thn == tgl2.thn)
    {
        if (tgl1.bln==tgl2.bln)
        {
            if(tgl2.tgl>tgl1.tgl)
            {
                selisih=tgl2.tgl-tgl1.tgl;
            }
            else if(tgl1.tgl>tgl2.tgl)
            {
                selisih=tgl1.tgl>tgl2.tgl;
            }
            else if(tgl1.tgl==tgl2.tgl)
            {
                cout<< "tidak ada selisih karena tanggal lahir sama"<<endl;
            }
        }
    }

    // YOUR CODE ENDS HERE
    //=================================================
    return selisih;

}
