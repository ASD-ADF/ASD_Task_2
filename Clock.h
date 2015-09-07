#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED
#include <iostream>

struct clock{
int hour;
int minute;
int second;
} ;

bool IsValid(int HH, int MM, int SS);
clock MakeClock(int HH, int MM, int SS);
int GetHour(clock cl);
int GetMinute(clock cl);
int GetSecond(clock cl);
void SetHour(int HH);
void SetMinute(int MM);
void SetSecond(int SS);
bool IsEqual(clock c1, clock c2);
clock AddClock(clock c1, clock c2);
void PrintClock(clock c1);


#endif // CLOCK_H_INCLUDED
