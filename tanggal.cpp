/**
    KELAS     : IF 39 06
    KELOMPOK  : 9
    NAMA(NIM) : [MUHAMMAD YUSUF FAISAL][1301154174] , [Wilson Immanuel Antonio][1301154104] , [Ni Putu Surya Febyanti K][1301154482]
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
    tgl.dd = dd;
    tgl.mm = mm;
    tgl.yy = yy;
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
    if ((tgl.dd<1) || (tgl.dd>30)) {
        ok = false;
    }
    if ((tgl.mm<1) || (tgl.mm>12)){
        ok =false;
    }
    if (tgl.yy > 2016) {
        cout << "selisih tidak bisa dihitung jika tahun lahir orang1 dan orang2 berbeda"<<endl;
         ok = false;
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
    string x = "";
        if (tgl.mm==1){
            x = "Januari";
        } else if (tgl.mm == 2){
            x = "Februari";
        } else if (tgl.mm == 3){
            x = "Maret";
        } else if (tgl.mm == 4){
            x = "April";
        } else if (tgl.mm == 5){
            x = "Mei";
        } else if (tgl.mm == 6){
            x = "Juni";
        }else if (tgl.mm == 7){
            x = "Juli";
        }else if (tgl.mm == 8){
            x = "Agustus";
        }else if (tgl.mm == 9){
            x = "September";
        }else if (tgl.mm == 10){
            x = "Oktober";
        }else if (tgl.mm == 11){
            x = "Noveember";
        }else if (tgl.mm == 12){
            x = "Desember";
        }

    cout << tgl.dd << " " << x << " " << tgl.yy << endl;

    // YOUR CODE ENDS HERE
    //=================================================
}

void edit_tanggal(tanggal &tgl, int dd, int mm, int yy) {
    /**
    * fungsi mengubah isi tanggal dari variabel tgl
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    cout << "masukkan kembali tanggal lahir : ";
    cin>>dd;
    cout << "masukkan kembali bulan lahir : ";
    cin>>mm;
    cout << "masukkan kembali tahun lahir : ";
    cin>>yy;
    cout << endl;

    tgl.dd = dd;
    tgl.mm = mm;
    tgl.yy =yy;

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
    int selisih_tgl;
    if (tgl1.yy == tgl2.yy){
        selisih_tgl = tgl1.mm - tgl2.mm;
        if (selisih_tgl<0) {
            selisih_tgl = selisih_tgl* -1;
        }
        selisih = selisih_tgl*30+(tgl2.dd-tgl1.dd);
        if (selisih<0) {
            selisih = selisih* -1;
        }
    }
    // YOUR CODE ENDS HERE
    //=================================================
    return selisih;

}
