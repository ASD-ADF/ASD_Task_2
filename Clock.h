#ifndef CLOCK_INCLUDED
#define CLOCK_INCLUDED

struct clock
{
    int hour;
    int minute;
    int second;
};

bool IsValid(int hh,int mm, int ss);
clock MakeClock(int h,int m, int s);
int GetHour(clock jam);
int GetMinute(clock menit);
int GetSecond(clock detik);
void SetHour(int jaman);
void SetMinute(int menitan);
void SetSecond(int detikan);
bool IsEqual(clock waktu,clock waktu1);
void PrintClock(clock pukul);
#endif // CLOCK_INCLUDED
