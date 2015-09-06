#include <iostream>
#include "Clock.h"

bool IsValid(int hh, int mm, int ss) {
    if(((hh>=0 && hh<=23) && (mm>=0 && mm<=59)) && ((ss>=0)&&(ss<=59)))
        return true;
    else
        return false;
};
//return true if 0≤HH≤23, and 0≤MM≤59, and 0≤MM≤59

Clock MakeClock(int HH, int MN, int SS) {
    Clock c;
    c.hh = HH; c.mm = MN; c.ss = SS;
    return c;
};
//return clock created from input

//Selector function
hour GetHour(Clock c) {return c.hh;};
minute GetMinute(Clock c) {return c.mm;};
second GetSecond(Clock c) {return c.ss;};

//Value changer
void SetHour(Clock c, int newHH){
    c.hh = newHH;
};
void SetMinute(Clock c, int newMM){
    c.mm = newMM;
};
void SetSecond(Clock c, int newSS){
    c.ss = newSS;
};

//Other Operation
bool IsEqual (Clock c1, Clock c2){
    if ((c1.ss==c2.ss && c1.mm==c2.mm) && (c1.hh==c2.hh))
        return true;
    else
        return false;
};

Clock AddClock(Clock c1, Clock c2) {
    Clock c3;

    if (c1.ss+c2.ss >= 60) {
        c3.ss = c1.ss+c2.ss - 60;
        c3.mm = 1;
    } else
        c3.ss = c1.ss+c2.ss;

    if (c1.mm + c2.mm >= 60) {
        c3.mm = c3.mm+c1.mm+c2.mm - 60;
        c3.hh = 1;
    } else
        c3.mm = c1.mm+c2.mm;

    if (c1.hh + c2.hh >= 24) {
        c3.hh = c3.hh+c1.hh+c2.hh - 24;
    } else
        c3.hh = c1.hh+c2.hh;

    return c3;
};

void PrintClock (Clock c){
    std::cout<<c.hh<<":"<<c.mm<<":"<<c.ss<<std::endl;
};
