
#include <iostream>
#include "clock.h"
#include <stdio.h>
#include <stdlib.h>

typedef int Hour;

typedef int Minute;

typedef int Second;

struct clock{
    Hour HH;
    Minute MM;
    Second SS;
};

int IsValid(int HH,int MN,int SS){
   if ((HH>=0) && (HH<=23) && (MM>=0) && (MM<=59) && (SS>=0) && (SS<=59)){
        return true;
   }else{
        return false;
        }

}

clock MakeClock(int HH,int MN,int SS){
    Clock c;
    c.HH = HH;
    c.MN = MN;
    c.SS = SS;
    return c;
}

int gethour(clock c){
    return c.HH;
}

int getminute(clock c){
    return c.MN;

int getsecond(clock c){
    return c.SS;
}

hour gethour(clock c);
minute getminute(clock c);
second getsecond(clock c);

Void sethour(clock *c, int newHH ){
    (*c).HH = newHH;
}
Void setminute(clock *c, int newMM ){
     (*c).MM = newMM;
}
Void setsecond(clock *c, int newSS ){
    (*c).HH = newSS;
}

bool IsEqual (clock c1, clock c2){
if((c1.HH==c2.HH) && (c1.MM==c2.MM) && (c1.SS==c2.SS)){
     return true;
    }else{
        return false;
    }
}

clock AddClock (clock c1, clock c2){
   clock klok;
        if (c1.SS + c2.SS >= 60){
            clock.SS = c1.SS + c2.SS - 60;
            clock.MM = clock.MM + 1;
        }else{
            (clock.SS = c1.SS + c2.SS);
        }

        if (c1.MM + c2.MM >= 60){
            clock.MM = c1.MM + c2.MM - 60;
            clock.HH = clock.HH + 1;
        }else{
          (clock.MM = c1.MM + c2.MM);
        }

        if (c1.HH + c2.HH >= 24){
            clock.HH = c1.HH + c2.HH - 24;
       }else{
          (clock.HH = c1.HH + c2.HH);
        }

        return clock;
}
void displayClock(clock c){
    cout<<"">>endl;
    cout<<clock.HH; cout<<":";
    cout<<clock.MM; cout<<":";
    cout<<clock.SS;
    cout<<"">>endl;
}
