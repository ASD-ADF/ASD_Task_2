/**
    KELAS     : IF 39-06
    KELOMPOK  :
    NAMA(NIM) : [M.Luthfi Aulia S][1301154328]
**/


#include "orang.h"

orang create_orang(string nama, int tgl, int bln, int thn) {
    /**
    * fungsi mengeset orang org dengan nama, tgl, bln, thn, dan mengembalikan hasilnya
    * fungsi memanggil fungsi create_tanggal untuk membuat tanggal lahir
    **/
    orang org;
    tgl;
     org.nama = nama;
     tgll = create_tanggal(tgl, bln, thn);
     org.tgl_lahir = tgll;

     return org;
}

int hitung_umur(orang org) {

    int umur = 0;

    umur = (2016-org.tgl_lahir.yy);


     return umur;
}

void show_orang(orang org) {
     string bln;
    cout << "Nama: "<< org.nama << endl;

     if (org.tgl_lahir.bln==1) {
        bln="Januari";
    } else if (org.tgl_lahir.bln==2) {
         bln="Februari";
     } else if (org.tgl_lahir.bln==3) {
         ket_bln="Maret";
     } else if (org.tgl_lahir.bln==4) {
         ket_bln="April";
     } else if (org.tgl_lahir.bln==5) {
         ket_bln="Mei";
     } else if (org.tgl_lahir.bln==6) {
         ket_bln="Juni";
     } else if (org.tgl_lahir.bln==7) {
         ket_bln="Juli";
     } else if (org.tgl_lahir.bln==8) {
         ket_bln="Agustus";
     } else if (org.tgl_lahir.bln==9) {
         ket_bln="September";
     } else if (org.tgl_lahir.bln==10) {
         ket_bln="Oktober";
     } else if (org.tgl_lahir.bln==11) {
         ket_bln="November";
     } else if (org.tgl_lahir.bln==12) {
         ket_bln="Desember";
     }

     cout << "tgl_lahir: "<< org.tgl_lahir.dd <<" "<< ket_bln /**org.tgl_lahir.mm**/ <<" "<< org.tgl_lahir.yy << endl;
     cout << "Umur: "<< hitung_umur(org) << endl;
     cout << endl;

}
