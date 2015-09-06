#include <iostream>
#include "Clock.h"

using namespace std;

int main()
{
    clock c1 = MakeClock(2,30,4);
    clock c2 = MakeClock(6,0,0);
    clock c3 = MakeClock(1,62,30);//tidak bisa dibuat karna isvalid mereturn false

    PrintClock(c1);
    PrintClock(c2);

    cout << (GetHour(c1));
    cout << (GetSecond(c2));

    c3 = AddClock(c1,c2);

    cout << (IsEqual(c1,c2));
}
