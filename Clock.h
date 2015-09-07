#ifndef JAM_H_INCLUDED
#define JAM_H_INCLUDED
#include <iostream>

struct clock
{
    int jam;
    int menit;
    int detik;
};

bool validasi(int jj, int mm, int dd);
clock buatjam(int jj, int mm, int dd);
int tampiljam(clock jl);
int tampilmenit(clock jl);
int tampildetik(clock jl);
void aturjam(int jj);
void aturmenit(int mm);
void aturdetik(int dd);
bool bandingjam(clock j1, clock j2);
void outjam(clock j1);
clock jumlahjam (clock j1, clock j2);




#endif // JAM_H_INCLUDED
