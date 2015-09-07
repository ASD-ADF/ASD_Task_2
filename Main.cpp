//Firda Aminy Ma'ruf
//IF-38-01
//
#include <iostream>

#include "clock.h"//memasukkan header clock.h untuk digunakan

using namespace std;

int main()
{
    return 0;
    clock c1 = MakeClock(2,30,04)<<endl;
    clock c2 = MakeClock(6,00,00)<<endl;
    cout<<IsValid(1,62,30)<<endl;
    PrintClock(c1);
    PrintClock(c2);
    cout<<GetHour(c1)<<endl;
    cout<<GetSecond(c2)<<endl;
    c3=AddClock(c1,c2);
    PrintClock(c3);
    cout<<endl;
    cout<<endl;
    cout<<IsEqual(c1,c2)<<endl;
    return 0;
}
