#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED

typedef int Hour;
typedef int Minute;
typedef int Second;

struct Clock
{
    Hour HH;
    Minute MM;
    Second SS;
};

bool IsValid(int HH, int MM, int SS);
//return true if 0≤HH≤23, and 0≤MM≤59, and 0≤MM≤59

Clock MakeClock(int HH, int MM, int SS);
//return clock created from input

Hour GetHour(Clock c);
Minute GetMinute(Clock c);
Second GetSecond(Clock c);

//Value changer
void SetHour(Clock *c, int newHH);
void SetMinute(Clock *c, int newMM);
void SetSecond(Clock *c, int newSS);

//Other Operation
bool IsEqual (Clock c1, Clock c2);
Clock AddClock (Clock c1, Clock c2);
void PrintClock (Clock c);

#endif // CLOCK_H_INCLUDED
