/**
    KELAS     : IF 39 01
    KELOMPOK  : 6
    NAMA(NIM) : [Rd.Havez Cahyan F.][1301154197] , [Rifell Noerfiansyah][1301150085] , [Rd. Muhammad Ichsan Al Rasyid][1301154295] , [Salma Assyifa][1301154505]
**/

#include <string>
#include "tanggal.h"

tanggal create_tanggal(int dd,int mm,int yy) {
    /**
    * fungsi mengeset tanggal tgl dengan hari, bulan, dan tahun dan mengembalikan hasilnya
    **/

    tanggal tgl;
    //=================================================
        tgl.tgl = dd;
        tgl.bln = mm;
        tgl.thn = yy;
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
         if (tgl.bln == 2)
      {
          if (tgl.tgl > 0 and tgl.tgl < 30)
          {
              ok = true;
          }
      }
      else if (tgl.bln == 8)
      {
          if (tgl.tgl > 0 and tgl.tgl < 32)
          {
              ok = true;
          }
      }
      else if ((tgl.bln % 2) == 0)
      {
          if (tgl.tgl > 0 and tgl.tgl < 31)
          {
              ok = true;
          }
      }
      else if ((tgl.bln % 2) == 1)
      {
          if(tgl.tgl > 0 and tgl.tgl < 32)
          {
              ok = true;
          }
      }
    //=================================================
    return ok;
}

void show_tanggal(tanggal tgl) {
    /**
    * fungsi menampilkan tanggal bulan tahun dengan format menampilkan nama bulan
    * contoh : 1 Januari 1980
    **/
    //=================================================
        string bulan;
      if (tgl.bln == 1)
      {
          bulan ="Januari";
      }
      else if (tgl.bln == 2)
      {
          bulan ="Februari";
      }
      else if (tgl.bln == 3)
      {
          bulan ="Maret";
      }
      else if (tgl.bln == 4)
      {
          bulan = "April";
      }
      else if (tgl.bln == 5)
      {
          bulan ="Mei";
      }
      else if (tgl.bln == 6)
      {
          bulan ="Juni";
      }
      else if (tgl.bln == 7)
      {
          bulan ="Juli";
      }
      else if (tgl.bln == 8)
      {
          bulan ="Agustus";
      }
      else if (tgl.bln == 9)
      {
          bulan ="September";
      }
      else if (tgl.bln == 10)
      {
          bulan ="Oktober";
      }
      else if (tgl.bln == 11)
      {
          bulan ="November";
      }
      else if (tgl.bln == 12)
      {
          bulan ="Desember";
      }
      cout<< tgl.tgl<<" "<<bulan<<" "<<tgl.thn<<endl;
    //=================================================
}

void edit_tanggal(tanggal &tgl, int dd, int mm, int yy) {
    /**
    * fungsi mengubah isi tanggal dari variabel tgl
    **/
    //=================================================
        cout<<"Masukan Tanggal : ";
        cin>>tgl.tgl;
        cout<<"Masukan Bulan : ";
        cin>>tgl.bln;
        cout<<"Masukan Tahun : ";
        cin>>tgl.thn;
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
        if (tgl1.thn == tgl2.thn)
      {
          if (tgl1.bln == tgl2.bln )
          {
              if (tgl2.tgl > tgl1.tgl)
              {
                  selisih = tgl2.tgl - tgl1.tgl;
              }
              else if (tgl1.tgl > tgl2.tgl)
              {
                  selisih = tgl1.tgl - tgl2.tgl;
              }
          }

          else if (tgl2.bln > tgl1.bln)
          {
              selisih = ((30 - tgl1.tgl) + tgl2.tgl + ((tgl2.bln-tgl1.bln-1)*30));
          }
          else if (tgl1.bln > tgl2.bln)
          {
              selisih = (tgl1.tgl + (30 - tgl2.tgl) + ((tgl1.bln-tgl2.bln-1)*30));
          }
      }
    //=================================================
    return selisih;

}
