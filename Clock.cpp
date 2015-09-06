#include "Clock.h"
// Created by Hizas Sabilal Rasyad

bool IsValid(int HH,int MM,int SS)
{
    if(((HH>=0)and(HH<=23))and((MM>=0)and(MM<=59))and((SS>=0)and(SS<=59))) {return true;}
    else {return false;}
}

clock MakeClock(int HH,int MM,int SS)
{
    clock cl;
    cl.HH = HH;
    cl.MM = MM;
    cl.SS = SS;
    return cl;
}

hour GetHour(clock c) { return c.HH; }
minute GetMinute(clock c) { return c.MM; }
second GetSecond(clock c) { return c.SS; }

void SetHour(clock *c, int newHH){ (*c).HH = newHH; }
void SetMinute(clock *c, int newMM){ (*c).MM = newMM; }
void SetSecond(clock *c, int newSS){ (*c).SS = newSS; }

bool IsEqual(clock c1,clock c2)
{
    if ((c1.HH = c2.HH) and ((c1.MM = c2.MM) and (c1.SS = c2.SS))) { return true; }
    else { return false; }
}

clock AddClock (clock c1, clock c2)
{
    clock c3;
    int tm = 0; int th = 0;
    if (c1.SS+c2.SS >= 60) { c3.SS = c1.SS + c2.SS - 60; tm = 1; }
    else { c3.SS = c1.SS + c2.SS; }
    if (c1.MM+c2.MM + tm >= 60) { c3.MM = c1.MM + c2.MM - 60 + tm; th = 1;}
    else { c3.MM = c1.MM + c2.MM + tm; }
    if (c1.HH+c2.HH + th >= 24) { c3.HH = c1.HH + c2.HH - 24 ;}
    else { c3.HH = c1.HH + c2.HH + th; }
    return c3;
}

void PrintClock ( clock c )
{
    if (c.HH < 10){ cout<<"0"; } cout<<c.HH; cout<<" : ";
    if (c.MM < 10){ cout<<"0"; } cout<<c.MM; cout<<" : ";
    if (c.SS < 10){ cout<<"0"; } cout<<c.SS;
}
