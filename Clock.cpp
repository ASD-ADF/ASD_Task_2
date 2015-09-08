#include <iostream>
#include "clock.h"
int a,b;
clock MakeClock(int HH, int MM, int SS) 
{
    clock c;
    c.HH=HH;
    c.MM=MM;
    c.SS=SS;
    return c;
}
bool IsValid(int HH, int MM, int SS) 
{
    if ((HH>0 && HH <=23) && (MM>0 && MM<=59) && (SS>0 && SS <=59))
    {
        return true;
    }
    else
    {
        return false;
    }
}
void printclock(clock c)
{
    cout<<c.HH<<":"<<c.MM<<":"<<c.SS<<endl;
}
Hour GetHour(clock c)
{
    return c.HH;
}
Second GetSecond(clock c)
{
    return c.SS;
}
Minute GetMinute(clock c)
{
    return c.MM;
}
clock AddClock(clock c1, clock c2)
{
    clock c3;
    ;
    c3.SS=c2.SS+c1.SS;
    if (c3.SS>60)
    {
        b=c3.SS/60;
        c3.SS=c3.SS-(60*b);
        c1.MM=c1.MM+b;
    }
    if (c3.SS==60)
    {
        c3.SS=c3.SS-60;
        c1.MM=c1.MM+1;
    }
    c3.MM=c2.MM+c1.MM;
    if (c3.MM>60)
    {
        b=c3.MM/60;
        c3.MM=c3.MM-(60*b);
        c1.HH=c1.HH+b;
    }
    if (c3.MM==60)
    {
        c3.MM=00;
        c1.HH=c1.HH+1;
    }
    c3.HH=c1.HH+c2.HH;
    return c3;
}
bool isEqual(clock c1, clock c2)
{
    if (c1.HH==c2.HH && c1.MM==c2.MM && c1.SS==c2.SS)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void setHour(clock *c, int newHH)
{
    (*c).HH=newHH;
}
void setMinute(clock *c, int newMM)
{
    (*c).MM=newMM;
}
void setSecond(clock *c, int newSS)
{
    (*c).SS=newSS;
}
