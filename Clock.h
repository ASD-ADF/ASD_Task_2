#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED
#include <iostream>
#include <conio.h>

using namespacestd;

typedef int hour;
typedef int minute;
typedef int second;

#endif // CLOCK_H_INCLUDED
struct clock
{
    hour HH;
    minute MM;
    second SS;
};

//Function IsValid(HH,MM,SS: integer) : boolean
bool isvalid(int,HH,MM,SS);
//Function MakeClock(HH, MN, SS: integer) : clock
clock makeclock(int HH,MM,SS);
//Selector function
hour gethour(clock c);
minute getminute(clock c);
second getsecond(clock c);
//Value changer
void sethour(clock*c, int newHH);
void setminute(clock*c, int newMM);
void setsecond(clock*c, int newSS);
//Other Operation
//function
clock addclock(clock c1, clock c2);
bool isequal(clock c1, clock c2);
void printclock (clock c);
