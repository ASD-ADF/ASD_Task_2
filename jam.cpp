#include "jam.h"

bool IsValid(int j, int m, int s)
{
    if (j >=0 && j <=23)
    {
        return true;
    }
    else if (m >=0 && m <= 59)
    {
        return true;
    }
    else if (s >= 0 && s <=59)
    {
        return true;
    }
    else
    {
        return false;
    }
}
clock MakeClock(int j, int m, int s)
{
    bool cek;
    clock tes;

    cek=IsValid(j,m,s);
    if (cek)
    {
        tes.hh.hour=j;
        tes.mm.minute=m;
        tes.ss.second=s;
    }
    return tes;
}

jam GetHour(clock s)
{
    jam get;

    get.hour=s.hh.hour;
    return get;
}

menit GetMinute(clock s)
{
    menit get;

    get.minute=s.mm.minute;
    return get;
}

detik GetSecond(clock s)
{
    detik get;

    get.second=s.ss.second;
    return get;
}

void SetHour(clock *s, int newjam)
{
    (*s).hh.hour = newjam;
}

void SetMinute(clock *s, int newmenit)
{
    (*s).mm.minute = newmenit;
}

void SetSecond(clock *s, int newdetik)
{
    (*s).ss.second = newdetik;
}
bool IsEqual(clock c1, clock c2)
{
    if(c1.hh.hour == c2.hh.hour)
    {
        return true;
    }
    else
    {
        return false;
    }
}
clock AddClock(clock c1, clock c2)
{
    int tmp1, tmp2, hasil, sisa;
    clock ikijam;
    tmp1=(c1.hh.hour *3600) + (c1.mm.minute *60) + (c1.ss.second);
    tmp2=(c2.hh.hour *3600) + (c2.mm.minute *60) + (c2.ss.second);

    hasil = tmp1 + tmp2;

    ikijam.hh.hour = hasil/3600;
    sisa = hasil%3600;
    ikijam.mm.minute=sisa/60;
    ikijam.ss.second=sisa%60;

    return ikijam;
}
void printClock(clock s)
{
    cout <<s.hh.hour<<":"<<s.mm.minute<<":"<<s.ss.second;
}


