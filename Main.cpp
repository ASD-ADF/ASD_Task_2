#include <iostream>
#include "clock.h"

using namespace std;
bool valid,vald;

    jam c2,jam1,c;

int main()
{
    vald=false;
    vald=IsValid(10,30,11);
    if (vald==true){
        cout <<"Jam yang valid"<<endl;
    }
    else if (vald==false) {
        cout<<"Jam yang invalid"<<endl;
    }

    SetHour (17);
    SetMinute(10);
    SetSecond(30);
    c=MakeClock(10,11,12);
    c2=MakeClock(14,25,22);

    cout<<" Jam yang telah diinput "<<c.hour<<":"<<c.minute<<":"<<c.second<<endl;
    cout<<" Jam: "<< GetHour(c)<<endl;
    cout<<" Menit : "<<GetMinute(c)<<endl;
    cout<<" Detik : "<<GetSecond(c)<<endl;

        c=MakeClock(10,11,12);
        c2=MakeClock(14,25,22);
        valid=IsEqual(c,c2);
        if (valid==true){
            cout << "Jam sama"<<endl;
        }
        else if (valid==false) {
            cout<<"beda jam"<<endl;
        }
        PrintClock(c);
        return 0;
}
