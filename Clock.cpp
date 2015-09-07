#include "waktu.h"
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
waktu Makewaktu (int j,int m, int s)
{
    waktu jm;
    jm.jam=j;
    jm.menit=m;
    jm.detik=s;
    return jm;
}
int GetHour (waktu hour)
{
    return hour.jam;
}
int GetMinute(waktu minute)
{
    return minute.menit;
}
int GetSecond(waktu second)
{
    return second.detik;
}
void SetHour (int HH)
{
    waktu cl;
    cl.jam=HH;
    cout << "jam sudah di atur ulang menjadi: " << cl.jam << endl;
}
void SetMinute (int MM)
{
    waktu cl;
    cl.menit=MM;
    cout << "menit sudah di atur ulang menjadi: " << cl.menit << endl;

}
void SetSecond (int SS)
{
    waktu cl;
    cl.detik=SS;
    cout << "detik sudah di atur ulang menjadi: " << cl.detik << endl;
}
bool IsEqual(waktu hour, waktu hour2)
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

void printJam (waktu col)
{
    cout << col.jam << ":" << col.menit << ":" << col.detik << endl;
}
