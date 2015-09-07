//Fachri Ul Albab
//IF-38-01
//1301140151

#include <iostream>
#include "Clock.h"
using namespace std;

int main()
{
    clock c1 = CreateClock(8,8,10);
    clock c2 = CreateClock(7,0,50);
    clock c3 = CreateClock(21,32,99);

    cout<<"Clock c1  "; CreateClock(c1); cout<<endl;
    cout<<"Clock c2  "; CreateClock(c2); cout<<endl;
    cout<<endl;

    cout<<"Hour of Clock c1 : "<<(GetHour(c1))<<endl;
    cout<<"Minute of Clock c2 : "<<(GetMinute(c2))<<endl;
    cout<<"Second of Clock c2 : "<<(GetSecond(c2))<<endl;
    cout<<endl;

    return 0;
}
