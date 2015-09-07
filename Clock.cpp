#include<iostream>
#include "Head1.h"

bool IsValid (int HH, int MM, int SS) {
    if ((HH>=0 && HH<=23) && (MM>=0 && MM<=59) && (SS>=0 && SS<=59))
        return true;
    else
        return false;
    };

clock MakeClock(int HH, int MM, int SS) {
    clock c;
    c.hh=HH;
    c.mm=MM;
    c.ss=SS;
    return c;
};

hour GetHour(clock c) {
    return c.hh;
};

minute GetMinute (clock c) {
    return c.mm;
};

second GetSecond(clock c) {
    return c.ss;
};

void SetHour(clock c, int newHH) {
    c.hh=newHH;
};

void SetMinute(clock c, int newMM) {
    c.mm=newMM;
};

void SetSecond(clock c, int newSS) {
    c.ss=newSS;
};

bool IsEqual(clock c1, clock c2) {
    if ((c1.hh==c2.hh)&&(c1.mm==c2.mm)&& (c1.ss==c2.ss))
        return true;
    else
        return false;
};

clock AddClock(clock c1, clock c2) {
    clock c3;

    if (c1.ss+c2.ss<60)
        c3.ss=c1.ss+c2.ss;
    else {
        c3.mm=1;
        c3.ss=c1.ss+c2.ss-60;
    }

    if (c1.mm+c2.mm<60)
        c3.mm=c1.mm+c2.mm;
    else {
        c3.mm=c3.mm+c1.mm+c2.mm;
        c3.hh=1;
    }

    if (c1.hh+c2.hh>=24)
        c3.hh=c3.hh+c1.hh+c2.hh-24;
    else {
        c3.hh=c1.hh+c2.hh;
    }
    return c3;
};

void PrintClock(clock c) {

    std::cout<<c.hh<<":"<<c.mm<<":"<<c.ss<<std::endl;
};

