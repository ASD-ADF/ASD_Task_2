#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED

struct hour{
    int ho;};
struct minute{
    int mi;};
struct second{
    int se;};
int newhh;
int newmm;
int newss;


struct clock{
    hour hh;
    minute mm;
    second ss;
};

bool isvalid (int hh, int mm, int ss);
clock makeclock (int hh, int mm, int ss);

hour gethour(clock c);
minute getminute(clock c);
second getsecond(clock c);

void sethour (clock c, int newhh);
void setminute (clock c, int newmm);
void setsecond (clock c, int newss);

bool isequal (clock c1, clock c2);
clock addclock (clock c1, clock c2);
void printclock (clock c);

#endif // CLOCK_H_INCLUDED
