#include <iostream>
#include "clock.h"

using namespace std;

bool istrue(int hh, int mm, int ss)
{
    if (hh>=0 && hh<=23)
    {
        if (mm>=0 && mm<=59)
        {
            if (ss>=0 && ss<=59)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

clock jamnya(int hh, int mm, int ss)
{
    clock j;
    j.hh = hh;
    j.mm = mm;
    j.ss = ss;
    return j;
}
jam gethour(clock pass)
{
    return pass.hh;
}
menit getminute(clock pass)
{
    return pass.mm;
}
detik getsecond(clock pass)
{
    return pass.ss;
}
void sethour(clock *pass, int newhh)
{
    (*pass).hh = newhh;
}
void setminute(clock *pass, int newmm)
{
    (*pass).mm = newmm;
}
void setsecond(clock *pass, int newss)
{
    (*pass).ss = newss;
}
bool IsEqual(Clock xa, Clock xb)
{
    if (xa.hh==xb.hh)
    {
        if (xa.mm==xb.mm)
        {
            if (xa.ss==xb.ss)
            {
                return true;
            }
            else
           {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

Clock AddClock (Clock xa, Clock xb)
{
    Clock xc;
    int mnt, jam;
    mnt=0;
    jam=0;
    if (xa.ss+xb.SS>=60)
    {
        xc.ss=(xa.ss+xb.ss)-60;
        mnt=1;
    }
    else
    {
        xc.ss=xa.ss+xb.ss;
    }
    if (xa.mm+xb.mm>=60)
    {
        xc.mm=(xa.mm+xb.mm)-60+mnt;
        jam=1;
    }
    else
    {
        xc.mm=xa.mm+xb.mm+mnt;
    }
    if (xa.hh+xb.hh+jam>=24)
    {
        xc.hh=(xa.hh+xb.hh)-24;
    }
    else
    {
        xc.hh=xa.hh+xb.hh+jam;
    }
    return xc;
}

void PrintC(Clock pass)
{
    if (pass.hh<10)
    {
        cout<<"0";
    }
    cout<<pass.hh<<" : ";
    if (pass.mm<10)
    {
        cout<<"0";
    }
    cout<<pass.mm<<" : ";
    if (pass.ss<10)
    {
        cout<<"0";
    }
    cout<<pass.ss<<" : ";
}
