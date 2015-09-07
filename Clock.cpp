#include "headerr.h"
#include <iostream>

using namespace std;

bool IsValid(int HH,int MM,int SS) {

    if ((HH>=0)&&(HH<=23) && (MM>=0) && (MM<=59) && (SS>=0) && (SS<=59)) {
    return true;
    }
    else {
        return false;
    }
}
jam MakeClock (int HH,int MM,int SS){
    jam c;
    c.hour=HH;
    c.minute=MM;
    c.second=SS;
    return c;
}
int GetHour (jam c){
    return c.hour;
}
int GetMinute (jam c){
    return c.minute;
}
int GetSecond (jam c) {
    return c.second;
}
void SetHour (int HH) {
    jam jam1;
    jam1.hour=HH;
    cout <<"Jam sudah di ubah menjadi  "<<jam1.hour<<endl;
}
void SetMinute (int MM) {
    jam jam1;
    jam1.minute=MM;
    cout <<"Menit sudah diubah menjadi "<<jam1.minute<<endl;
}
void SetSecond (int SS) {
    jam jam1;
    jam1.second=SS;
    cout << "Detik sudah diubah menjadi "<<jam1.second<<endl;
}
bool IsEqual (jam c,jam c2 ) {
    bool valid;
    if (c.hour==c2.hour&&c.minute==c2.minute&&c.second==c2.second) {
        valid=true;
    }
    else {
        valid=false;
    }
    return valid;
}

void PrintClock(jam c) {
    cout<<c.hour<<":"<<c.minute<<":"<<c.second<<endl;
}

