#include<iostream>
#include "Clock.h"

bool isvalid(int jam, int menit, int detik){
    if (jam>=0 && jam<=23 && menit>=0 && menit <=59 && jam>=0 && jam<=59){
        return true;}
    else{
        return false;
    }
}

clock makeclock(int jam, int menit, int detik){
    clock c;
    c.hh.jamm=jam;
    c.mm.menitt=menit;
    c.ss.detikk=detik;
    return c;
}


//Selector Function

hour gethour(clock c){
    return c.hh;
}

minute getminute(clock c){
    return c.mm;
}

second getsecond(clock c){
    return c.ss;
}

//Value Changer
void sethour (clock c, int newhh){
    c.hh.jamm=newhh;
    cout << "Jam telah diubah menjadi : " << c.hh.jamm << endl;
}

void setminute(clock c, int newmm){
    c.mm.menitt=newmm;
    cout << "Menit telah diubah menjadi : " << c.mm.menitt << endl;
}

void setsecond(clock c, int newss){
    c.ss.detikk=newss;
    cout << "Detik telah diubah menjadi : " << c.ss.detikk << endl;
}


//Other Operation
bool isequal(clock c1, clock c2){
    if (c1.hh.jamm==c2.hh.jamm && c1.mm.menitt==c2.mm.menitt && c1.ss.detikk==c2.ss.detikk){
        return true;
    }
    else{
        return false;
    }
}
clock addclock(clock c1, clock c2){
    clock c3;
    if (c1.mm.menitt+c2.mm.menitt >= 60){
        c3.mm.menitt=c1.mm.menitt+c2.mm.menitt-60;
        c3.hh.jamm=1;
    }
    else{
        c3.mm.menitt=c1.mm.menitt+c2.mm.menitt;
    }

    if (c1.ss.detikk+c2.ss.detikk >= 60){
        c3.ss.detikk=c1.ss.detikk+c2.ss.detikk-60;
        c3.mm.menitt=1;
    }
    else {
        c3.ss.detikk=c1.ss.detikk+c2.ss.detikk;
    }
    if (c1.hh.jamm+c2.hh.jamm >= 24){
        c3.hh.jamm=c1.hh.jamm+c2.hh.jamm - 24;
    }
    else{
        c3.hh.jamm=c1.hh.jamm+c2.hh.jamm;
    }
    return c3;
}


void printclock(clock c){
    cout << c.hh.jamm << ":" << c.mm.menitt << ":" << c.ss.detikk << endl;
}

