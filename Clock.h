#ifndef ASD_H_INCLUDED
#define ASD_H_INCLUDED
#include<iostream>
using namespace std;

struct jam{
int hour;
};

struct menit{
    int minute;
};

struct detik{
    int second;
};

struct clock{
     jam hh;
     menit mm;
     detik ss;
};

bool IsValid(int hh, int mm, int ss);

clock MakeClock(int hh, int mm, int ss);

jam GetHour(clock c);
menit GetMinute(clock c);
detik GetSecond(clock c);

void SetHour(clock *c, int newjam);
void SetMinute(clock *c, int newmenit);
void SetSecond(clock *c, int newdetik);

bool IsEqual(clock c1, clock c2);
clock AddClock(clock c1, clock c2);
void Print(clock c);


#endif // ASD_H_INCLUDED

