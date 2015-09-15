#include <iostream>
#include "task2.1103134368.h"
#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"


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
//return true if 0≤HH≤23, and 0≤MM≤59, and 0≤MM≤59


Clock MakeClock(int HH,int MN,int SS){
    Clock c;
    c.HH = HH;
    c.MN = MN;
    c.SS = SS;
    return c;
}
//return clock created from input

//Selector function
int GetHour(clock c){
    return c.HH;
}

int GetMinute(clock c){
    return c.MN;
}
int GetSecond(clock c){
    return c.SS;
}

//Value changer
Hour GetHour(clock c);
Minute GetMinute(clock c);
Second GetSecond(clock c);

//Value changer
Void SetHour(clock *c, int newHH ){
    (*c).HH = newHH;
}
Void SetMinute(clock *c, int newMM ){
     (*c).MM = newMM;
}
Void SetSecond(clock *c, int newSS ){
    (*c).HH = newSS;
}

//Other Operation
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
            klok.SS = c1.SS + c2.SS - 60;
            klok.MM = klok.MM + 1;
        }else{
            (klok.SS = c1.SS + c2.SS);
        }

        if (c1.MM + c2.MM >= 60){
            klok.MM = c1.MM + c2.MM - 60;
            klok.HH = klok.HH + 1;
        }else{
            (klok.MM = c1.MM + c2.MM);
        }

        if (c1.HH + c2.HH >= 24){
           klok.HH = c1.HH + c2.HH - 24;
        }else{
         (klok.HH = c1.HH + c2.HH);
        }

        return klok;
}
void displayClock(clock c){
    cout<<"----------------------------------">>endl;
    cout<<"==== Program Menghitung waktu ====">>endl;
    cout<<"----------------------------------">>endl;
    cout<<"">>endl;
    cout<<klok.HH; cout<<":";
    cout<<klok.MM; cout<<":";
    cout<<klok.SS;
    cout<<"">>endl;
    cout<<"Thank You !">>endl;
}


