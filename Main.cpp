#include <iostream>
#include "clock.h"
using namespace std;

bool cekjam,cek;
clock jm;
clock jam3;
bool jamcocok;
int main()
{
    cekjam=false;
    cekjam=IsValid(12,12,12);
    if (cekjam==true)
    {
        cout << "jam valid" << endl;
    }
    else if (cekjam==false)
    {
        cout << "jam salah" << endl;
    }
    jm=MakeClock(12,34,56);
    cout << "sekarang adalah jam: " << jm.jam << ":" << jm.menit << ":" << jm.detik << endl;
    cout << "sekarang jam : " << GetHour (jm) << endl;
    cout << "sekarang menit : " << GetMinute (jm) << endl;
    cout << "sekarang detik : " << GetSecond (jm) << endl;
    SetHour(23);
    SetMinute(13);
    SetSecond (53);
    clock jam,jam2;
    jam=MakeClock(12,13,14);
    jam2=MakeClock(12,13,14);
    jamcocok=IsEqual(jam,jam2);
    if (jamcocok==true) {
        cout << "jam sama ya bos" << endl;
    }
    else if (jamcocok==false) {
        cout << "jam beda keuleus" << endl;
    }

    jam3=TambahJam(jam,jam2);
    printJam(jam3);
    return (0);
}
