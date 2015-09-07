//Nama  :Andhika Gilang K
//NIM   : 1301140361
//Kelas : IF3801

#include <iostream>
#include "Clock.h"

using namespace std;

bool IsValid(int HH,int MM, int SS)
{
    if(HH>=0 && HH<= 23)
    {
        if(MM>=0 && MM<=59)
        {
            if (SS>=0 && SS<=59)
            {
                return true;
            }
            else
            {
               return false;
            }
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

Clock MakeClock(int HH, int MM,int SS)
{
    Clock clck;
    clck.HH = HH;
    clck.MM = MM;
    clck.SS = SS;
    return clck;
}
hour GetHour(Clock j)
{
    return j.HH;
}
minute GetMinute (Clock j)
{
    return j.MM;
}
second  GetSecond (Clock j)
{
    return j.SS;
}
void SetHour (Clock *j,int newHH)
{
    (*j).HH = newHH;
}
void SetMinute (Clock *j,int newMM)
{
    (*j).MM = newMM;
}
void SetSecond (Clock *j,int newSS)
{
    (*j).SS = newSS;
}
bool IsEqual (Clock a1,Clock a2)
{
    if(a1.HH==a2.HH)
    {
        if (a1.MM=a2.MM)
        {
            if (a1.SS=a2.SS)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    else
    {
            return false;
    }

}

Clock AddClock (Clock a1, Clock a2)
{
    Clock a3;
    int menit,jm;
    menit=0;
    jm=0;
    if(a1.SS+a2.SS>=60)
    {
        a3.SS=(a1.SS+a2.SS)-60;
        menit=1;
    }
    else
    {
        a3.SS=a1.SS+a2.SS;
    }
    if (a1.MM+a2.MM>=60)
    {
        a3.MM=(a1.MM+a2.MM)-60+menit;
        jm=1;
    }
    else
    {
        a3.MM=a1.MM+a2.MM+menit;
    }
    if (a1.HH+a2.HH+jm>=24)
    {
        a3.HH=(a1.HH+a2.HH)-24;
    }
    else
    {
        a3.HH=a1.HH+a2.HH+jm;
    }
    return a3;
}
void PrintClock (Clock j)
{
    if (j.HH<10)
    {
        cout<<"0";
    }
    cout<<j.MM<<" : ";
    if(j.SS<10)
    {
        cout<<"0";
    }
    cout<<j.SS<<" : ";
}

