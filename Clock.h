#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED

struct clock
{
    int jam;
    int menit;
    int detik;
};
bool IsValid (int HH, int MM, int SS);
clock MakeClock (int j,int m, int s);
int GetHour (clock hour);
int GetMinute (clock minute);
int GetSecond (clock second);
void SetHour (int HH);
void SetMinute (int MM);
void SetSecond (int SS);
bool IsEqual (clock jam, clock jam2);
void printJam (clock col);
clock TambahJam (clock jam,clock jam2);
#endif // CLOCK_H_INCLUDED
