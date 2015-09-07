#include <iostream>
#include"clock.h"

using namespace std;

int main()
{
    clock c1 = MakeClock(2,30,4);
    clock c2 = MakeClock(6,0,0);
    clock c3 = MakeClock(1,62,30);
    IsValid(1,62,30);

    PrintClock(c1);
    PrintClock(c2);

    cout<<GetHour(c1)<<endl;
    cout<<GetSecond(c2)<<endl;

    PrintClock(AddClock(c1,c2));
    cout<<IsEqual(c1,c2)<<endl;

    return 0;
}

//Annisa Rizki Pratiwi Wibowo
//1301144391
//IF-38-01
