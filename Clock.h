#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED
#include <stdio.h>

typedef int hour;
typedef int minute;
typedef int second;
typedef struct waktu{
	hour HH;
	minute MM;
    second SS;}
	clock;

bool isValid(int HH, int MM, int SS);
clock MakeClock(int HH, int MM, int SS);
int GetHour(clock c);
int GetMinute(clock c);
int GetSecond(clock c);
void SetHour(clock *c,int newHH);
void SetMinute(clock *c,int newMM);
void SetHour(clock *c,int newSS);
bool isEqual(clock c1,clock c2);
clock AddClock(clock c1,clock c2);
void PrintClock(clock c);





#endif // CLOCK_H_INCLUDED

