//Firda Aminy Ma'ruf
//IF-38-01
//1301144311

#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED
using namespace std;
typedef int hour;
typedef int minute;
typedef int second;

struct clock { //membuat tipe bentukan 'clock'
        hour HH;
        minute MM;
        second SS;
};

bool IsValid(int HH, int MM, int SS); //deklarasi function IsValid
clock MakeClock(int HH, int MM, int SS) //deklarasi function MakeClock

hour GetHour(clock c); //function GetHour
minute GetMinute(clock c); //function GetMinute
second GetSecond(clock c); //function GetMinute

void SetHour(clock *c, int newHH); //prosedur SetHour
void SetMinute(clock *c, int newMM); //prosedur SetMinute
void SetSecond(clock *c, int newSS); //prosedur SetSecond

bool IsEqual(clock c1, clock c2); //fungsi IsEqual
clock AddClock(clock c1, clock c2); //fungsi AddClock
void PrintClock(clock c); //procedure PrintClock

#endif // CLOCK_H_INCLUDED
