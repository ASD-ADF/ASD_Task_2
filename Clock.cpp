//Firda Aminy Ma'ruf
//IF-38-01
//1301144311
#include <iostream>
#include "clock.h"
int sisa

using namespace std;

int main()
{
    bool IsValid(int HH, int MM, int SS) //function mengecek format waktu
        if ((HH>0 && HH<=23) && (MM>0 && MM<=59) && (SS>0 && SS<=59))
        {
            return true;
        }
        else
        {
            return false;
        }

    clock MakeClock(int HH, int MM, int SS) //function membuat waktu
    {
        clock c;
        c.HH=HH;
        c.MM=MM;
        c.SS=SS;
        return c;
    }

    hour GetHour(clock c) //function untuk menyimpan nilai jam
    {
        return c.HH;
    }

    minute GetMinute(clock c) //function untuk menyimpan nilai menit
    {
         return c.MM;
    }

    second GetSecond(clock c) //function untuk menyimpan nilai menit
    {
        return c.SS;
    }

    void SetHour(clock *c, int newHH) //prosedur untuk mengganti nilai jam
    {
        (*c).HH=newHH;
    }

    void SetMinute(clock *c, int newMM) //prosedur untuk mengganti nilai menit
    {
        (*c).MM=newMM;
    }

    void SetSecond(clock *c, int newSS) //prosedur untuk menggantikan nilai detik
    {
        (*c).SS=newSS;
    }

    bool IsEqual(clock c1, clock c2)
    {
        if ((c1.HH==c2.HH) && (c1.MM==c2.MM) && (c1.SS==c2.SS))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    clock AddClock(clock c1, clock c2) //function penambahan waktu
    {
        clock c3;
        c3.SS=c1.SS+c2.SS;
        if (c3.SS>=60)
        {
            sisa=c3.SS/60;
            c3.SS=c3.SS-(60*sisa);
            c3.MM=c3.MM+b;
        }

        c3.MM=c1.MM+c2.MM;
        if (c3.MM>=60)
        {
            sisa=c3.MM/60;
            c3.MM=c3.MM-(60*sisa);
            c3.HH=c3.HH+1;
        }

        c3.HH=c1.HH+c2.HH;
        return c3;
    }

    void PrintClock(clock c) //prosedur print waktu
    {
        cout<<c.HH<<":"<<c.MM<<":"<<c.SS<<endl;
    }

    return 0;
}

