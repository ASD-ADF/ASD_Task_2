#ifndef CLOCK_H
#define CLOCK_H

#include <iostream>

using namespace std;

typedef int hour, minute, second;

struct clock
{
    hour HH;
    minute MM;
    second SS;
};

bool isValid(hour h, minute m, second s);
clock makeClock(hour h, minute m, second s);

hour getHour(clock cl);
minute getMinute(clock cl);
second getSecond(clock cl);

void setHour(clock cl, hour newHH);
void setMinute(clock cl, minute newMM);
void setSecond(clock cl, second newSS);

bool isEqual(clock cl, clock cl2);
clock addClock(clock cl, clock cl2);
void printClock(clock cl);

#endif // CLOCK_H
