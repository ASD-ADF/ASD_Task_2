#include <iostream>
#include "clock.h"

using namespace std;

bool isvalid (int hh, int mm, int ss)
{
    if (hh>=0&&hh<=23&&mm>=0&&mm<=59&&ss>=0&&ss<=59)
    {
        return true;
    }
    else
    {
        return false;
    }
}
clock MakeClock (int h, int m, int s)
{
    clock co;
    co.hour=h;
    co.minute=m;
    co.second=s;
    return co;
}
int GetHour (clock jam)
{
    return jam.hour;
}
int GetMinute (clock menit)
{
    return menit.minute;
}
int GetSecond (clock detik)
{
    return detik.second;
}

void SetHour (int jaman)
{
    clock jamen;
    jamen.hour=jaman;
    cout << "Jam sudah diganti menjadi... [" << jamen.hour << "]" << endl;
}
void SetMinute (int mantan)
{
    clock manten;
    manten.minute=mantan;
    cout << "Menit sudah diganti menjadi... [" << manten.minute << "]" << endl;
}
void SetSecond (int setan)
{
    clock santen;
    santen.second=setan;
    cout << "Detik sudah diganti menjadi... [" << santen.second << "]" << endl;
}
bool IsEqual (clock eq1, clock eq2)
{
    bool vld;
    if (eq1.hour == eq2.hour && eq1.minute == eq2.minute && eq1.second == eq2.second)
    {
        vld=true;
    }
    else
    {
        vld=false;
    }
    return vld;
}
void PrintClock (clock pit)
{
    cout << pit.hour << " : " << pit.minute << " : " << pit.second << endl;
}

