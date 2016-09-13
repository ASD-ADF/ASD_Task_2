/**
    KELAS     :IF 39-06
    KELOMPOK  :1
    NAMA(NIM) : [Vatana RA][1301154566] , [Ibrahim Bimo][1301154356] , [M. Iqbal][1301154300] , [Rian P][1301154426]
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
	if (tgl.dd<30){
		ok=true;
	}
	else{
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

    string y=" ";
    if(tgl.mm==1){
        y="Januari";
      }
      else if (tgl.mm==2){
        y="Februari";
      }
      else if (tgl.mm==3){
        y="Maret";
      }
      else if (tgl.mm==4){
        y="April";
      }
      else if (tgl.mm==5){
        y="Mei";
      }
      else if (tgl.mm==6){
        y="Juni";
      }
      else if (tgl.mm==7){
        y="Juli";
      }
      else if (tgl.mm==8){
        y="Agustus";
      }
      else if (tgl.mm==9){
        y="September";
      }
      else if (tgl.mm==10){
        y="oktober";
      }
      else if (tgl.mm==11){
        y="November";
      }
      else {
        y="Desember";
      }
	cout<<"Tanggal bulan dan tahun:"<<tgl.dd<<" "<<y<<" "<<tgl.yy<<endl;


    // YOUR CODE ENDS HERE
    //=================================================
}

void edit_tanggal(tanggal &tgl, int dd, int mm, int yy) {
    /**
    * fungsi mengubah isi tanggal dari variabel tgl
    **/
    //=================================================
    // YOUR CODE STARTS HERE
	cout<<"Masukan tanggal kelahiran yang tepat :";
	cin>>tgl.dd;
	cout<<"Masukan bulan kelahiran yang tepat:";
	cin>>tgl.mm;
	cout<<"Masukan tahun kelahiran yang tepat:";
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
