#include <iostream>
#include "clock.h"


using namespace std;
bool valid;
clock mm,mn;
bool k;

int main ()
{
    return 0;
    valid =false;
    valid=isvalid (07,10,06);
    if (valid==true)
    {
        cout<<"jam sesuai\n";
    }
    else if (valid==false)

    {
        cout<<"jam tidak sesuai\n";
}
mm=makeclock (07,10,06);
cout<<"jam sekarang adalah "<<mm.jam<" : "<<mm.menit<< " : "<<mm.detik<<"\n";
cout<< "jam : ["<<gethour(mm)<<"]"<<"\n";
cout<< "menit : ["<<getminute(mm)<<"]"<<"\n";
cout<< "detik : ["<<getsecond(mm)<<"]"<<"\n";

