/*  Nama  : Thoriq Abdul Aziz M
    Kelas : IF-38-01
    Nim   : 1301144341 */
#include <iostream>
#include "clock.h"
#include "clock.cpp"
using namespace std;

int main()
{
    clock c1= MakeClock(3,3,4);
    clock c2=MakeClock(6,0,0);
    clock c3=MakeClock(1,62,30);
    IsValid(1,62,30);

    SetHour(&c1,2);
    SetMinute(&c1,30);
    SetSecond(&c1,04);

    printclock(c1);
    PrintClock(c2);

    GetHour(c1);
    GetMinute(c1);
    GetSecond(c1);

    c3=AddClock(c1,c2);

    printclock(c3);
    cout<<(IsEqual(c1,c2));
    return 0;
}
