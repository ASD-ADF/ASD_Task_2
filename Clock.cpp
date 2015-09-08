#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED

#ifndef clock_H_INCLUDED
#define clock_H_INCLUDED
#include <iostream>

using namespace std;

#endif
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

Hour GetHour(clock c);
Minute GetMinute(clock c);
Second GetSecond(clock c);

void SetHour (clock *c, int newHH);


void SetMinute (clock *c, int newMM);


void SetSecond (clock *c, int newSS);

bool IsEqual (clock c1, clock c2);
clock AddClock (clock c1, clock c2);

void PrintClock (clock c );

#endif

#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED

#ifndef clock_H_INCLUDED
#define clock_H_INCLUDED
#include <iostream>

using namespace std;

#endif
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

Hour GetHour(clock c);
Minute GetMinute(clock c);
Second GetSecond(clock c);

void SetHour (clock *c, int newHH);


void SetMinute (clock *c, int newMM);


void SetSecond (clock *c, int newSS);

bool IsEqual (clock c1, clock c2);
clock AddClock (clock c1, clock c2);

void PrintClock (clock c );

#endif
