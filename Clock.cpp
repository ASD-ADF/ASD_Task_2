#include <iostream>
#include "heads.h"
using namespace std;

bool IsValid(int jj,int mm, int ss)
{
    if ((jj>=0)&&(jj<=23)&&(mm>=0)&&(mm<=59)&&(ss>=0)&&(ss<=59)){
    return true;
    }
    else{
        return false;
    }
}

clock buatjam(int h,int m,int s)
{
    clock wkt;
    wkt.jam=h;
    wkt.meni=m;
    wkt.det=s;
    return wkt;
}

int ambiljam(clock jams){
    return jams.jam;
    }
int ambilmenit(clock menit){
    return menit.meni;
    }
int ambildetik(clock detik){
    return detik.det;
    }

void setjam(int jamset)
{
    clock jaman;
    jaman.jam=jamset;
    cout << "Jam diatur jadi : " << jaman.jam << endl;
}
void setmen(int menset)
{
    clock menan;
    menan.meni=menset;
    cout << "menit diatur jadi : "<< menan.meni << endl;
}
void setdet(int detset)
{
    clock detan;
    detan.det=detset;
    cout << "detik diatur jadi : "<< detan.det << endl;
}
bool Equal (clock equ1, clock equ2)
{
    bool val;
    if (equ1.jam == equ2.jam && equ1.meni == equ2.meni && equ1.det == equ2.det)
    {
        val=true;
    }
    else
    {
        val=false;
    }
    return val;
}
void Print (clock pit)
{
    cout << pit.jam << " : " << pit.meni << " : " << pit.det << endl;
}

