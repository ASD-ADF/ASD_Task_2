#include <iostream>
#include "Clock.h"

using namespace std;

bool IsValid (int HH, int MM, int SS)
{
    if (HH>=0 and HH<=23)
    {
        if (MM>=0 and MM<=59)
        {
            if (SS>=0 and SS<=59)
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

Clock MakeClock (int HH, int MM, int SS)
{
    Clock a;
    a.HH=HH;
    a.MM=MM;
    a.SS=SS;
    return a;
}

hour GetHour (Clock c)
{
        return c.HH;
}
minute GetMinute (Clock c)
{
        return c.MM;
}
second GetSecond (Clock c)
{
        return c.SS;
}
void SetHour (Clock *c, int newHH)
{
        (*c).HH=newHH;
}
void SetMinute (Clock *c, int newMM)
{
        (*c).MM=newMM;
}
void SetSecond (Clock *c, int newSS)
{
        (*c).SS=newSS;
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
    int m, j;
    m=0;
    j=0;
    if (c1.SS+c2.SS>=60)
    {
        c3.SS=(c1.SS+c2.SS)-60;
        m=1;
    }
    else
    {
        c3.SS=c1.SS+c2.SS;
    }
    if (c1.MM+c2.MM>=60)
    {
        c3.MM=(c1.MM+c2.MM)-60+m;
        j=1;
    }
    else
    {
        c3.MM=c1.MM+c2.MM+m;
    }
    if (c1.HH+c2.HH+j>=24)
    {
        c3.HH=(c1.HH+c2.HH)-24;
    }
    else
    {
        c3.HH=c1.HH+c2.HH+j;
    }
    return c3;
}

void PrintClock (Clock c)
{
    if (c.HH<10)
    {
        cout<<"0";
    }
    cout<<c.HH<<" : ";
    if (c.MM<10)
    {
        cout<<"0";
    }
    cout<<c.MM<<" : ";
    if (c.SS<10)
    {
        cout<<"0";
    }
    cout<<c.SS<<" : ";
}

