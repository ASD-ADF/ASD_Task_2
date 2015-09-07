#include <iostream>

using namespace std;

int main()
{
  return 0;
}
#include <iostream>
#include "head.h"
using namespace std;

bool checkhour,check;
clock c;
bool valid;
int main()
{
    checkhour=false;
    checkhour=IsValid(12,12,12);
    if (checkhour==true)
    {
        cout << "Jam Valid" << endl;
    }
    else if (checkhour==false)
    {
        cout << "Jam Invalid" << endl;
    }
    c=MakeClock(8,22,34);
    cout << "Sekarang Jam: " << c.h << ":" << c.m << ":" << c.s << endl;
    cout << "Jam : " << GetHour (c) << endl;
    cout << "Menit : " << GetMinute (c) << endl;
    cout << "Detik : " << GetSecond (c) << endl;
    SetHour(12);
    SetMinute(25);
    SetSecond (35);
    clock hour,hour2;
    hour=MakeClock(16,17,18);
    hour2=MakeClock(19,20,21);
    valid=IsEqual(hour,hour2);
    if (valid==true)
    {
        cout << "Jam Sama" << endl;
    }
    else if (valid==false)
    {
        cout << "Jam Beda" << endl;
    }
    printJam(hour2);
    return (0);
}
