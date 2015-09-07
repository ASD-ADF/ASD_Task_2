#include "clock.h"
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
clock MakeClock (int j,int m, int s)
{
    clock jm;
    jm.jam=j;
    jm.menit=m;
    jm.detik=s;
    return jm;
}
int GetHour (clock hour)
{
    return hour.jam;
}
int GetMinute(clock minute)
{
    return minute.menit;
}
int GetSecond(clock second)
{
    return second.detik;
}
void SetHour (int HH)
{
    clock cl;
    cl.jam=HH;
    cout << "jam sudah di atur ulang menjadi: " << cl.jam << endl;
}
void SetMinute (int MM)
{
    clock cl;
    cl.menit=MM;
    cout << "menit sudah di atur ulang menjadi: " << cl.menit << endl;

}
void SetSecond (int SS)
{
    clock cl;
    cl.detik=SS;
    cout << "detik sudah di atur ulang menjadi: " << cl.detik << endl;
}
bool IsEqual(clock hour, clock hour2)
{
    bool jamcocok;
    if (hour.jam==hour2.jam&&hour.menit==hour2.menit&&hour.detik==hour2.detik)
    {
        jamcocok=true;
    }
    else
    {
        jamcocok=false;
    }
    return jamcocok;
}

void printJam (clock col)
{
    cout << col.jam << ":" << col.menit << ":" << col.detik << endl;
}

clock TambahJam (clock jam,clock jam2)
{
    clock jam3;
    jam3.jam=jam.jam+jam2.jam;
    jam3.menit=jam.menit+jam2.menit;
    jam3.detik=jam.detik+jam2.detik;

    return jam3;
}






