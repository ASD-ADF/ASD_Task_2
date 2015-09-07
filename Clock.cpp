#include <iostream>
#include "Clock.h"

using namespace std;

bool IsValid(int HH, int MM, int SS)
{
    if ((HH>=0 && HH<=23) && (MM>=0 && MM<=59) && (SS>=0 && SS<=59))
            {
                return true;
            }
            else
            {
                return false;
            }
        }

Clock MakeClock(int HH, int MM, int SS)
{
    Clock jm;
    jm.HH = HH;
    jm.MM = MM;
    jm.SS = SS;
    return jm;
}

hour GetHour(Clock c)
{
    return c.HH;
}
minute GetMinute(Clock c)
{
    return c.MM;
}
second GetSecond(Clock c)
{
    return c.SS;
}

void SetHour(Clock *c, int newHH)
{
    (*c).HH = newHH;
}
void SetMinute(Clock *c, int newMM)
{
    (*c).MM = newMM;
}
void SetSecond(Clock *c, int newSS)
{
    (*c).SS = newSS;
}

bool IsEqual (Clock c1, Clock c2)
{
    if ((c1.HH==c2.HH)&& (c1.MM==c2.MM) && (c1.SS==c2.SS))
            {
                return true;
            }
            else
            {
                return false;
            }
        }


Clock AddClock (Clock c1, Clock c2)
{
    Clock c3;
    int mn, jm;
    mn=0;
    jm=0;
    if (c1.SS+c2.SS>=60)
    {
        c3.SS=(c1.SS+c2.SS)-60;
        mn=1;
    }
    else
    {
        c3.SS=c1.SS+c2.SS;
    }
    if (c1.MM+c2.MM>=60)
    {
        c3.MM=(c1.MM+c2.MM)-60+mn;
        jm=1;
    }
    else
    {
        c3.MM=c1.MM+c2.MM+mn;
    }
    if (c1.HH+c2.HH+jm>=24)
    {
        c3.HH=(c1.HH+c2.HH)-24;
    }
    else
    {
        c3.HH=c1.HH+c2.HH+jm;
    }
    return c3;
}

void PrintClock (Clock c)
{
    cout << c.HH << ":"<< c.MM << ":" << c.SS;
}
