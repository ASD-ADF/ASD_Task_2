#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED
#include <iostream>
#include <conio.h>
using namespace std;

// Created by Hizas Sabilal Rasyad

typedef int hour;
typedef int minute;
typedef int second;

struct clock
{
    hour HH;
    minute MM;
    second SS;
};

bool IsValid(int HH,int MM,int SS);
clock MakeClock(int HH,int MM,int SS);

hour GetHour(clock c);
minute GetMinute(clock c);
second GetSecond(clock c);

void SetHour(clock *c, int newHH);
void SetMinute(clock *c, int newMM);
void SetSecond(clock *c, int newSS);

clock AddClock(clock c1, clock c2);
bool IsEqual(clock c1,clock c2);
void PrintClock (clock c);

#endif
