#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED

typedef int Hour;
typedef int Minute;
typedef int Second;

struct Clock
{
    Hour HH;
    Minute MM;
    Second SS;
};

//return true if 0≤HH≤23, and 0≤MM≤59, and 0≤MM≤59
//Validasi
bool IsValid (int HH, int MM, int SS);

//return clock created from input
//Pembentukan Jam
Clock MakeClock(int HH,int MM,int SS);

//Selector Function
Hour GetHour(Clock c);
Minute GetMinute(Clock c);
Second GetSecond(Clock c);

//Value Changer
//Perubahan
void SetHour(Clock c,int newHH);
void SetMinute(Clock c,int newMM);
void SetSecond(Clock c,int newSS);

//Other Operation
bool IsEqual (Clock ca,Clock cb); //Pembandingan
Clock AddClock (Clock ca,Clock cb); //Penjumlahan
void PrintClock (Clock c); //Keluaran/Output

#endif // CLOCK_H_INCLUDED
