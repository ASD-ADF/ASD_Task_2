//ADT
//ATIKA WAHYUGIRINI-IF3801-1301144211
//pak, aku ga paham soalnya :((

#include <iostream>
#include "clock.h"

using namespace std;

int main()
{
    cin>>hhc1;
    cin>>mmc1;
    cin>>ssc1;
    
    clock c1 = Makeclock(2,30,4);
    clock c2 = Makeclock (6,0,0));
    clock c3 = Makeclock (1,62,30);
    isvalid(1,62,30);
    
    PRINTCLOCK(C1);
    PRINTCLOCK(C2);
    
    cout<<GetHour(c1)<<endl;
    cout<<GetSecond(c2)<<endl;
    
    printclock(addcclock(c1,c2));
    cout<<isequal(c1,c2)<<endl;
    
    return 0;
