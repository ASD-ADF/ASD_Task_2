/* Dhiva Azhara 1301144101 IF3801 */
#include"clock.h"
#include<iostream>
using namespace std;
bool IsValid (int HH, int MM, int SS)
{ 	
	if ((0<=HH && HH<=23) && (0<=MM && MM<=59) && (0<=SS && SS<=59))
	{
		IsValid=true;
	}
	else 
	{
		IsValid=false;
	}
}

clock MakeClock(int HH, int MM, int SS)
{
	clock clk;
	clk.HH=HH;
	clk.MM=MM;
	clk.SS=SS;
	return clk;
}

Hour GetHour(clock c)
{
	return c.Hour;
}
Minute GetMinute(clock c)
{
	return c.Minute;
}
Second GetSecond(clock c)
{
	return c.Second;
}

void SetHour(clock c, int newHH)
{
	c.HH=newHH;
}
void SetMinute(clock c, int newMM)
{
	c.MM=newMM;
}
void SetSecond(clock c, int newSS)
{
	c.SS=newSS;
}

bool IsEqual(clock c1, clock c2)
{
	if((c1.HH==c2.HH)&&(c1.MM==c2.MM)&&(c1.SS==c2.SS))
	{
		IsEqual=true;
	}	
	else
	{
		IsEqual=false;
	}
}

clock AddClock(clock c1, clock c2)
{
	clock c3;
	int total1,total2,total,sisa;
	total1=(c1.HH*3600)+(c1.MM*60)+(c1.SS);
	total2=(c2.HH*3600)+(c2.MM*60)+(c2.SS);
	total=total1+total2;
	
	c3.HH=total div 3600;
	sisa=total mod 3600;
	c3.MM=sisa div 60;
	c3.SS=sisa mod 60;
	return c3;
}

void printclock(clock c)
{
	cout<<c.HH<<":"<<c.MM<<":"<<c.SS<<endl;
}

/* Dhiva Azhara 1301144101 IF3801 */

