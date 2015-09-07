#ifndef HEADS_H_INCLUDED
#define HEADS_H_INCLUDED
#include <iostream>

struct clock
{
    int jam;
    int meni;
    int det;
};
bool IsValid(int jj,int mm, int ss);
clock buatjam(int j, int m, int s);
int ambiljam(clock jams);
int ambilmenit(clock menit);
int ambildetik(clock detik);
void setjam(int jamset);
void setmen(int menset);
void setdet(int detset);
bool Equal (clock equ1, clock equ2);
void Print (clock pit);
#endif // HEADS_H_INCLUDED
