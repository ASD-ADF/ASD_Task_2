#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED

struct clock{
    int hour;
    int minute;
    int second;
};
bool isvalid(int hh, int mm, int ss);
clock MakeClock (int h, int m, int s);
int GetHour (clock jam);
int GetMinute (clock menit);
int GetSecond (clock detik);
void SetHour (int jaman);
void SetMinute (int mantan);
void SetSecond (int setan);
bool IsEqual (clock eq1, clock eq2);
void PrintClock (clock pit);

#endif // CLOCK_H_INCLUDED
