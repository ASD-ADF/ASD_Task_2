#include <iostream>
using namespace std;
bool IsValid (int hh,int mm,int ss)
{if (hh>=0 && hh<=23 && mm>=0 && mm<=59 && ss>=0 && ss<=59)
{return (true);}
else
{return (false);}
int MakeClock (int hh,int mm,int ss)
{if (IsValid(hh,mm,ss)==true)
{cout <<hh<<":"<<MM<<":"<<SS<< endl;}
else
cout<<"Inputan Salah! Coba lagi!"<<endl;}

int GetHour (int hh) {cout<<hh<<endl;
}

int GetMinute (int mm) {
    cout<<mm<<endl;
}

int GetSecond (int ss) {
    cout<<ss<<endl;
}

