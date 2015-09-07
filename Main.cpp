#include <iostream>
#include "clock.h"
using namespace std;

int main()
{
    clock c1 = makeclock(2,30,4);
    clock c2 = makeclock(6,0,0);
    clock c1 = makeclock(1,62,30)
    printclock(c1);
    printclock(c2);
    cout<<gethour(c1);
    cout<<getsecond(c2);
    c3 = addclock(c1, c2);
    printclock(c3);
    cout<<isequal(c1,c2);
    return 0;
}
