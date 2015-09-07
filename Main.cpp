#include <iostream>
#include "clock.h"
using namespace std;

bool acong; // untuk menampung nilai fungsi IsValid
bool vertified;
clock acong1,acong2; // untuk menampung hasil return dari MakeClock

int main()
{
    acong=false;
    acong=IsValid(19,11,06);
    if (acong==true)
    {
        cout << "Jam Valid" << endl;
    }
    else if (acong==false)
    {
        cout << "Jam tidak valid" << endl;
    }
    acong1=MakeClock(17,10,11);
    acong2=MakeClock(19,11,10);
    cout << "Jam sekarang adalah " << acong1.hour << " : " << acong1.minute << " : " << acong1.second << endl;
    cout << "Sekarang jam ke " << GetHour(acong1) << endl;
    cout << "Sekarang menit ke " << GetMinute(acong1) << endl;
    cout << "Sekarang detik ke " << GetSecond(acong1) << endl;
    SetHour(23);
    SetMinute(59);
    SetSecond(59);
    vertified=IsEqual(acong1,acong2);
    if (vertified==true)
    {
        cout << "Waktu sama" << endl;
    }
    else if (vertified==false)
    {
        cout << "Waktu beda" << endl;
    }
    PrintClock(acong1);
    return 0;
}
