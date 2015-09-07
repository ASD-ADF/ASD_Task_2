#include <iostream>

int main ()
{

bool isValid (int hour, int min, int sec) {
    if ((hour>0)&&(hour<23)) {
            return true;    }
   else if ((min>0)&&(min<59)) {
        return true}
    else if ((sec>0)&&(sec<59)) {
        return true;}
    else {
        return false;}
}

clock MakeClock (int hour, int min, int sec) {
    bool cek;
    clock aw;
    cek = isValid (hour,min,sec);
     if (cek) {
        aw.hour.jam = hour;
        aw.min.menit = min;
        aw.sec.detik = sec;
            }
    else {
        aw.hour.jam = 0;
        aw.min.menit = 0;
        aw.sec.detik = 0;
     }
     return aw;
}

hour GetHour (clock c){
    hour jam;

    jam.jam = c.hh.jam;
    return jam ;
}
minute GetMinute (clock c){
    minuete menit;

    menuete.menit = c.min.menit;
    return menit;
}
second GetSecond (clock c){
    sec detik;

    detik.detik = c.sec.detik;
    return detik;
}

bool IsEqual (clock c1, clock c2){
    int total1,total2;

    total1 = (c1.hour.jam*3600)+(c1.min.menit*60)+(c1.sec.detik);
    total2 = (c2.hour.jam*3600)+(c2.min.menit*60)+(c2.sec.detik);+
    if (total1 == total2) {
        return true;
    }
    else {
        return false;}
}

clock AddClock (clock c1, clock c2){
    int total1,total2,total,x;
    clock r;

    total1 = (c1.hour.jam*3600)+(c1.min.menit*60)+(c1.sec.detik);
    total2 = (c2.hour.jam*3600)+(c2.min.menit*60)+(c2.sec.detik);
    total = total1 + total2;
    r.hour.jam = total / 3600;
    x = total % 3600;
    r.min.menit = x / 60;
    r.sec.detik = x % 60;
    return r;
}

void Print (clock c) {
    cout<<c.hour.jam<<":"<<c.min.menit<<":"<<c.sec.detik;
}

void SetHour (clock *c, int newhh) {
    (*c).hour.jam = newhh;
}
void SetMinute (clock *c, int newmm){
    (*c).min.menit = newmm;
}
void SetSecond (clock *c, int newss){
    (*c).sec.detik = newss;
}

