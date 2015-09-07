#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED

struct clock
{
    int h,m,s;
};
bool IsValid (int HH, int MM, int SS);
clock MakeClock (int h,int m, int s);
int GetHour (clock hour);
int GetMinute (clock minute);
int GetSecond (clock second);
void SetHour (int HH);
void SetMinute (int MM);
void SetSecond (int SS);
bool IsEqual (clock h, clock h2);
void printJam (clock lock);
#endif // HEAD_H_INCLUDED
