#include "asd.h"
bool IsValid(int hh, int mm, int ss){
    if(hh>0 && hh<=23){
        return true;
    }else if(mm>0 && mm<=59){
        return true;
    }else if(ss>0 && mm<=59){
        return true;
    }else{
        return false;
    }
}

clock MakeClock(int hh, int mm, int ss){
    bool cek;
    clock coba;
    cek=IsValid(hh,mm,ss);
    if (cek){
        coba.hh.hour=hh;
        coba.mm.minute=mm;
        coba.ss.second=ss;

    }return coba;
}
jam GetHour(clock c){
    jam ambil;

    ambil.hour=c.hh.hour;
    return ambil;
}
menit GetMinute(clock c){
    menit ambil;

    ambil.minute=c.mm.minute;
    return ambil;
}
detik GetSecond(clock c){
    detik ambil;

    ambil.second=c.ss.second;
    return ambil;
}
bool IsEqual (clock c1, clock c2){
    int total1,total2;

    total1 = (c1.hh.hour*3600)+(c1.mm.minute*60)+(c1.ss.second);
    total2 = (c2.hh.hour*3600)+(c2.mm.minute*60)+(c2.ss.second);
    if (total1 == total2) {
        return true;
    }
    else {
        return false;
    }
}

clock AddClock (clock c1, clock c2){
    int total1,total2,total,sisa;
    clock hasil;

    total1 = (c1.hh.hour*3600)+(c1.mm.minute*60)+(c1.ss.second);
    total2 = (c2.hh.hour*3600)+(c2.mm.minute*60)+(c2.ss.second);
    total = total1 + total2;
    hasil.hh.hour = total / 3600;
    sisa = total % 3600;
    hasil.mm.minute = sisa / 60;
    hasil.ss.second = sisa % 60;
    return hasil;
}
void Print (clock c) {
    cout<<c.hh.hour<<":"<<c.mm.minute<<":"<<c.ss.second<<endl;
}

void SetHour (clock *c, int newjam) {
    (*c).hh.hour = newjam;
}
void SetMinute (clock *c, int newmenit){
    (*c).mm.minute = newmenit;
}
void SetSecond (clock *c, int newdetik){
    (*c).ss.second = newdetik;
}
