#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED

#ifndef HEAD1_H_INCLUDED
#define HEAD1_H_INCLUDED

typedef int  hour;
typedef int minute;
typedef int second;

struct clock {
    hour hh;
    minute mm;
    second ss;
};
//mengembalikan apakah format jam benar atau salah
bool IsValid (int hh, int mm, int ss);

//mengembalikan jam dari inputan
clock MakeClock (int hh, int mm, int ss);

//Fungsi Pemilihan
hour GetHour (clock c);
minute GetMinute (clock c);
second GetSecond (clock c);

//Pengganti Nilai
void SetHour(clock c, int newHH);
void SetMinute(clock c, int newMM);
void SetSecond(clock c, int newSS);

//Others
bool IsEqual(clock c1, clock c2);
clock AddClock (clock c1, clock c2);
void PrintClock(clock c);

#endif // HEAD1_H_INCLUDED


#endif // CLOCK_H_INCLUDED
