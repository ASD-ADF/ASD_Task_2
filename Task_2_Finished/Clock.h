#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED

typedef int hour;
typedef int minute;
typedef int second;

struct clock{
    hour HH;
    minute MM;
    second SS;
};

bool isValid(int HH, int MM, int SS);
clock makeClock(int HH, int MM, int SS);
hour getHour(clock c);
minute getMinute(clock c);
second getSecond(clock c);
void setHour(clock c, int newHH);
void setMinute(clock c, int newMM);
void setSecond(clock c, int newSS);
bool isEqual(clock c1, clock c2);
clock addClock(clock c1, clock c2);

#endif // CLOCK_H_INCLUDED
