#include"clock.h"
#include<iostream>

using namespace std;

bool IsValid (int HH, int MM, int SS)
{
    if ((0<=HH && HH<=23) && (0<=MM && MM<=59) && (0<=SS && SS<=59))
    {
        return true;
    }
    else
    {
        return false;
    }
}

clock MakeClock (int HH, int MM, int SS)
{
    clock jam;
    jam.HH=HH;
    jam.MM=MM;
    jam.SS=SS;
    return jam;
}

Hour GetHour(clock c)
{
     return c.Hour;
}

Minute GetMinute(clock c)
{
    return c.Minute;
}

Second GetSecond(clock c)
{
    return c.second;
}

void SetSecond(clock c, int newSS)
{
    c.SS=newSS;
}

bool IsEqual(clock c1, clock c2)
{
    if((c1.HH==c2.HH) && (c1.MM==c2.MM) && (c1.SS==c2.SS))
    {
        return true;
    }
    else
    {
        return false;
    }
}

clock AddClock(clock c1, clock c2)
{
    clock c3;
    int jum1,jum2,jum,sisa;
    jum1=(c1.HH*3600)+(c1.MM*60)+(c1.SS);
    jum2=(c2.HH*3600)+(c2.MM*60)+(c2.SS);
    jum=jum1+jum2;

    c3.HH=jum div 3600;
    sisa=jum mod 3600;
    c3.MM=sisa div 60;
    c3.SS=sisa mod 60;
    return c3;
}

void PrintClock(clock c)
{
    cout<<c.HH<<":"<<c.MM<<":"<<c.SS<<endl;
}

//Annisa Rizki Pratiwi Wibowo
//1301144391
//IF-38-01

