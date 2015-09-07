#include <iostream>
#include <conio.h>
#include "Clock.h"

using namespace std;

bool IsValid (int HH, int MM, int SS){
    if ((0<=HH<=23)and(0<=MM<=59)and(0<=SS<=59)){
        return true;
    }
}

clock MakeClock (int HH, int MM, int SS){
    clock c;
    c.HH=HH;
    c.MM=MM;
    c.SS=SS;
    return c;
}

hour GetHour(clock c){
    return c.HH;
}

minute GetMinute(clock c){
    return c.MM;
}

second GetSecond(clock c){
    return c.SS;
}

void SetHour(clock c, int newHH){
    c.HH=newHH;
    cout << c.HH;
}

void SetMinute(clock c, int newMM){
    c.MM=newMM;
    cout << c.MM;
}

void SetSecond(clock c, int newSS){
    c.SS=newSS;
    cout << c.SS;
}

bool IsEqual(clock c1, clock c2){
    if ((c1.HH=c2.HH)&&(c1.MM=c2.MM)&&(c1.SS=c2.SS)){
        return true;
    }
}

clock AddClock(clock c1, clock c2){
    c1=c2;
    return c2;
}

void PrintClock(clock c){
    cout << c.HH << " : " << c.MM << " : " << c.SS <<endl;
}
