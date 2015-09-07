#include <iostream>
#include "Clock.h"
using namespace std;

int main()
{
    TIME a1 = MakeClock(2,30,4);
    cout<<endl;
    TIME a2 = MakeClock(6,0,0);
    cout<<endl;
    TIME a3 = MakeClock(1,62,30);
    cout<<endl;
    cout<<"======================"<<endl;
    PrintClock(a1);
    cout<<endl;
    PrintClock(a2);
    cout<<endl;
    cout<<"======================"<<endl;
    cout<<GetHour(a1)<<endl;
    cout<<GetSecond(a1)<<endl;
    cout<<"======================"<<endl;
    a3 = AddClock(a1,a2);
    PrintClock(a3);
    cout<<endl;
    cout<<"======================"<<endl;
    cout<<IsEqual(a1,a2)<<endl;

  return 0;
}
