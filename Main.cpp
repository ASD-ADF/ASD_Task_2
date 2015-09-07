#include <iostream>
#include "Clock.h"
using namespace std;

int main()
{

    Clock c1 = MakeClock(2,30,4);
    Clock c2 = MakeClock(6,0,0);
    Clock c3 = MakeClock(1,62,30);
    PrintClock(c1);
    cout<<endl;
    PrintClock(c2);
    cout<<endl;
    cout<<GetHour(c1)<<endl;
    cout<<GetHour(c2)<<endl;
    c3 = AddClock(c1, c2);

    PrintClock(c3);
    cout<<endl;
    cout<<IsEqual(c1,c2);
    cout<<endl;
    return 0;
}
