#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "clock.h"

using namespace std;

type int hour       : integer {0..23}
type int minute     : integer {0..59}
type int second     : integer {0..59}

type Clock :
   {
       HH  : Hour, {Hour [0..23]}
       MM  : Minute, {Minute [0..59]}
       SS  : Second {Second [0..59]}
   }

typedef int hour;
typedef int minute;
typedef int second;

bool IsValid(int HH,int MN,int SS);
clock MakeClock(int HH,int MN,int SS);
hour gethour(clock c);
minute getminute(clock c);
second getsecond(clock c);
void sethour(clock *c, int newHH )
void setminute(clock *c, int newMM )
void setsecond(clock *c, int newSS )
bool IsEqual (clock c1, clock c2)
clock AddClock (clock c1, clock c2)
void displayClock(clock c);

#endif // CLOCK_H_INCLUDED
