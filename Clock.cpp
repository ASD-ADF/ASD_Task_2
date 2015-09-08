
#include <iostream>

#include "clock.h"

using namespace std;

int main()
{
    return 0;
    clock c1 = MakeClock(2,30,04);
    clock c2 = MakeClock(6,00,00);
    clock c3 = MakeClock(8,30,04);

    PrintClock(c1);
        cout<<"\n";
    PrintClock(c2);
        cout<<"\n";

    SetHour(&c1,8);
    SetMinute(&c1,4);
    SetSecond(&c1,5);

    GetHour(c1);
    GetMinute(c1);
    GetSecond(c1);

    c3 = AddClock(c1,c2);

    PrintClock(c3);
    cout<<"\n";

    cout<<IsEqual(c1,c2)<<"\n";
    cout<<GetHour(c1);
    return 0;
 }
