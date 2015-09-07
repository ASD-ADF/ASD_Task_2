//Fachri Ul Albab
//IF-38-01
//1301140151

#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED
#include <iostream>

using namespace std;

int hour,minute,second;

struct clock
{
    hour HH;
    minute MM;
    second SS;
};

bool IsValid(int HH,MM,SS);
clock MakeClock(int HH,MM,SS);

hour GetHour(clock c);
minute GetMinute(clock c);
second GetSecond(clock c);


#endif // CLOCK_H_INCLUDED
