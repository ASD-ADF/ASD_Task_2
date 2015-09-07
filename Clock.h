#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED
#include <iostream>

struct jam {
int hour;
int minute;
int second;
};

bool IsValid (int HH,int MM,int SS);
jam MakeClock(int HH,int MM,int SS);

int GetHour(jam c);
int GetMinute (jam c);
int GetSecond (jam c);

void SetHour(int HH);
void SetMinute(int MM);
void SetSecond (int SS);

bool IsEqual(jam c,jam c2);
void PrintClock(jam c);



#endif // HEADERR_H_INCLUDED
