#include <iostream>
#include "Clock.h"
using namespace std;


    bool IsValid(int HH, int MM, int SS)
    {
        if ((HH>=0 && HH<=23) && (MM>=0 && MM<=59) && (SS>=0 && SS<=59))
            return true;
        else
            return false;
    }

    TIME MakeClock (int HH, int MM, int SS)
    {
        bool x;
        TIME a;
        x=IsValid(HH,MM,SS);
        if (x)
        {
            a.HH.jam=HH;
            a.MM.menit=MM;
            a.SS.detik=SS;
        }
        return a;
    }

    HOUR GetHour(TIME a)
    {
        return a.HH;
    }
    MINUTE GetMinute (TIME a)
    {
        return a.MM;
    }
    SECOND GetSecond (TIME a)
    {
        return a.SS;
    }

    void SetHour (TIME a, int newHH)
    {
        a.HH.jam=newHH;
    }
    void SetMinute (TIME a, int newMM)
    {
        a.MM.menit=newMM;
    }
    void SetSecond (TIME a, int newSS)
    {
        a.SS.detik=newSS;
    }

    bool IsEqual (TIME a1, TIME a2)
    {
        if ((a1.HH.jam==a2.HH.jam) && (a1.MM.menit==a2.MM.menit) && (a1.SS.detik==a2.SS.detik))
            return true;
        else
            return false;
    }

    TIME AddClock (TIME a1, TIME a2)
    {
        TIME a3;
        if ((a1.HH.jam+a2.HH.jam)>=24)
        {
            a3.HH.jam = a1.HH.jam+a2.HH.jam - 24;
        }
        else
            a3.HH.jam = a1.HH.jam+a2.HH.jam;

        if ((a1.MM.menit+a2.MM.menit)>=60)
        {
            a3.MM.menit = a1.MM.menit+a2.MM.menit - 60;
        }
        else
            a3.MM.menit = a1.MM.menit+a2.MM.menit;

        if ((a1.SS.detik+a2.SS.detik)>=60)
        {
            a3.SS.detik = a1.SS.detik+a2.SS.detik - 24;
        }
        else
            a3.SS.detik = a1.SS.detik+a2.SS.detik;

        return a3;
    }

    void PrintClock (TIME a)
    {
        cout<<a.HH.jam<<":"<<a.MM.menit<<":"<<a.SS.detik<<endl;
    }
