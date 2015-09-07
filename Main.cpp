#include "asd.h"

using namespace std;

int main()
{
    clock j1,j2,j3;
    jam hour;
    menit minute;
    detik second;

    j1 = MakeClock(02,23,14);
    j2 = MakeClock(1,45,30);
    hour = GetHour(j1);
    minute = GetMinute(j2);
    second = GetSecond(j1);
    j3 = AddClock(j1,j2);
    Print(j3);
    cout << IsEqual(j1,j2);
    Print(j1);
    Print(j2);
    cout<<endl;
}
