# include <iostream>
# include "clock.h"

using namespace std;


  bool isValid (int HH,int MM,int SS)
  {
      if ((0<HH<23) && (0<MM<59) && (0<SS<59)) {
            return true;
      }
      else {
        return false;
      }
      }

 Clock MakeClock (int HH,int MM,int SS) {
    Clock c;
    return c;}

    Hour GetHour (Clock c){
       return c.HH; }
    Minute GetMinute (Clock c) {
        return c.MM;}
    Second GetSecond (Clock c) {
        return c.SS;}

void SetHour (Clock c,int newHH){
    c.HH==newHH;}
    void SetMinute(Clock c,int newMM)
    {cin>> newMM;c.MM=newMM;}
    void SetSecond(Clock c,int newSS)
    {cin>>newSS;c.SS=newSS;}

    bool IsEqual (Clock c1,Clock c2)
    {if (c1.HH=c2.HH) {return true;}
    else {return false;}
    }

    Clock AddClock (Clock c1,Clock c2){
        AddClock=c1+c2;}
    void PrintClock (Clock c){
        cout<< c;}
