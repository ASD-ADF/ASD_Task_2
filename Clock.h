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

//validator
bool IsValid (int hh, int mm, int ss);

//constructor
clock MakeClock(int hh, int mm, int ss);

//selector
hour GetHour(clock c);
minute GetMinute (clock c);
second GetSecond (clock c);

//value changer
void SetHour (clock c, int newHH);
void SetMinute(clock c, int newMM);
void SetSecond(clock c, int newSS);

//relational operation
bool IsEqual (clock c1, clock c2);

//arithmetic operation
clock AddClock (clock c1, clock c2);

//output proccess
void PrintClock (clock c);


#endif // CLOCK_H_INCLUDED
