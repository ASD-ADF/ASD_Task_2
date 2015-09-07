//Nama  :Andhika Gilang K
//NIM   : 1301140361
//Kelas : IF3801
#include <iostream>
#include "Clock.h"
#include "Clock.cpp"

using namespace std;

int main()
{
  Clock a1 = MakeClock (2,30,4);
  cout<<endl;
  Clock a2 = MakeClock (6,0,0);
  cout<<endl;
  Clock a3 = MakeClock (1,62,30);
  cout<<endl;
  cout<<endl;
  PrintClock(a1);
  cout<<endl;
  PrintClock(a2);
  cout<<endl;
  cout<<endl;
  cout<<endl;
  cout<<GetHour(a1)<<endl;
  cout<<GetHour(a2)<<endl;
  cout<<endl;
  a3= AddClock(a1,a2);
  cout<<endl;
  PrintClock(a3);
  cout<<endl;
  cout<<endl;
  cout<<IsEqual(a1,a2);
  cout<<endl;
  return 0;
}
