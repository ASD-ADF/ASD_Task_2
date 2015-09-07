#include <iostream>
#include <conio.h>

using namespace std;

    bool IsValid (int HH,int MM,int SS)
    {
    if (HH>=0 && HH<=23 && MM>=0 && MM<=59 && SS>=0 && SS<=59)
        {
        return (true);
        }
    else
        return (false);
}

   int MakeClock (int HH,int MM,int SS)
   {
    if (IsValid(HH,MM,SS)==true)
        {
        cout <<HH<<":"<<MM<<":"<<SS<< endl;
        }
    else
        cout<<" Maaf, Anda Salah Menginput"<<endl;
    }

    int GetHour (int HH)
    {
        cout<<HH<<":";
    }

    int GetMinute (int MM)
    {
        cout<<MM<<":";
    }

    int GetSecond (int SS)
    {
        cout<<SS<<":";
    }



