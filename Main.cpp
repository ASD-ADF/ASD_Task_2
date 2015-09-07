#include <iostream>
#include "jam.h"

using namespace std;

bool vld,valid;

    clock jam,j1,j2;

int main()
{
    vld=false;
    vld=IsValid(3,21,21);
    if (vld==true)
    {
        cout << "Jam Benar" << endl;
    }
    else if (vld==false)
    {
        cout <<"Jam Salah" << endl;
    }
    jl=MakeClock(9,3,10);
    j2=MakeClock(15,2,7);
    cout << "Sekarang jam:  " << jl.jam <<":"<< jl.menit << ":" << jl.detik << endl;
    cout << "Jam sekarang "<< Getjam(cl) << endl;
    cout << "Menit sekarang "<< Getmenit(cl) << endl;
    cout << "Detik sekarang "<< Getdetik(cl) << endl;
    aturjam(11);
    aturmenit(16);
    aturdetik(68);
    jl=MakeClock(12,14,8);
    j2=MakeClock(5,17,9);
    valid=IsEqual(jl,cl2);

    if (valid==true)
    {
        cout << "Jam Sama" << endl;
    }
    else if (valid==false)
    {
        cout <<"Jam Beda" << endl;
    }
    PrintClock(cl);
    return 0;

}


