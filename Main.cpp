#include <iostream>
#include "Clock.h"
using namespace std;

int main()
{
    cout<<"Masukan jam ke-1"<<endl;
    cout<<"Jam : ";
    cin>>c1.HH;
    cout<<"Menit : ";
    cin>>c1.MM;
    cout<<"Detik : ";
    cin>>c1.SS;
    cout<<"Masukan jam ke-2"<<endl;
    cout<<"Jam : ";
    cin>>c2.HH;
    cout<<"Menit : ";
    cin>>c2.MM;
    cout<<"Detik : ";
    cin>>c2.SS;
    cout<<endl;
    IsValid(c1.HH,c1.MM,c1.SS);
    cout<<"Jam ke-1 : ";
    MakeClock(c1.HH,c1.MM,c1.SS);
    IsValid(c2.HH,c2.MM,c2.SS);
    cout<<"Jam ke-2 : ";
    MakeClock(c2.HH,c2.MM,c2.SS);
    GetHour(c1.HH);
    GetHour(c2.MM);
    GetHour(c1.SS);
    return 0;
}
