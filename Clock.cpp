#include <iostream>
#include "clock.h"

using namespace std;

bool isvalid (int HH,MM,SS)
{
    if (((HH>=0)&&(HH<=23))&&((MM>=0)&&(MM<=59))&&((SS>=0)&&(SS<=59))){
        return true;
    }
    else
        return false;
}

clock MakeClock (int HH,MM,SS)
{
    clock mc;
    mc.hour = HH;
    mc.minute = MM;
    mc.second = SS;
    return mc;
}

int GetHour(clock c)
{
    return c.hour;
}

int GetMinute (clock c)
{
    return c.minute;
}

int GetSecond (clock c)
{
    return c.second;
}

void SetHour (int newHH)
{
    clock c;
    c.hour=newHH;
    cout << "Jam di set menjadi " << c.hour << "/n";
}

void SetMinute (int newMM)
{
    clock c;
    c.minute=newMM;
    cout << "Menit di set menjadi " <<c.minute<<"/n";
}

void setSecond (int newSS)
{
    clock c;
    c.second=SS;
    cout << "Detik di set menjadi " << c.second <<end1;
}

bool IsEqual (clock c1, clock c2)
{
    bool cek;
    if ((c1.hour == c2.hour)&&(c1.minute==c2.minute)&&(c1.second==c2.second)){
        cek=true;
    }
    else {
        cek=false;
    }
    return cek;
}

clock AddClock (clock c1,clock c2)
{
    clock c;
    c.hour = c1.hour + c2.hour;
    c.minute = c1.minute + c2.minute;
    c.second = c1.second + c2.second;
    return c;
}

void PrintClock (clock c)
{
    cout << c.hour << ":" << c.minute << ":" << c.second << "/n";
}

