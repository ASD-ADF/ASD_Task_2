#include "head.h"
#include <iostream>
using namespace std;

bool IsValid (int HH, int MM, int SS)
{
    if (HH>=0&&HH<=23&&MM>=0&&MM<=59&&SS>=0&&SS<=59)
    {
        return true;
    }
    else
    {
        return false;
    }
}
clock MakeClock (int h,int m, int s)
{
    clock c;
    c.h=h;
    c.m=m;
    c.s=s;
    return c;
}
int GetHour (clock hour)
{
    return hour.h;
}
int GetMinute(clock minute)
{
    return minute.m;
}
int GetSecond(clock second)
{
    return second.s;
}
void SetHour (int HH)
{
    clock cl;
    cl.h=HH;
    cout << "Set Jam Menjadi: " << cl.h << endl;
}
void SetMinute (int MM)
{
    clock cl;
    cl.m=MM;
    cout << "Set Menit Menjadi: " << cl.m << endl;

}
void SetSecond (int SS)
{
    clock cl;
    cl.s=SS;
    cout << "Set Detik Menjadi: " << cl.s << endl;
}
bool IsEqual(clock hour, clock hour2)
{
    bool valid;
    if (hour.h==hour2.h&&hour.m==hour2.m&&hour.s==hour2.s)
    {
        valid=true;
    }
    else
    {
        valid=false;
    }
    return valid;
}

void printJam (clock lock)
{
    cout << lock.h << ":" << lock.m << ":" << lock.s << endl;
}

