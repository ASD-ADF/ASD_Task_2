#include <iostream>
#include "Clock.h"


using namespace std;

 int main()
 {
    cout<<"Masukan jam pertama"<<endl;
    cout<<"Jam : ";
    cin>>ca.HH;
    cout<<"Menit : ";
    cin>>ca.MM;
    cout<<"Detik : ";
    cin>>ca.SS;
    cout<<"Masukan jam kedua"<<endl;
    cout<<"Jam : ";
    cin>>cb.HH;
    cout<<"Menit : ";
    cin>>cb.MM;
    cout<<"Detik : ";
    cin>>cb.SS;
    cout<<endl;
    IsValid(ca.HH,ca.MM,ca.SS);
    cout<<"Jam Pertama : ";
    MakeClock(ca.HH,ca.MM,ca.SS);
    IsValid(cb.HH,cb.MM,cb.SS);
    cout<<"Jam Kedua : ";
    MakeClock(cb.HH,cb.MM,cb.SS);
    GetHour(ca.HH);
    GetHour(cb.MM);
    GetHour(cc.SS);
    return 0;
 }
