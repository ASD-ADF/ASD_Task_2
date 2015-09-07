#include <iostream>
#include "clock.h"
using namespace std;

bool IsValid(int hh,int mm, int ss)
{
    if (hh >= 0&&hh <= 23&&mm >= 0&&mm <= 59&&ss >= 0&&ss <= 59)
    {
        return true;
    }
    else
    {
        return false;
    }
}

clock MakeClock(int h,int m, int s)
{
    clock clo;
    clo.hour=h;
    clo.minute=m;
    clo.second=s;
    return clo;
}
int GetHour(clock jam)
{
    return jam.hour;
}

int GetMinute(clock menit)
{
    return menit.minute;
}

int GetSecond(clock detik)
{
    return detik.second;
}

void SetHour(int jaman)
{
    clock jikan;
    jikan.hour=jaman;
    cout << "Jam sudah diatur menjadi " << jikan.hour << " beibeh !" << endl;
}

void SetMinute(int menitan)
{
    clock bishona;
    bishona.minute=menitan;
    cout << "Menit sudah diatur menjadi " << bishona.minute << " beibeh !" << endl;
}

void SetSecond(int detikan)
{
    clock byo;
    byo.second=detikan;
    cout << "Detik sudah diatur menjadi " << byo.second << " beibeh !" << endl;
}

bool IsEqual(clock waktu,clock waktu1)
{
    bool vertified;
    if (waktu.hour == waktu1.hour&&waktu.minute ==  waktu1.minute&&waktu.second == waktu1.second)
    {
        vertified=true;
    }
    else
    {
        vertified=false;
    }
    return vertified;
}

void PrintClock(clock pukul)
{
    cout << pukul.hour << " : " << pukul.minute << " : " << pukul.second << endl;
}


