//Angky Fajriati MS Musa
//IF 38-01-1301141221
#include <iostream>
#include "clock.h"
int a,b;
clock1 MakeClock(int HH, int MM, int SS) //Function membuat waktu
{
    clock1 c;
    c.HH=HH;
    c.MM=MM;
    c.SS=SS;
    return c;
}
bool IsValid(int HH, int MM, int SS) //function mengecek format waktu
{
    if ((HH>0 && HH <=23) && (MM>0 && MM<=59) && (SS>0 && SS <=59))
    {
        return true;
    }
    else
    {
        return false;
    }
}
void printclock(clock1 c)//prosedur print waktu
{
    cout<<c.HH<<":"<<c.MM<<":"<<c.SS<<endl;
}
Hour GetHour(clock1 c)//function mengambil nilai jam
{
    return c.HH;
}
Second GetSecond(clock1 c)//function mengambil nilai detik
{
    return c.SS;
}
Minute GetMinute(clock1 c)//function mengambil nilai menit
{
    return c.MM;
}
clock1 AddClock(clock1 c1, clock1 c2)//funtion menambahkan 2 waktu
{
    clock1 c3;
    ;
    c3.SS=c2.SS+c1.SS;
    if (c3.SS>60)
    {
        b=c3.SS/60;
        c3.SS=c3.SS-(60*b);
        c1.MM=c1.MM+b;
    }
    if (c3.SS==60)
    {
        c3.SS=c3.SS-60;
        c1.MM=c1.MM+1;
    }
    c3.MM=c2.MM+c1.MM;
    if (c3.MM>60)
    {
        b=c3.MM/60;
        c3.MM=c3.MM-(60*b);
        c1.HH=c1.HH+b;
    }
    if (c3.MM==60)
    {
        c3.MM=00;
        c1.HH=c1.HH+1;
    }
    c3.HH=c1.HH+c2.HH;
    return c3;
}
bool isEqual(clock1 c1, clock1 c2)//function mengecek 2 waktu apakah sama atau tidak
{
    if (c1.HH==c2.HH && c1.MM==c2.MM && c1.SS==c2.SS)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void setHour(clock1 *c, int newHH)//prosedur memperbaharui nilai jam
{
    (*c).HH=newHH;

}
void setMinute(clock1 *c, int newMM)//prosedur memperbaharui nilai menit
{
    (*c).MM=newMM;
}
void setSecond(clock1 *c, int newSS)//prosedur memperbaharui nilai detik
{
    (*c).SS=newSS;
}

