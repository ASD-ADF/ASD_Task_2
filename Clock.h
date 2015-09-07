#ifndef JAM_H_INCLUDED
#define JAM_H_INCLUDED
#include <iostream>

struct clock
{
    int jam;
    int menit;
    int detik;
};

bool validasi(int jam, int menit, int detik);
clock buatjam(int jam, int menit, int detik);

int tampiljam(clock jl);
int tampilmenit(clock jl);
int tampildetik(clock jl);
void aturjam(int jam);
void aturmenit(int menit);
void aturdetik(int detik);
bool perbandingan(clock j1, clock j2);
void jamkeluar(clock j1);


#endif // JAM_H_INCLUDED
