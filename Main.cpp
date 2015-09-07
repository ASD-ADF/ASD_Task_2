// Nama     : Ferawidya Primadevi
//NIM       : 1301140201
//Kelas     : IF - 38 - 01
#include <iostream>
#include "clock.h"

using namespace std;

int main()
{

        Clock c1 = MakeClock(9,9,10); cout<<endl;
        Clock c2 = MakeClock(8,0,40); cout<<endl;
        Clock c3 = MakeClock(20,31,70); cout<<endl;

        Print(c1); cout<<endl;
        Print(c2); cout<<endl;

        cout<<"Jam of Clock c1 : "<<(GetHour(c1))<<endl;
        cout<<"Menit of Clock c2 : "<<(GetMinute(c2))<<endl;
        cout<<"Detik of Clock c2 : "<<(GetSecond(c2))<<endl;
        cout<<endl;

        c3 = AddClock(c1, c2);cout<< endl;
        Print(c3); cout<<endl;
        cout<< IsEqual(c1,c2); cout<<endl;
    return 0;
}
