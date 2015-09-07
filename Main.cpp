#include <iostream>
#include "clock.h"

using namespace std;

bool val,equ; // menampung return isvalid dan isequal
clock m,n;
int jamu,minut,detuk,jb,mb,db;

int main()
{

    val=false;
        cout <<"/n input jam";
        cin >> jamu;
        cout <<"/n input menit";
        cin >> minut;
        cout << "/n input detik";
        cin >> detuk;

    val=isvalid(jamu,minut,detuk);
    if (val==true)
    {
        cout << "Waktu valid ! /n" ;
        m = MakeClock (jamu,minut,detuk);
        cout << "Waktu sekarang adalah " << m.hour << ":" << m.minute << ":" << m.second << "/n";
        cout << "Jam : " << GetHour(m) << "/n";
        cout << "Menit : " << GetMinute(m)<<"/n" ;
        cout << "Second : " << GetSecond (m)<<"/n";
    }
    else if (val== false)
    {
        cout << "Waktu tidak valid ! /n";
    }

    SetHour(02);
    SetMinute(11);
    SetSecond(52);
    n=MakeClock (02,02,32);
    equ = IsEqual (m,n);
    if (equ==true)
    {
        cout << "Waktu Sama ! /n";
    }
    else if (equ==false)
    {
        cout << "Waktu tidak sama ! /n";
    }
    Printclock (m);
    Addclock(m,n);
    return 0;
}
