#include <iostream>
#include "clock.h"

using namespace std;

bool IsValid (int hh, int mm, int ss)
{
    if(((hh>=0 && hh<=23) && (mm>=0 && mm<=59)) && ((ss>=0)&&(ss<=59)))
        return true;
    else
        return false;
}

clock MakeClock(int hh, int mm, int ss)
{
    clock c;
    c.hh = hh; c.mm = mm; c.ss = ss;
    return c;
}

hour GetHour(clock c)
{
    return c.hh;
}

minute GetMinute (clock c)
{
    return c.mm;
}

second GetSecond (clock c)
{
    return c.ss;
}

void SetHour (clock c, int newHH)
{
    c.hh = newHH;
}

void SetMinute(clock c, int newMM)
{
    c.mm = newMM;
}

void SetSecond(clock c, int newSS)
{
    c.ss = newSS;
}

bool IsEqual (clock c1, clock c2)
{
    if (c1.ss==c2.ss && c1.mm==c2.mm && c1.hh==c2.hh)
        return true;
    else
        return false;
};

clock AddClock (clock c1, clock c2)
{
    clock sisa;
    if ((c1.ss+c2.ss) >=60)
    {
        sisa.ss = (c1.ss+c2.ss) - 60;
        sisa.mm = 1;
    }
    else
    {
        sisa.ss = c1.ss+c2.ss;
    }

    if ((c1.mm+c2.mm) >=60)
    {
        sisa.mm = (sisa.mm+c1.mm+c2.mm) - 60;
        sisa.hh = 1;
    }
    else
    {
        sisa.mm = c1.mm+c2.mm;
    }

    if (c1.hh+c2.hh >=24)
    {
        sisa.hh = (sisa.hh+c1.hh+c2.hh) - 60;
    }
    else
    {
        sisa.hh = c1.hh+c2.hh;
    }
    return sisa;
}

void PrintClock (clock c)
{
    cout<<c.hh<<" : "<<c.mm<<" : "<<c.ss<<endl;
}

