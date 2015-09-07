#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED

typedef int Hour;
typedef int Minute;
typedef int Second;

struct clock {
    Hour HH;
    Minute MM;
    Second SS;
};
bool IsValid (int HH,int MM,int SS); //mengembalikan nilai true jika 0≤HH≤23, dan 0≤MM≤59, dan 0≤MM≤59
clock MakeClock (int HH,int MM,int SS); //mengembalikan jam yang telah dibuat dari inputan

//Selector function
Hour GetHour (clock c);
Minute GetMinute (clock c);
Second GetSecond (clock c);

//Value changer
void SetHour (clock *c,int newHH);
void SetMinute (clock *c,int newMM);
void SetSecond (clock *c,int newSS);

//Other Operation
bool IsEqual (clock c1,clock c2);
clock AddClock (clock c1,clock c2);
void PrintClock (clock c);



#endif // CLOCK_H_INCLUDED
