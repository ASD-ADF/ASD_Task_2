//Irfan Trianto, IF-38-01, 1301144111

#ifndef clock_H_INCLUDED
#define clock_H_INCLUDED
#include <iostream>

using namespace std;

typedef int Hour;
typedef int Minute;
typedef int Second;

struct clock
{
    Hour HH;
    Minute MM;
    Second SS;
};

bool isValid(int HH, int MM, int SS);
clock MakeClock(int HH, int MM, int SS);
#include <iostream>
//Selector function
Hour GetHour(clock c);
Minute GetMinute(clock c);
Second GetSecond(clock c);

//Value changer
//SetHour
void SetHour (clock *c, int newHH);

//SetMinute
void SetMinute (clock *c, int newMM);

//SetSecond
void SetSecond (clock *c, int newSS);

//Other Operation
bool IsEqual (clock c1, clock c2);
clock AddClock (clock c1, clock c2);

void PrintClock (clock c );

//mengakhiri header
#endif
