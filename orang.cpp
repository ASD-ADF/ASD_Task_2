/**
    KELAS     :IF-39-06
    KELOMPOK  : 5
    NAMA(NIM) : [A.A Gde Ratu Pemayun][1301154412] , [KM Alfarabi][1301150076] , [Gisela Anggita Ashianti][1301154468] , [fiqhi agung][1301154132]
**/



#include "orang.h"
#include "tanggal.h"

orang create_orang(string nama, int tgl, int bln, int thn) {
    orang org;

    org.nama = nama;
    tanggal tanggal_lahir = create_tanggal(tgl, bln, thn);
    org.tgl_lahir = tanggal_lahir;
    return org;
}

int hitung_umur(orang org) {
    int umur = 0;
    umur = 2016 - org.tgl_lahir.thn;
    return umur;
}

void show_orang(orang org) {

    cout<<org.nama<<" ";
    cout<<org.tgl_lahir.tgl<<" ";
    cout<<org.tgl_lahir.bln<<" ";
    cout<<org.tgl_lahir.thn<<" ";
    cout<<hitung_umur(org)<<" ";
}
