#include <iostream>
#include "clock.h"



using namespace std;
bool val,valid;


    clock cl,cl2,clos;
int main()
{

    val=false;
    val=IsValid(10,21,21);
    if (val==true){
        cout << "Jam Valid" << endl;
    }
    else if (val==false){
        cout <<"Jam tidak valid" << endl;
            }
    cl=MakeClock(12,13,12);
    cl2=MakeClock(12,23,21);
    cout << "Jam telah di input " << cl.hour <<":"<< cl.minute << ":" << cl.second << endl;
    cout << "Jam saat ini "<< GetHour(cl) << endl;
    cout << "Menit saat ini "<< GetMinute(cl) << endl;
    cout << "Detik saat ini "<< GetSecond(cl) << endl;
   SetHour(21);
   SetMinute(19);
   SetSecond(43);



     cl=MakeClock(12,13,12);
    cl2=MakeClock(12,13,13);
    valid=IsEqual(cl,cl2);
    if (valid==true){
        cout << "Jam Sama" << endl;
    }
    else if (valid==false) {
        cout <<"Jam Beda" << endl;
    }
    PrintClock(cl);
    return 0;

}

