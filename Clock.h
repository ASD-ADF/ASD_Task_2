#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED
#include<iostream>
#include<conio.h>
using namespace std;


struct hour {
    int jamm{23};
};

struct minute {
    int menitt{59};
};

struct second{
    int detikk{59};
};

struct clock {
    hour hh;
    minute mm;
    second ss;
};


bool isvalid(int jam, int menit, int detik);
clock makeclock(int jam, int menit, int detik);
hour gethour(clock c);
minute getminute(clock c);
second getsecond(clock c);
void sethour (clock c, int newhh);
void setminute(clock c, int newmm);
void setsecond(clock c, int newss);
bool isequal(clock c1, clock c2);
void printclock(clock c);
clock addclock(clock c1, clock c2);

#endif // CLOCK_H_INCLUDED

