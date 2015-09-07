#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED
#include <iostream>
#include <cstdlib>
#include <stdlib.h>

//#include <clock.h>

struct hour
{
    int h;
};
struct minute{
int m;
};
struct second{
int s;
};

struct clock
{
    hour hh;
    minute mm;
    second ss;
};

bool IsValid (int hh, int mm, int ss);

clock_t MakeClock (int hh, int mm, int ss);

hour GetHour(clock_t c);
minute GetMinute (clock_t c);
second GetSecond (clock_t c);

void SetHour (clock_t c, int newHH);
void SetMinute(clock_t c, int newMM);
void SetSecond(clock_t c, int newSS);

bool IsEqual (clock_t c1, clock_t c2);

clock_t AddClock (clock_t c1, clock_t c2);

void PrintClock (clock_t c);


#endif // CLOCK_H_INCLUDED
