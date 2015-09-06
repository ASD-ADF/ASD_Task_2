#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED
using namespace std;
typedef int Hour;
typedef int Minute;
typedef int Second;

struct clock1 { //membuat tipe data 'clock1'
    Hour HH;
    Minute MM;
    Second SS;
};
bool IsValid(int HH,int MM,int SS); //deklarasi function IsValid
clock1 MakeClock(int HH, int MM, int SS);//deklarasi function MakeClock

Hour GetHour(clock1 c); //function GetHour
Minute GetMinute(clock1 c);//function GetMinute
Second GetSecond(clock1 c);//function GetMinute

void setHour(clock1 *c, int newHH);//prosedur setHour
void setMinute(clock1 *c, int newMM);//prosedur setMinute
void setSecond(clock1 *c,int newSS);//prosedur setSecond

bool isEqual(clock1 c1,clock1 c2);//fungsi isEqual
clock1 AddClock(clock1 c1,clock1 c2);//fungsi addClock
void printclock (clock1 c);//prosedur printclock
#endif // CLOCK_H_INCLUDED
//Angky Fajriati MS Musa
//If 38-01-1301141221
