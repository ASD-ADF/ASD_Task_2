#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED

#include<iostream>
#include<conio.h>

using namespace std;

struct jam {
    int hour;
};
struct menit{
    int minute;
};

struct detik{
    int second;
};

struct clock {
    jam hh;
    menit mm;
    detik ss;

};
 bool Isvalid (int jam, int menit, int detik);

 clock Buatjam (int jam,int menit,int detik);

 jam ambiljam (clock a);
 menit ambilmenit (clock a);
 detik ambildetik (clock a);

 void ubahjam (clock *a, int jambaru);
 void ubahmenit (clock *a, int menitbaru);
 void ubahdetik (clock *a, int detikbaru);

 bool sama (clock a1, clock a2);
 clock tambahjam (clock a1, clock a2);
 void printjam (clock a);









#endif // CLOCK_H_INCLUDED

