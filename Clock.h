#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED

typedef int hour;
typedef int minute;
typedef int second;
struct clock
{
    hour hh;
    minute mm;
    second ss;
};

bool isvalid(int hh, int mm, int ss);
clock MakeClock (int HH, int MM, int SS);
int GetHour (clock c);
int GetMinute (clock c);
int GetSecond (clock c);
void SetHour (clock c, int newHH);
void SetMinute (clock c, int newMM);
void SetSecond (clock c, int newSS);
bool IsEqual (clock c1, clock c2);
clock addClock (clock c1, clock c2);
void PrintClock (clock c);

#endif
