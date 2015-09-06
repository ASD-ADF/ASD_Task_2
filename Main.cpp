#include "Clock.h"
// Created by Hizas Sabilal Rasyad

int main()
{
    clock c1 = MakeClock(8,8,10);
    clock c2 = MakeClock(7,0,50);
    clock c3 = MakeClock(21,32,99); //Not Created because IsValid return False

    cout<<"Clock c1  "; PrintClock(c1); cout<<endl;
    cout<<"Clock c2  "; PrintClock(c2); cout<<endl;
    cout<<endl;

    cout<<"Hour of Clock c1 : "<<(GetHour(c1))<<endl;
    cout<<"Minute of Clock c2 : "<<(GetMinute(c2))<<endl;
    cout<<"Second of Clock c2 : "<<(GetSecond(c2))<<endl;
    cout<<endl;

    c3 = AddClock(c1, c2);
    cout<<"Clock c3 created from Clock c1 + Clock c2..."<<endl;
    cout<<"Clock c3 : "; PrintClock(c3); cout<<endl<<endl;

    cout<<"Change Value for Clock c1"<<endl;
    SetHour(&c1,10); SetMinute(&c1,20); SetSecond(&c1,30);
    cout<<"Clock c1  "; PrintClock(c1); cout<<endl<<endl;

    cout<<"1 = True, 0 = False"<<endl;
    cout<<"Is Clock c1 Equal with Clock c2? Answer : "<<IsEqual(c1,c2)<<endl;

    return 0;
}
