#include <iostream>
#include "clock.h"

using namespace std;

bool IsValid(int HH,int MM,int SS){
    if (HH>=0 && HH<=23){
        if (MM>=0 && MM<=59){
            if (SS>=0 && SS<=59){
                return true;
            }
            else {
                return false;
            }
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }
}

clock MakeClock(int HH,int MM,int SS){
    clock waktu;
    waktu.HH=HH;
    waktu.MM=MM;
    waktu.SS=SS;

    return waktu;
}

Hour GetHour (clock c){
    return c.HH;
}
Minute GetMinute (clock c){
    return c.MM;
}
Second GetSecond (clock c){
    return c.SS;
}

void SetHour (clock *c,int newHH){
    (*c).HH=newHH;
}
void SetMinute (clock *c,int newMM){
    (*c).MM=newMM;
}
void SetSecond (clock *c,int newSS){
    (*c).SS=newSS;
}

bool IsEqual (clock c1,clock c2){
    if (c1.HH==c2.HH){
        if (c1.MM==c2.MM){
            if (c1.SS==c2.SS){
                return true;
            }
            else {
                return false;
            }
        }
        return false;
    }
    else {
        return false;
    }
}
clock AddClock (clock c1,clock c2){
    clock c3;
    int m,h;
    c3.HH=c1.HH+c2.HH;
    c3.MM=c1.MM+c2.MM;
    c3.SS=c1.SS+c2.SS;
    m=0;
    h=0;
    if (c3.SS>=60){
        c3.SS=c3.SS-60;
        m=1;
    }
    if (c3.MM>=60){
        c3.MM=c3.MM-60+m;
        h=1;
    }
    if (c3.HH+h>=24){
        c3.HH=c3.HH-24;
    }
    return c3;
}
void PrintClock (clock c){
    cout<<c.HH<<":"<<c.MM<<":"<<c.SS<<":"<<endl;
}



