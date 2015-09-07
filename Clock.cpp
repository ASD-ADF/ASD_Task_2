// Nama     : Ferawidya Primadevi
//NIM       : 1301140201
//Kelas     : IF - 38 - 01
#include <iostream>
#include "Clock.h"

bool isValid (int HH, int MM, int SS)
{
    if ((HH>=0) and (HH<=23))
    {
        if ((MM>=0) and (MM<=59))
        {
            if ((SS>=0) and (SS<=59))
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

Clock MakeClock (int HH, int MM, int SS)
        {
            Clock y;
            y.HH=HH;
            y.MM=MM;
            y.SS=SS;
            return y;
        }

    hour GetHour (Clock c)
    {
        return c.HH;
    }
    hour GetMinute (Clock c)
    {
        return c.MM;
           }
           hour GetSecond (Clock c)
    {
        return c.SS;
           }
           void SetHour (Clock c, int newHH)
    {
        c.HH=newHH;
    }
    void SetMinute (Clock c, int newMM)
    {
        c.MM=newMM;
    }
    void SetSecond (Clock c, int newSS)
    {
        c.SS=newSS;
    }

bool IsEqual (Clock c1, Clock c2)
{
    if ((c1.HH=c2.HH) and (c1.MM=c2.MM) and (c1.SS=c2.SS))
    {
        return true;
    }
    else
    {
        return false;
    }
}
Clock AddClock (Clock c1, Clock c2)

{
    Clock c3;
    int M, J, S;
    J=0;
    M=0;
    S=0;
if (c1.SS=c1.SS+c2.SS>=60)
{
    c3.SS=(c1.SS+c2.SS)-60;
    M=1;
      }
      else c3.SS=c1.SS+c2.SS;

if (c1.MM=c1.MM+c2.MM>=60)
{
    c3.MM=c1.MM+c2.MM-60;
    J=1;
      }
      else c3.MM=c1.MM+c2.MM+M;

if (c1.HH=c1.HH+c2.HH>=24)
{
    c3.HH=c1.HH+c2.HH-24;
    }
    else
    {
        c3.HH=c1.HH+c2.HH+J;
    }
    return c3;
}
void Print (Clock c)
{

    if (c.HH < 10){ cout<<"0"; } cout<<c.HH; cout<<" : ";
    if (c.MM < 10){ cout<<"0"; } cout<<c.MM; cout<<" : ";
    if (c.SS < 10){ cout<<"0"; } cout<<c.SS;

}


