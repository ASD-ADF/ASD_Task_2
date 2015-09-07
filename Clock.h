#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED

typedef int jam;
typedef int menit;
typedef int detik;
struct clock
{
    jam hh;
    menit mm;
    detik ss;
};
bool istrue(int hh, int mm, int ss);

clock jamnya(int hh, int mm, int ss);

jam gethour(clock pass);

menit getminute(clock pass);

second getsecond(clock pass);

void sethour(clock *pass, int newhh);
void setminute(clock *pass, int newmm);
void setsecond(clock *pass, int newss);
bool IsEqual(Clock xa, Clock xb);
Clock AddClock (Clock xa, Clock xb);
void PrintC(Clock pass);
#endif // CLOCK_H_INCLUDED
