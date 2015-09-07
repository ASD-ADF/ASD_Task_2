#include <iostream>
#include "Clock.h"


using namespace std;

int main()
{
    clock c1, c2;
    cout<<isValid(23, 23, 23)<<endl;
    c1=makeClock(23, 14, 25);
    c2=makeClock(12, 30, 28);

    cout<<getHour(c1)<<endl;
    cout<<getMinute(c1)<<endl;
    cout<<getSecond(c1)<<endl;

    setHour(c1, 22);
    setMinute(c1, 13);
    setSecond(c1, 24);


    cout<<isEqual(c1, c2);
    addClock(c1, c2);
    return 0;
}
