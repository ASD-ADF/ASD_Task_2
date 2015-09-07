#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED


struct clock {
    int HH;
    int MM;
    int SS;
};
clock c1;
clock c2;

bool IsValid(int HH,int MM,int SS);
int MakeClock(int HH,int MM,int SS);
int GetHour(int HH);
int GetMinute(int MM);
int GetSecond(int SS);
int AddClock(int HH);


#endif // CLOCK_H_INCLUDED
