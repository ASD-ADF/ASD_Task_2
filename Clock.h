#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED
using namespace std;
typedef int Hour;
typedef int Minute;
typedef int Second;
 
struct clock { 
    Hour HH;
    Minute MM;
    Second SS;
};
bool IsValid(int HH,int MM,int SS); 
clock MakeClock(int HH, int MM, int SS);
 
Hour GetHour(clock c);
Minute GetMinute(clock c);
Second GetSecond(clock c);
 
void setHour(clock *c, int newHH);
void setMinute(clock *c, int newMM);
void setSecond(clock *c,int newSS);

bool isEqual(clock c1,clock c2);
clock AddClock(clock c1,clock c2);
void printclock (clock c);
 #endif // CLOCK_H_INCLUDED
