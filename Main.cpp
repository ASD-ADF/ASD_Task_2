#include <iostream>
#include "Clock.h"
#include "clock.cpp"

using namespace std;


Clock ca,cb,cx;
int main()
{
    Clock ca = MakeClock(2,30,4);
    Clock cb = MakeClock(6,0,0);
    Clock cx = MakeClock(1,62,30); //should not be created as the input is invalid, use IsValid function

    PrintClock(ca);
    PrintClock(cb);

    cout << GetHour(ca) << endl;
    cout << GetSecond(cb) << endl;

    cx = AddClock (ca, cb);
    PrintClock (cx);

    cout << IsEqual(ca,cb);
    cin.get();
    return 0;
}
