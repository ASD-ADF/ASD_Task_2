//Nama : Friendly Halomoan Sipayung
//NIM  : 13011444001
//Kelas: IF-38-01
#include <iostream>
#include "clock.h"

using namespace std;

int main()
{
    Clock c1 = MakeClock(6,12,50);
    cout<<endl;
    Clock c2 = MakeClock(6,55,11);
    cout<<endl;
    Clock c3 = MakeClock(1,62,30);//should not be created as the input is invalid, use IsValid function
    cout<<endl<<endl;
    cout<<"Clock 1 : "; PrintClock(c1); cout<<endl;
    cout<<"Clock 2 : "; PrintClock(c2); cout<<endl<<endl;

    cout<<"Jam dari Clock 1   : "<<GetHour(c1)<<endl;
    cout<<"Detik dari Clock 2 : "<<GetSecond(c2)<<endl;
    cout<<endl;
    c3 = AddClock(c1, c2);
    cout<<endl;

    cout<<"Clock 1 + Clock 2 : "; PrintClock(c3); cout<<endl<<endl;
    cout<<"C1 = C2 ? (1=true 0=false) -> "<<IsEqual(c1,c2);
    cout<<endl;
    return 0;
}

//Sumber : 1301141071 setelah disetujui dengan perubahan dan diketik ulang
//Maaf pak saya belum terlalu paham C++. Terima kasih.
