#include"clock.h"
#include <iostream>
using namespace std;

bool isValid(int HH,int MM,int SS) 
{
   if ((HH>=0) and (HH<=23) and (MM>=0) and (MM<=59) and (SS>=0) and (SS<=59))
   {
       return true;
   }
    else {return false;}
}
clock MakeClock (int HH,int MM,int SS)
{
    clock j;
    j.HH = HH;
    j.MM = MM;
    j.SS = SS;
    return j;
}
hour GetHour (clock j)
{
    return j.HH
}
minute GetMinute (clock j)
{
    return j.MM
}
second GetSecond (clock j)
{
    return j.SS
}
void SetHour (clock *j,int newHH)
{
    (*j).HH = newHH;
}
void SetMinute (clock *j,int newMM)
{
    (*j).MM = newMM;
}
void SetSecond (clock *j,int newSS)
{
    (*j).SS = newSS;
}
bool IsEqual (clock j1, clock j2)
{
    if ((j1.HH==j2.HH) and (j1.MM==j2.MM) and (j1.SS==j2.SS)
        {
            return true;
        }
        else
            {
                return false;
            }
            
}
clock AddClock (clock j1,clock j2)
{
    clock j3;
    
    if (ji.SS+j2.SS >=60)
    {
        j3.SS= j1.SS+j2.SS - 60;
        j3.MM= j3.MM + 1;
    }
    else (j3.SS = j1.SS + j2.SS);
    
    if (j1.MM + j2.MM >= 60)
    {
        j3.MM = j1.MM + j2.MM - 60;
        j3.HH = j3.HH + 1;
    }
    else (j3.MM = j1.MM + j2.MM);
    
    if (j1.HH + j2.HH >= 24)
    {
        j3.HH = j1.HH + j2.HH - 24;
    }
    else (j3.HH = j1.HH+j2.HH)
    return j3;
}
void PrintClock (clock j3)
{
    cout<<j3.HH; cout<<":";
    cout<<j3.MM; cout<<":";
    cout<<j3.SS;
}
