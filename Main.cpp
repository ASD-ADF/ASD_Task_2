#include <iostream>
#include "ClockTime.h"
using namespace std;

int main()
{   cout<<"Masukan data jam 1"<<endl;
    cout<<"Jam: ";
    cin>>c1.hh;
    cout<<"Menit: ";
    cin>>c1.mm;
    cout<<"Detik: ";
    cin>>c1.ss;
    cout<<"Masukan data jam 2"<<endl;
    cout<<"Jam: ";
    cin>>c2.hh;
    cout<<"Menit: ";
    cin>>c2.mm;
    cout<<"Detik: ";
    cin>>c2.ss;
    cout<<endl;
    IsValid(c1.hh,c1.mm,c1.ss);
    cout<<"Jam 1: ";
    MakeClock(c1.hh,c1.mm,c1.ss);
    IsValid(c2.hh,c2.mm,c2.ss);
    cout<<"Jam 2: ";
    MakeClock(c2.hh,c2.mm,c2.ss);
    GetHour(c1.hh);
    GetHour(c2.mm);
    GetHour(c1.ss);
  return 0;
}
