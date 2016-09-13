/**
    KELAS     :IF 39-06
    KELOMPOK  :7
    NAMA(NIM) : [RITA AJENG NUGRAHENI][1301154524] , [nama][nim] , [nama][nim] , [nama][nim]
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

    if(tgl.mm=1){
        cout<<"Januari";
      }
      else if (tgl.mm=2){
        cout<<"Februari";
      }
      else if (tgl.mm=3){
        cout<<"Maret";
      }
      else if (tgl.mm=4){
        cout<<"April";
      }
      else if (tgl.mm=5){
        cout<<"Mei";
      }
      else if (tgl.mm=6){
        cout<<"Juni";
      }
      else if (tgl.mm=7){
        cout<<"Juli";
      }
      else if (tgl.mm=8){
        cout<<"Agustus";
      }
      else if (tgl.mm=9){
        cout<<"September";
      }
      else if (tgl.mm=10){
        cout<<"oktober";
      }
      else if (tgl.mm=11){
        cout<<"November";
      }
      else {
        cout<<"Desember";
      }
	cout<<"Tanggal bulan dan tahun:"<<tgl.dd<<tgl.mm<<tgl.yy<<endl;


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
    int x;
    int y;
    //=================================================
    // YOUR CODE STARTS HERE
	if (tgl1.yy==tgl2.yy){
	x=tgl1.dd-tgl2.dd;
		if (x<0){
		x=x*-1;
		}
}
	y=(tgl1.mm-tgl2.mm);
		if (y<0 ){
		y=y*-1;
		}

    // YOUR CODE ENDS HERE
    //=================================================
    return selisih;

}
