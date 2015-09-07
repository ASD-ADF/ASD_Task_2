#include "jam.h"
using namespace std;

int main()
{
    clock jam1, jam2, jam3;
    jam a; menit b;bool c;

    jam1=MakeClock(17,30,02);
    jam2=MakeClock(04,20,30);
    a=GetHour(jam1);
    b=GetMinute(jam2);
    jam3=AddClock(jam1, jam2);
    c=IsEqual(jam1, jam2);
    printClock(jam3);
    cout<<c;
}
