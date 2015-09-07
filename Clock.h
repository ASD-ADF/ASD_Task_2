#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED

typedef int hour;
typedef int minute;
typedef int second;

struct clock 
{
    hour HH;
    minute MM;
    second SS;
};

bool IsValid (int HH,int MM,int SS)
clock MakeClock(int HH,int MM,int SS)

hour GetHour (clock j)
minute GetMinute (clock j)
second GetSecond (clock j)

void SetHour (clock *j, int newHH);
void SetMinute (clock *j, int newMM);
void SetSecond (clock *j, int newSS);

bool IsEqual (clock j1, clock j2);
clock AddClock (clock j1, clock j2);
void PrintClock (clock j );

#endif // CLOCK_H_INCLUDED

