#include <clock.h>

bool isValid(hour h, minute m, second s)
{
    if((h >= 0 && h <= 23) && (m >= 0 && m <= 59) && (s >= 0 && s <= 59))
       return true;
    else return false;
}

clock makeClock(hour h, minute m, second s)
{
    clock cl;
    if(isValid(h, m, s))
    {
        cl.HH = h;
        cl.MM = m;
        cl.SS = s;
    }
    else
    {
        cl.HH = -1;
        cl.MM = -1;
        cl.SS = -1;
    }
    return cl;
}

hour getHour(clock cl)
{
    return cl.HH;
}

minute getMinute(clock cl)
{
    return cl.MM;
}

second getSecond(clock cl)
{
    return cl.SS;
}

void setHour(clock cl, hour newHH)
{
    cl.HH = newHH;
}

void setMinute(clock cl, minute newMM)
{
    cl.MM = newMM;
}

void setSecond(clock cl, second newSS)
{
    cl.SS = newSS;
}

bool isEqual(clock cl, clock cl2)
{
    if((cl.HH = cl2.HH) && (cl.MM = cl2.MM) && (cl.SS = cl2.SS))
        return true;
    else return false;
}

clock addClock(clock cl, clock cl2)
{
    clock cl3;
    if(cl.SS + cl2.SS > 59)
    {
        cl3.SS = cl.SS + cl2.SS - 60;
        cl.MM++;
//        cout << "SS " << cl3.SS << endl;
    }
    else cl3.SS = cl.SS + cl2.SS;

    if(cl.MM + cl2.MM > 59)
    {
        cl3.MM = cl.MM + cl2.MM - 60;
        cl.HH++;
    }
    else cl3.MM = cl.MM + cl2.MM;

    if(cl.HH + cl2.HH > 23)
    {
        cl3.HH = cl.HH + cl2.HH - 24;
    }
    else cl3.HH = cl.HH + cl2.HH;

    return cl3;
}

void printClock(clock cl)
{
    if((cl.HH < 0) && (cl.MM < 0) && (cl.SS < 0))
        cout << "Jam tidak valid!" << endl;
    else
        cout << cl.HH << ":" << cl.MM << ":" << cl.SS << endl;
}
