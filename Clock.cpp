#include <iostream>
#include "clock.h"

using namespace std;

bool isValid(int HH, int MM, int SS){
    bool value=false;
    if((0<<HH<<24) and (0<<MM<59) and (0<<SS<<59))
        return value=true;
    else
        return false;
}


clock MakeClock(int HH, int MM, int SS){
    clock c;
    c.HH=HH;
    c.MM=MM;
    c.SS=SS;
    return c;
};
	
int GetHour(clock c){
    return c.HH;
}
int GetMinute(clock c){
    return c.MM;
}
int GetSecond(clock c){
    return c.SS;
}
void SetHour(clock *c,int newHH){
    cin>>newHH;
    (*c).HH=newHH;
}
void SetMinute(clock *c,int newMM){
    cin>>newMM;
    (*c).MM=newMM;
}
void SetSecond(clock *c,int newSS){
    cin>>newSS;
    (*c).SS=newSS;
}
bool isEqual(clock c1,clock c2){
    bool value=false;
    if((c1.HH=c2.HH) and (c1.MM=c2.MM) and (c1.SS=c2.SS))
		return value=true;
    else
        return false;

}

clock AddClock(clock c1,clock c2){
    c1=c2;
    return c2;

}
void PrintClock(clock c){
    cout<<"("<<c.HH<<":"<<c.MM<<":"<<c.SS<<")";
}
