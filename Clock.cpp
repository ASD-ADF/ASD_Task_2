#include "clock.h"
#include <iostream>
using namespace std;
clock MakeClock (int HH,int MM,int SS)
{
    clock c;
    c.HH=HH;
    c.MM=MM;
    c.SS=SS;
    return c;
}
bool IsValid(int HH,int MM,int SS) //cek inputan waktu
{
    if((HH>0 && HH<=23) && (MM>0 && MM<=60) && (SS>0 && SS<=60))
    {
        return true;
    }
    else
    {
        return false;
    }
}
Hour GetHour (clock c)
{
    return c.HH;
}
Minute GetMinute (clock c)
{
    return c.MM;
}
Second GetSecond (clock c)
{
    return c.SS;
}
void SetSecond (clock *c, int newSS) //ubah nilai detik
{
    (*c).HH=newSS;
}
void SetMinute (clock *c, int newMM) //ubah nilai menit
{
    (*c).HH=newMM;
}
void SetHour (clock *c, int newHH) //ubah nilai jam
{
    (*c).HH=newHH;
}
void printclock(clock c) //output jam
{
    cout<<c.HH<<":"<<c.MM<<":"<<c.SS<<endl;
}
clock AddClock(clock c1, clock c2) //menjumlah jam
{
    int konv1,konv2,total,sisa;
    clock c3;
    konv1=(c1.HH*3600)+(c1.MM*60)+c1.SS; //konversikan ke detik
    konv2=(c2.HH*3600)+(c2.MM*60)+c2.SS;
    total=konv1+konv2;
    c3.HH=total div 3600; //mengembalikan ke jam, menit, detik
    sisa=total mod 3600;
    c3.MM=sisa div 60;
    c3.SS=sisa mod 60;
    return c3;
}
bool IsEqual(clock c1, clock c2) //jika jam sama
{
    if((c1.HH=c2.HH)&&(c1.MM=c2.MM)&&(c1.SS=c2.SS))
    {
        return true;
    }
    else
    {
        return false;
    }
}

