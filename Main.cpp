#include <iostream>
#include "clock.h"
using namespace std;

int main()
{
    return 0;
    clock xa = jamnya(2,30,4);
    cout<<endl;
    clock xb = jamnya(6,0,0);
    cout<<endl;
    clock xc = jamnya(1,62,30);
    cout<<endl;
    cout<<endl;
    PrintC(xa);
    cout<<endl;
    PrintC(xb);
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<gethour(xa)<<endl;
    cout<<gethour(xb)<<endl;
    cout<<endl;
    xc = addclock(xa, xb);
    cout<<endl;
    PrintC(xc);
    cout<<endl;
    cout<<endl;
    cout<<isequal(xa, xb);
    cout<<endl;
    return 0;
}
