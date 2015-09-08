#include <iostream>
#include <clock.h>

using namespace std;

int main()
{
    clock c1 = makeClock(2,30,4);
    clock c2 = makeClock(6,0,0);
    clock c3 = makeClock(1,62,30); // akan membuat clock dengan -1:-1:-1

    printClock(c1);
    printClock(c2);
    printClock(c3);

    cout << getHour(c1) << endl;
    cout << getMinute(c1) << endl;
    cout << getSecond(c2) << endl;

    c3 = addClock(c1, c2);
    printClock(c3);

    cout << boolalpha << isEqual(c1, c2) << endl;
}
