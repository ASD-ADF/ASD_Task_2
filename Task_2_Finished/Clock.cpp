#include "Clock.h"
#include <iostream>
#include <conio.h>

using namespace std;

bool isValid(int HH, int MM, int SS){
    bool valid = false;
    if((0<=HH<=23) and (0<=MM<=59) and (0<=SS<=59)) {
        valid = true;
    }
    return valid;
};

clock makeClock(int HH, int MM, int SS){
    clock c;

    c.HH = HH;
    c.HH = MM;
    c.HH = SS;

    return c;
};

hour getHour(clock c){
    return c.HH;
};

minute getMinute(clock c){
    return c.MM;
};

second getSecond(clock c){
    return c.SS;
};

void setHour(clock c, int newHH){
    c.HH = newHH;
    cout<<c.HH<<endl;
};

void setMinute(clock c, int newMM){
    c.MM = newMM;
    cout<<c.MM<<endl;
};


void setSecond(clock c, int newSS){
    c.SS = newSS;
    cout<<c.SS<<endl;
};

bool isEqual(clock c1, clock c2){
    bool value = false;

    if((c1.HH=c2.HH) and (c1.MM==c2.MM) and (c1.SS==c2.SS)){
        value = true;
    }

    return value;
};

clock addClock(clock c1, clock c2){
    c1=c2;
    return c2;
};
