#ifndef WAKTU_H_INCLUDED
#define WAKTU_H_INCLUDED

struct waktu
{
    int jam;
    int menit;
    int detik;
};
bool IsValid (int HH, int MM, int SS);
waktu Makewaktu (int j,int m, int s);
int GetHour (waktu hour);
int GetMinute (waktu minute);
int GetSecond (waktu second);
void SetHour (int HH);
void SetMinute (int MM);
void SetSecond (int SS);
bool IsEqual (waktu jam, waktu jam2);
void printJam (waktu col);
#endif // WAKTU_H_INCLUDED


