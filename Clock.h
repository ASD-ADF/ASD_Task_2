#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED


struct Hour {
    int Hour [23];
    };
struct Minute {
    int Minute [59];
    };
struct Second {
    int Second [59];
    };
struct Clock {
    Hour HH;
    Minute MM;
    Second SS;
    };

bool isValid (int HH,int MM,int SS);
Clock MakeClock (int HH,int MM,int SS);
Hour GetHour (Clock c);
Minute GetMinute (Clock c);
Second GetSecond (Clock c);

void SetHour (Clock c, int newHH);
void SetMinute(Clock c, int newMM);
void SetSecond(Clock c, int newSS);

bool IsEqual (Clock c1,Clock c2);
Clock AddClock (Clock c1,Clock c2);
void PrintClock (Clock c);

#endif // CLOCK_H_INCLUDED
