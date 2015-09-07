#ifndef JAM_H_INCLUDED
#define JAM_H_INCLUDED
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

bool IsValid(int j, int m, int s);

clock MakeClock(int j, int m, int s);

jam GetHour(clock s);
menit GetMinute(clock s);
detik GetSecond(clock s);

void SetHour(clock *s, int newjam);
void SetMinute(clock *s, int newmenit);
void SetSecond(clock *s, int newdetik);

bool IsEqual(clock c1, clock c2);
clock AddClock(clock c1, clock c2);
void printClock(clock s);


#endif // JAM_H_INCLUDED
