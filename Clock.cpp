#include "clock.h"
#include <iostream>

using namespace std;

bool IsValid(int HH, int MM, int SS)
{


    if ((HH>=0)&&(HH<=23)&&(MM>=0)&&(MM<=59)&&(SS>=0)&&(SS<=59)){
    return true;
    }
    else{
        return false;
    }
}
clock MakeClock(int HH, int MM, int SS)
{
    clock cl;
    cl.hour=HH;
    cl.minute=MM;
    cl.second=SS;
    return cl;
}
int GetHour(clock cl)
{

    return cl.hour;
}
int GetMinute(clock cl)
{

    return cl.minute;
}
int GetSecond(clock cl)
{

    return cl.second;
}
void SetHour(int HH)
{
    clock clo;
    clo.hour=HH;
    cout << "Jam Sudah di set menjadi " << clo.hour << endl;

}
void SetMinute(int MM)
{
    clock clo;
    clo.minute=MM;
    cout << "Menit Sudah di set menjadi " << clo.minute << endl;

}

void SetSecond(int SS)
{
    clock clo;
    clo.second=SS;
    cout << "Second Sudah di set menjadi " << clo.second << endl;

}
bool IsEqual(clock c1, clock c2)
{
    bool valid;
    if (c1.hour == c2.hour&&c1.minute==c2.minute&&c1.second==c2.second){
        valid=true;
    }
    else{
        valid=false;
    }
    return valid;
}

void PrintClock(clock c1)
{
   cout << c1.hour << ":" << c1.minute<< ":" << c1.second << endl;
}




