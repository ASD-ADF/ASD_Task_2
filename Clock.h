#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED

struct clock {
    int hh;
    int mm;
    int ss;
};
clock c1;
clock c2;

bool IsValid(int hh,int mm,int ss);
int MakeClock(int hh,int mm,int ss);
int GetHour(int hh);
int GetMinute(int mm);
int GetSecond(int ss);
int AddClock(int hh);
}

#endif // CLOCK_H_INCLUDED
