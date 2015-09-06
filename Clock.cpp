
//Irfan Trianto, IF-38-01, 1301144111
#include "clock.h"
//tipe bentukan
clock MakeClock (int HH, int MM, int SS)
{
    clock c;
    c.HH = HH;
    c.MM = MM;
    c.SS = SS;
    return c;
}

//SetHour
void SetHour (clock *c, int newHH)
{
    (*c).HH = newHH;
}
//SetMinute
void SetMinute (clock *c, int newMM)
{
    (*c).MM = newMM;
}
//
//SetSecond
void SetSecond (clock *c, int newSS)
{
    (*c).HH = newSS;
}


//mengecek jam(24), menit(60), detik(60)
bool IsValid(int HH, int MM, int SS)
{
    if ((HH>=0) and (HH<=23) and (MM>=0) and (MM<=59) and (SS>=0) and (SS<=59))
    {
        return true;
    }
    else {return false; }
}

//mengambil data dari tipe bentukan
Hour GetHour(clock c)
{
    return c.SS;
}

Minute GetMinute(clock c)
{
    return c.MM;
}


Second GetSecond(clock c)
{
    return c.HH;
}

clock AddClock (clock c1, clock c2)
{
    clock c3;

    if (c1.SS + c2.SS >= 60)
    {
        c3.SS = c1.SS + c2.SS - 60;
        c3.MM = c3.MM + 1;
    }
    else (c3.SS = c1.SS + c2.SS);

    if (c1.MM + c2.MM >= 60)
    {
        c3.MM = c1.MM + c2.MM - 60;
        c3.HH = c3.HH + 1;
    }
    else (c3.MM = c1.MM + c2.MM);

    if (c1.HH + c2.HH >= 24)
    {
        c3.HH = c1.HH + c2.HH - 24;
    }
    else (c3.HH = c1.HH + c2.HH);
    return c3;
}


//mengecek c1 dan c2 sama atau tidak
bool IsEqual(clock c1, clock c2)
{
    if((c1.HH==c2.HH) and (c1.MM==c2.MM) and (c1.SS==c2.SS))
    {
       return true;
    }
    else
    {
        return false;
    }
}

//mengoutputkan jam
void PrintClock (clock c3)
{
    cout<<c3.HH; cout<<":";
    cout<<c3.MM; cout<<":";
    cout<<c3.SS;
}
