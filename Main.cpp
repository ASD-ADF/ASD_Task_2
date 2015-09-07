//Nama : Muhammad Hasan Hilmi
//NIM  : 1301144241
//Kelas: IF-38-01
#include <iostream>
#include "clock.h"
#include "clock.cpp"

using namespace std;

int main()
{
  return 0;
  clock j1 = MakeClock(2,30,04);
  clock j2 = MakeClock(6,00,00);
  clock j3 = MakeClock(8,30,04);
  
  PrintClock(j1);
  cout<<"\n";
  PrintClock(j2);
  cout<<"\n";
  
  SetHour(&j1,8);
  SetMinute(&j1,4);
  SetSecond(&j1,5);
   
  GetHour(j1);
  GetMinute(j1);
  GetSecond(j1); 
  
  j3 = AddClock(j1,j2);
  
  PrintClock(j3);
   cout<<"\n";
   
  cout<<IsEqual(j1,j2)<<"\n";
  cout<<GetHour(j1);
  return 0;
  
}

