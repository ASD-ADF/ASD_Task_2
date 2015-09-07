#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED

struct clock{
    int hour;
    int minute;
    int second;
};

bool isvalid (int HH,MM,SS);
clock MakeClock (int HH,MN,SS);

int GetHour (clock c);
int GetMinute (clock c);
int GetHour (clock c);

void SetHour (int newHH);
void SetMinute (int newMM);
void SetSecond (int newSS);

bool IsEqual (clock c1, clock c2);
clock AddClock (clock c1, clock c2);
void PrintClock (clock c);

#endif // CLOCK_H_INCLUDED
