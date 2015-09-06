#include <iostream>
#include "clock.h"//memasukkan header clock.h
using namespace std;

int main()
{
    clock1 c1 = MakeClock(12,13,14);
    clock1 c2 = MakeClock(8,49,14);
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
//Angky Fajriati MS Musa
//If-38-01 1301141221
