#include <iostream>
#include "clock.h"

bool isvalid (int hh,int mm ,int ss){
    if (((hh>=0) and (hh<=23)) and ((mm>=0) and (mm<=59)) and ((ss>=0) and (ss<=59)))
        return true;
    else
        return false;
        
void printclock (clock c) {
   cout<<c.hh<<":"<<c.mm<<":"<<c.ss;};


hour gethour(clock c){
            return c.hh;
        };
minute getminute(clock c){
            return c.mm;
        };
second getsecond(clock c){
            return c.ss;
        };
void sethour(int newhh){
    clock c;
    c.hh = newhh;};
void setminute(int newmm){
    clock c;
    c.mm = newmm;};
void setsecond(int newss){
    clock c;
    c.ss = newss;};

    }
clock makeclock(int hh,int mm,int ss){
    clock c;
    c.hh.ho = hh;
    c.mm.mi = mm;
    c.ss.se = ss;
    return c;
};

clock AddClock(clock c1, clock c2) {
    clock c3;

    if (c1.ss+c2.ss >= 60) {
        c3.ss = c1.ss+c2.ss - 60;
        c3.mm = 1;}
    else
        {c3.ss = c1.ss+c2.ss;}

    if (c1.mm + c2.mm >= 60) {
        c3.mm = c1.mm+c2.mm+c3.mm - 60;
        c3.hh = 1;}
    else
        {c3.mm = c1.mm+c2.mm+c3.mm;}

    if (c1.hh + c2.hh >= 24) {
        c3.hh = c1.hh+c2.hh+c3.hh - 24;}
    else
        {c3.hh = c1.hh+c2.hh+c3.hh;}

    return c3;
};


