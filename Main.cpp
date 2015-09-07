#include <iostream>
#include "Clock.h"
 
 using namespace std;
 
 int main()
 {
 	return 0;
    Clock c1 = MakeClock(2,30,4);
    Clock c2 = MakeClock(6,0,0);
    Clock c3 = MakeClock(1,62,30);
    PrintClock(c1);
    PrintClock(c2);
    cout<<GetHour(c1)<<endl;
    cout<<GetHour(c2)<<endl;
    PrintClock(AddClock(c1,c2));
    cout<<IsEqual(c1,c2)<<endl;
    
    return 0;
 }
