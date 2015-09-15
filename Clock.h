#ifndef TASK2_1103134368_H_INCLUDED
#define TASK2_1103134368_H_INCLUDED

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"


using namespace std;

//TYPE Hour     : integer {0..23}
//TYPE Minute     : integer {0..59}
//TYPE Second     : integer {0..59}
//TYPE Clock :
   // <
    //    HH  : Hour, {Hour [0..23]}
    //    MM  : Minute, {Minute [0..59]}
     //   SS  : Second {Second [0..59]}
   // >
typedef int Hour;
typedef int Minute;
typedef int Second;

bool IsValid(int HH,int MN,int SS);
//return true if 0≤HH≤23, and 0≤MM≤59, and 0≤MM≤59

clock MakeClock(int HH,int MN,int SS);
//return clock created from input

//Selector function
Hour GetHour(clock c);
Minute GetMinute(clock c);
Second GetSecond(clock c);

//Value changer
Void SetHour(clock *c, int newHH )
Void SetMinute(clock *c, int newMM )
Void SetSecond(clock *c, int newSS )


//Other Operation
bool IsEqual (clock c1, clock c2)
clock AddClock (clock c1, clock c2)
void displayClock(clock c);


#endif // TASK2_1103134368_H_INCLUDED
