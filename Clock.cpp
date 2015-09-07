#include "clock.h"

bool IsValid(int HH,MM,SS)

    if(((HH>=0)and(HH<=23))and((MM>=0)and(MM<=59))and((SS>=0)and(SS<=59)))
    {
        return true;
    }
    else
    {
        return false;
    }

clock makeclock(int HH,MM,SS)
{
    clock c1;
    c1.HH = HH;
    c1.MM = MM;
    c1.SS = SS;
    return c1;
}
//Selector function
hour gethour(clock c)
{
    return c.HH;
}
minute getminute(clock c)
{
    return c.MM;
}
second getsecond(clock c)
{
    return c.SS;
}

//Value changer
void sethour(clock*c, int newHH)
{
    (*c).HH=newHH;
}
void setminute(clock*c, int newMM)
{
    (*c).MM = newMM;
}
void setsecond(clock*c, int new)
{
    (*c.SS) = newSS;
}

//Other Operation
//Function
bool isequal(clock c1,clock c2)
{
    if((c1.HH=c2.HH)and((c1.MM=c2.MM)and(c1.SS=c2.SS)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

clock addclock (clock c1, clock c2)
{
    clock c3;
    int tm,th = 0;
    if(c1.SS+c2.SS>=60)
    {
        c3.SS=c1.SS+c2.SS-60;
        tm=1;
    }
    else
    {
        c3.SS=c1.SS+c2.SS;
    }
    if(c1.M+c2.MM+tm>=60)
    {
        c3.MM=c1.MM+c2.MM-60+tm;
        th=1;
    }
    else
    {
        c3.MM=c1.M+c2.MM+tm;
    }
    if(c1.HH+c2.HH+th>=24)
    {
        c3.HH=c1.HH+c2.HH-24;
    }
    else
    {
        c3.HH=c1.HH+c2.HH+c2.HH+th;
    }
    return c3;
}
//procedure
void printclock (clock c)
{
    if(c.HH<10){cout<<"0";} cout<<c.HH; cout<<" : ";
    if(c.MM<10){cout<<"0";} cout<<c.MM; cout<<" : ";
    if(c.SS<10){cout<<"0";} cout<<c.SS;
}
