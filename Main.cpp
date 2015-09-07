#include <iostream>
#include "waktu.h"
using namespace std;

bool cekjam,cek;
waktu jm;
bool jamcocok;
int main()
{
    cekjam=false;
    cekjam=IsValid(14,50,33);
    if (cekjam==true)
    {
        cout << "jam valid \n" ;
    }
    else if (cekjam==false)
    {
        cout << "jam salah \n";
    }
    jm=Makewaktu(13,34,56);
    cout << "sekarang adalah jam : " << jm.jam << ":" << jm.menit << ":" << jm.detik << endl;
    cout << "sekarang jam        : " << GetHour (jm) << endl;
    cout << "sekarang menit      : " << GetMinute (jm) << endl;
    cout << "sekarang detik      : " << GetSecond (jm) << endl;
    SetHour(23);
    SetMinute(13);
    SetSecond (53);
    waktu jam,jam2;
    jam=Makewaktu(15,2,4);
    jam2=Makewaktu(2,13,22);
    jamcocok=IsEqual(jam,jam2);
    if (jamcocok==true) {
        cout << "jam sama \n" ;
    }
    else if (jamcocok==false) {
        cout << "jam berbeda \n" ;
    }
    printJam(jam2);
    return (0);
}
