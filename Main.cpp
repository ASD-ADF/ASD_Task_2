#include <iostream>
#include "clock.h"

using namespace std;

bool isval; // menampung fungsi isvalid
clock myco,myce; // menampung hasil return MakeClock
bool absah; // menampung funsi cek keabsahan

int main()
{
    isval=false;
    isval=isvalid(04,01,06);
    if (isval==true)
    {
        cout << "Jam valid...!" << endl;
    }
    else if (isval==false)
    {
        cout << "Jam tidak valid...!" << endl;
    }
    myco=MakeClock (14,10,06);
    cout << "Jam saat ini adalah " << myco.hour << " : " << myco.minute << " : " << myco.second << endl;
    cout << "Saat ini jam... [" << GetHour(myco) << "]" << endl;
    cout << "Saat ini menit... [" << GetMinute(myco) << "]" << endl;
    cout << "Saat ini detik... [" << GetSecond(myco) << "]" << endl;
    SetHour(10);
    SetMinute(11);
    SetSecond(12);
    myce=MakeClock (11,12,13);
    absah=IsEqual (myco,myce);
    if (absah==true)
    {
        cout << "Waktu sama...!" << endl;
    }
    else if (absah==false)
    {
        cout << "Waktu tidak sama...!" << endl;
    }
    PrintClock (myco);
    return 0;
}
