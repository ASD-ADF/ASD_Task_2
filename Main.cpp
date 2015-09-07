#include <iostream>
#include "clock.h"

using namespace std;

int main()
{
    Clock c1 = MakeClock(4, 15, 55);
    cout<<endl;
    Clock c2 = MakeClock(2,63,10);
    cout<<endl;
    Clock c3 = MakeClock(1,56,0);
    cout<<endl;
    PrintClock(c1);
    cout<<endl;
    PrintClock(c2);
    cout<<endl;
    cout<<GetHour(c1)<<endl;
    cout<<GetHour(c2)<<endl;
    cout<<endl;
    c3 = AddClock(c1, c2);
    cout<<endl;
    PrintClock(c3);
    cout<<endl;
    cout<<endl;
    cout<<IsEqual(c1,c2);
    cout<<endl;
    return 0;
}

