/* This Program is Created By Muhammad Wildan Iskandar*/
#include "Clock_.h"

bool isValid (int hh, int mm, int ss) {
    if ((hh>0)&&(hh<23)) {
        return true;
    }
    else if ((mm>0)&&(mm<59)) {
        return true;
    }
    else if ((ss>0)&&(ss<59)) {
        return true;
    }
    else {
        return false;
    }
}

clock MakeClock (int hh, int mm, int ss) {
    bool cek;
    clock aw;
    cek = isValid (hh,mm,ss);
     if (cek) {
        aw.hh.jam = hh;
        aw.mm.menit = mm;
        aw.ss.detik = ss;
     }
     /*else {
        aw.hh.jam = 0;
        aw.mm.menit = 0;
        aw.ss.detik = 0;
     }*/
     return aw;
}

hour GetHour (clock c){
    hour jam;

    jam.jam = c.hh.jam;
    return jam ;
}
minute GetMinute (clock c){
    minute menit;

    menit.menit = c.mm.menit;
    return menit;
}
second GetSecond (clock c){
    second detik;

    detik.detik = c.ss.detik;
    return detik;
}

bool IsEqual (clock c1, clock c2){
    int totj1,totj2;

    totj1 = (c1.hh.jam*3600)+(c1.mm.menit*60)+(c1.ss.detik);
    totj2 = (c2.hh.jam*3600)+(c2.mm.menit*60)+(c2.ss.detik);
    if (totj1 == totj2) {
        return true;
    }
    else {
        return false;
    }
}

clock AddClock (clock c1, clock c2){
    int totj1,totj2,total,sisa;
    clock hasil;

    totj1 = (c1.hh.jam*3600)+(c1.mm.menit*60)+(c1.ss.detik);
    totj2 = (c2.hh.jam*3600)+(c2.mm.menit*60)+(c2.ss.detik);
    total = totj1 + totj2;
    hasil.hh.jam = total / 3600;
    sisa = total % 3600;
    hasil.mm.menit = sisa / 60;
    hasil.ss.detik = sisa % 60;
    return hasil;
}
void Print (clock c) {
    cout<<c.hh.jam<<":"<<c.mm.menit<<":"<<c.ss.detik;
}

void SetHour (clock *c, int newhh) {
    (*c).hh.jam = newhh;
}
void SetMinute (clock *c, int newmm){
    (*c).mm.menit = newmm;
}
void SetSecond (clock *c, int newss){
    (*c).ss.detik = newss;
}

