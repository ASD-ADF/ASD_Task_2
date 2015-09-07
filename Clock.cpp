#include "clock.h"
#include<iostream>

using namespace std;
bool IsValid(int hh, int mm, int ss)
{
    if ((0<=hh&&hh<=23)&&(0<=mm&&mm<=59)&&(0<=ss&&ss<=59))
    {
        IsValid=true;
    }
    else
    {
        IsValid=false;
    }
}


clock MakeClock(int hh, int mm, int ss)
{
     clock clk;
     clk.hh=hh;
     clk.mm=mm;
     clk.ss=ss;
     return clk;
}

hour Gethour(clock c)
{
    return c.hour;
}
minute GetMinute(clock c)
{
    return c.minute;
}
second GetSecond (clock c)
{
    return c.second;
}

void SetHour (clock c, int newhh)
{
    c.hh=newhh;
}
void SetMinute (clock c, int newmm)
{
    c.mm=newmm;
}
void SetSecond (clock c, int newss)
{
    c.ss=newss;
}

bool IsEqual(clock c1, clock c2)
{
    if ((c1.hh==c2.hh)&&(c1.mm==c2.mm)&&(c1.ss==c2.ss))
    {
        IsEqual=true;
    }
    else
    {
        IsEqual=false;
    }
}

clock AddClock(clock c1, clock c2)
{
    clock c3;
    int total1, total2, total, sisa;
    total1=(c1.hh*3600)+(c1.mm*60)+(c1.ss);
    total2=(c2.hh*3600)+(c2.mm*60)+(c2.ss);
    total=total1+total2;

    c3.hh=total div 3600;
    sisa=total mod 3600;
    c3.mm=sisa div 60;
    c3.ss=sisa mod 60;
    return c3;
}

void printclock (clock c)
{
    cout<<c.mm<<":"<<c.mm<<":"<<c.ss<<endl;
}
