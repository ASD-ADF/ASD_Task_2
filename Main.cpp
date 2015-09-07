#include <iostream>
#include"clock.h"

using namespace std;

int main()
{
    return 0;
    clock c1=MakeClock(2,30,4);
    clock c2=MakeClock(6,0,0);
    clock c3=MakeClock(1,62,30);
    IsValid(1,62,30);

    printclock(c1);
    printclock(c2);

    cout<<GetHour(c1)<<endl;
    cout<<GetSecond(c2)<<endl;

    printclock(AddClock(c1,c2));
    cout<<IsEqual(c1,c2)<<endl;

    return 0;
}

