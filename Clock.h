#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED

struct clock{
    int jam;
    int menit;
    int detik;
    };
bool isvalid(int j,m,d);
clock makeclock (int jj,int mm, int dd);
int gethour (clock cj);
int getminute  (clock cm);
int getsecond (clock cd);
void sethour (int hour);
void setminute (int minute);
void setsecond (int second);
bool isequal (clock x1, clock x2);
void printclock (clock prt);


#endif // CLOCK_H_INCLUDED
