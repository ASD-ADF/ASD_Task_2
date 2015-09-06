#include "clock.h"

bool IsValid(int HH, int MM, int SS)
{
    if ((HH>=0) and (HH<=23) and (MM>=0) and (MM<=59) and (SS>=0) and (MM<=59))
    {
        return true;
    }
    else { return false; }
}

clock MakeClock(int HH, int MM, int SS)
{
    clock c;
    c.HH = HH;
    c.MM = MM;
    c.SS = SS;
    return c;
}
hour GetHour(clock c)
{
return c.HH;
}
minute GetMinute(clock c)
{
    return c.MM;
}
second GetSecond(clock c)
{
    return c.SS;
}
void SetHour(clock *c, int newHH )
{
    (*c).HH = newHH;
}

void SetMinute(clock *c, int newMM )
{
    (*c).MM = newMM;
}

void SetSecond(clock *c, int newSS )
{
    (*c).SS = newSS;
}

bool IsEqual(clock  c1,clock c2)
{
    if ((c1.HH==c2.HH) and (c2.MM==c2.MM) and (c2.SS==c2.SS))
    {
        return true;
    }
}

clock AddClock (clock c1 ,clock c2 )
{
    clock ctot;
    ctot.SS = c1.SS + c2.SS;
    ctot.MM = c1.MM + c2.MM;
    ctot.HH = c1.HH + c2.HH;

    if (ctot.SS >=60)
    {
        ctot.SS = ctot.SS-60;
        ctot.MM = ctot.MM+1;
    }
    if (ctot.MM >=60)
    {
        ctot.MM = ctot.MM-60;
        ctot.HH = ctot.HH+1;
    }
    if (ctot.HH>=24)
    {
        ctot.HH = ctot.HH-24;
    }
}

void PrintClock (clock c)
{
    cout <<c.HH<<" : ";
    cout <<c.MM<<" : ";
    cout <<c.SS<<endl;
}
