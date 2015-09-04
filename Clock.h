#ifndef CLOCK__H_INCLUDED
#define CLOCK__H_INCLUDED
/* This Program is Created By Muhammad Wildan Iskandar*/
#include <iostream>
#include <conio.h>

using namespace std;

struct hour {
    int jam;
};
struct minute {
    int menit;
};
struct second {
    int detik;
};
struct clock {
    hour hh;
    minute mm;
    second ss;
};
bool isValid (int hh, int mm, int ss);

clock MakeClock (int hh, int mm, int ss);

hour GetHour (clock c);
minute GetMinute (clock c);
second GetSecond (clock c);

void SetHour (clock *c, int newhh);
void SetMinute (clock *c, int newmm);
void SetSecond (clock *c, int newss);

bool IsEqual (clock c1, clock c2);
clock AddClock (clock c1, clock c2);
void Print (clock c);


#endif // CLOCK__H_INCLUDED
