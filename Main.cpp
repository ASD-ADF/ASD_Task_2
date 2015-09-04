#include "Clock_.h"
/* This Program is Created By Muhammad Wildan Iskandar*/

//using namespace std;

int main()
{
    clock j1,j2,j3;
    hour jam;
    minute menit;
    second detik;

    j1 = MakeClock(2,30,4);
    j2 = MakeClock(6,0,0);
    jam = GetHour(j1);
    menit = GetMinute(j2);
    detik = GetSecond(j1);
    cout << jam.jam<<endl;
    cout<< menit.menit<<endl;
    cout << detik.detik<<endl;
    j3 = AddClock(j1,j2);
    Print(j3);
    cout << IsEqual(j1,j2);
    cout<<endl;

    SetHour(&j1,4);
    SetMinute(&j1,8);
    SetSecond(&j1,10);
    jam = GetHour(j1);
    menit = GetMinute(j1);
    detik = GetSecond(j1);
    cout << jam.jam<<endl;
    cout<< menit.menit<<endl;
    cout << detik.detik<<endl;
    j3 = AddClock(j1,j2);
    Print(j3);
    cout << IsEqual(j1,j2);
    getch();
    return 0;
}
