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

int newhh;
int newmm;
int newss;

bool IsValid (int hh, int mm, int ss);
clock MakeClock (int hh, int mm, int ss);

hour GetHour(clock c);
minute GetMinute(clock c);
second GetSecond(clock c);

void SetHour(clock c, int newhh);
void SetMinute(clock c, int newmm);
void SetSecond(clock c, int newss);

bool IsEqual(clock c1, clock c2);
clock AddClock(clock c1, clock c2);
void PrintClock(clock c);
#endif // CLOCK_H_INCLUDED
