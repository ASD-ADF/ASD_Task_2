#include <iostream>
#include "Clock.h"

using namespace std;

bool IsValid(int HH, int MM, int SS)
{
    if (HH>=0 && HH<=23)
    {
        if (MM>=0 && MM<=59)
        {
            if (SS>=0 && SS<=59)
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

Clock MakeClock(int HH, int MM, int SS)
{
    Clock x;
    x.HH = HH;
    x.MM = MM;
    x.SS = SS;
    return x;
}

Hour GetHour(Clock x)
{
    return x.HH;
}
Minute GetMinute(Clock x)
{
    return x.MM;
}
Second GetSecond(Clock x)
{
    return x.SS;
}

void SetHour(Clock *x, int newHH)
{
    (*x).HH = newHH;
}
void SetMinute(Clock *x, int newMM)
{
    (*x).MM = newMM;
}
void SetSecond(Clock *x, int newSS)
{
    (*x).SS = newSS;
}

bool IsEqual (Clock c1, Clock c2)
{
    if (c1.HH==c2.HH)
    {
        if (c1.MM==c2.MM)
        {
            if (c1.SS==c2.SS)
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

Clock AddClock (Clock c1, Clock c2)
{
    Clock c3;
    int menit, x;
    menit=0;
    x=0;
    if (c1.SS+c2.SS>=60)
    {
        c3.SS=(c1.SS+c2.SS)-60;
        menit=1;
    }
    else
    {
        c3.SS=c1.SS+c2.SS;
    }
    if (c1.MM+c2.MM>=60)
    {
        c3.MM=(c1.MM+c2.MM)-60+menit;
        x=1;
    }
    else
    {
        c3.MM=c1.MM+c2.MM+menit;
    }
    if (c1.HH+c2.HH+x>=24)
    {
        c3.HH=(c1.HH+c2.HH)-24;
    }
    else
    {
        c3.HH=c1.HH+c2.HH+x;
    }
    return c3;
}

void PrintClock (Clock x)
{
    if (x.HH<10)
    {
        cout<<"0";
    }
    cout<<x.HH<<" : ";
    if (x.MM<10)
    {
        cout<<"0";
    }
    cout<<x.MM<<" : ";
    if (x.SS<10)
    {
        cout<<"0";
    }
    cout<<x.SS<<" : ";
}

