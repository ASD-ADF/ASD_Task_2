#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED

#include <iostream>
using namespace std;

struct HOUR
{
    int jam;
};
struct MINUTE
{
    int menit;
};
struct SECOND
{
    int detik;
};
struct TIME
{
    HOUR HH;
    MINUTE MM;
    SECOND SS;
};

bool IsValid (int HH, int MM, int SS);

TIME MakeClock (int HH, int MM, int SS);

HOUR GetHour (TIME a);
MINUTE GetMinute (TIME a);
SECOND GetSecond (TIME a);

void SetHour (TIME a, int newHH);
void SetMinute (TIME a, int newMM);
void SetSecond (TIME a, int newSS);

bool IsEqual (TIME a1, TIME a2);
TIME AddClock (TIME a1, TIME a2);
void PrintClock (TIME a);

#endif // CLOCK_H_INCLUDED
