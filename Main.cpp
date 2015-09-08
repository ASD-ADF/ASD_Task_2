#include <iostream>
#include "clock.h"
using namespace std;

int main()
{
    clock c1 = MakeClock(12,13,14);
    clock c2 = MakeClock(8,49,14);
    cout<<IsValid(13,78,45)<<endl;
    printclock(c1);
    printclock(c2);
    cout<<GetMinute(c2)<<endl;
    printclock(AddClock(c1,c2));
    cout<<isEqual(c1,c2)<<endl;
    setMinute(&c2,50);
    printclock(c2);

    return 0;
}
