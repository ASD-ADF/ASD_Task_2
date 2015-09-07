#include <iostream>
#include "clock.h"
using namespace std;


int main()
{
  clock c1 = makeclock(2,30,4);
  clock c2 = makeclock(6,0,0);
  clock c3 = makeclock(1,62,30); //should not be created as the input is invalid, use IsValid function
  //print
  cout<<"clock c1 "; printclock(c1);
  cout<<endl;
  cout<<"clock c2 "; printclock(c2);
  cout<<endl;
  cout<<endl;

  //output
  cout<<"hour c1 : "<<(gethour(c1))<<endl;
  cout<<"minute c2 : "<<(getminute(c2))<<endl;
  cout<<endl;
  return 0;

  c3=addclock(c1,c2);
  cout<<"clock c3 : "; printclock(c3);
  cout<<endl<<endl;

  sethour(&c1,10);
  setminute(&c1,20);
  setsecond(&c1,30);
//print
  cout<<"clock c1 "; printclock(c1);
  cout<<endl<<endl;
return 0;
}
