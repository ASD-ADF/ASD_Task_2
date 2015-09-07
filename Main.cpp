#include <iostream>
# include "clock.h"

using namespace std;

int main()
{
    clock c1 = MakeClock(2,30,4)
clock c2 = MakeClock(3,0,0)
clock c3 = MakeClock(1,40,30) //should not be created as the input is invalid, use IsValid function

PrintClock(c1)
PrintClock(c2)

output(getHour(c1))
output(getSecond(c2))

c3 = AddClock(c1, c2)
PrintClock(c3)

output(IsEqual(c1,c2))
    return 0;
}
