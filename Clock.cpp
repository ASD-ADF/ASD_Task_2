#include <iostream>
#include "Clock.h"


using namespace std;

bool IsValid (int HH,int MM,int SS)

{
    if(((HH>=0 && HH<=23) && (MM>=0 && MM<=59)) && ((SS>=0) && (SS<=59)))
        return true;
    else
        return false;
};

Clock MakeClock(int HH,int MM,int SS)
{
    Clock c;
    c.HH = HH; c.MM = MM; c.SS = SS;
    return c;
};

Hour GetHour (Clock c)
{
    return c.HH;
};

Minute GetMinute (Clock c)
{
    return c.MM;
};

Second GetSecond (Clock c)
{
    return c.SS;
};

void SetHour (Clock c,int newHH)
{
    c.HH = newHH;
};

void SetMinute (Clock c,int newMM)
{
    c.MM = newMM;
};

void SetSecond (Clock c,int newSS)
{
    c.SS = newSS;
};

bool IsEqual (Clock ca, Clock cb)
{
    if (ca.SS==cb.SS && ca.MM==cb.MM && ca.HH==cb.HH)
        return true;
    else
        return false;
};

Clock AddClock (Clock ca,Clock cb)
{
    Clock cx;
    if (ca.SS+cb.SS >= 60)
    {
        cx.SS = ca.SS+cb.SS - 60;
        cx.MM = 1;
    }
    else
    {
        cx.SS = ca.SS+cb.SS;
    }
    if (ca.MM+cb.MM >= 60)
    {
        cx.MM = cx.MM+ca.MM+cb.MM - 60;
        cx.MM = 1;
    }
    else
    {
        cx.MM = ca.MM+cb.MM;
    };
    if (ca.HH+cb.HH >= 24)
    {
        cx.HH = cx.HH+ca.HH+cb.HH -24;
    }
    else
    {
        cx.HH = ca.HH+cb.HH;
    }
    return cx;
};

void PrintClock (Clock c)
{
    cout << c.HH << " : " << c.MM << " : " << c.SS << endl;
};
