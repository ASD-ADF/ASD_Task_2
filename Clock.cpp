
#include "clock.h"


bool Isvalid (int jam, int menit, int detik){
    if (jam>=0 && jam <=23) {
        return true;
    }
    else if (menit >=0 && menit <=59){
        return true;
    }
    else if (detik >= 0 && detik <=59){
        return true;
    }
    else {
        return false;
    }
}

 clock Buatjam (int jam,int menit,int detik){
     bool cek;
     clock tes;

     cek=Isvalid(jam,menit,detik);
     if (cek){
        tes.hh.hour=jam;
        tes.mm.minute=menit;
        tes.ss.second=detik;

     }
     return tes;
 }

 jam ambiljam (clock a){
     jam ambil;

     ambil.hour=a.hh.hour;
     return ambil

 }
 menit ambilmenit (clock a){
     menit ambil;
     ambil.minute=a.mm.minute;
     return ambil;
 }

 detik ambildetik (clock a){
    detik ambil;
    ambil.second=a.ss.second;
    return ambil;
 }

 void ubahjam (clock *a, int jambaru){
     *a.hh.hour=jambaru;

 }
 void ubahmenit (clock *a, int menitbaru){
     *a.mm.minute=menitbaru;

 }
 void ubahdetik (clock *a, int detikbaru){
     *a.ss.second;
 }

 bool sama (clock a1, clock a2){
     if (a1==a2){
        return true
     }
 }
 clock tambahjam (clock a1, clock a2){
     int tmp1,tmp2,hasil;
     clock inijam;
     tmp1=(a1.hh.hour *3600) + (a1.mm.minute *60) + (a1.ss.second);
     tmp2=(a2.hh.hour *3600) + (a2.mm.minute *60) + (a2.ss.second);
     hasil =tmp1 +tmp2;

     inijam.hh.hour=hasil/3600;
     sisa=hasil%3600;
     inijam.mm.minute=sisa/60;
     inijam.ss.second=sisa%60;
     return inijam;


 }

 void printjam (clock a){
     cout<<a.hh.hour<<":"<<a.mm.minute<<":"<<a.ss.second;
 }
