//Nama  :Andhika Gilang K
//NIM   : 1301140361
//Kelas : IF3801

#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED

typedef int hour;
typedef int minute;
typedef int second;
struct Clock
{
    hour HH;
    minute MM;
    second SS;
};

bool IsValid(int HH, int MM,int SS);
//return true if 0<=HH<=23, and 0<=MM<=50, and 0<=MM<=59

Clock MakeClock(int HH,int MM,int SS);
//return clock created from input

hour GetHour(Clock j);
minute GetMinute(Clock j);
second GetSecond(Clock j);

//Value changer
void SetHour(Clock *j,int newHH);
void SetMinute(Clock *j,int newMM);
void SetSecond(Clock *c,int newSS);

//Other Operation
bool IsEqual (Clock a1,Clock a2);
Clock AddClock (Clock a1,Clock a2);
void PrintClock(Clock j);

#endif // CLOCK_H_INCLUDED
