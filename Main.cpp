#include <iostream>
#include "Clock.h"
#include "clock.cpp"

using namespace std;

int main()
{

    return 0;
    int main();

    c1 = MakeClock(2,30,4);cout << endl;
    c2 = MakeClock(6,0,0);cout << endl;
    c3 = MakeClock(1,62,30);cout << endl;

    PrintClock(c1);cout << endl;
    PrintClock(c2);cout << endl;

    cout << (GetHour(c1)) << endl;
    cout << (GetMinute(c2)) << endl;

    c3 = AddClock(c1, c2);cout << endl;
    PrintClock(c3);cout << endl;

    cout << (IsEqual(c1,c2));cout << endl;

    return 0;
 }
