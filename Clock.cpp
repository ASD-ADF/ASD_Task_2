# include <iostream>
#include "clock.h"

using namespace std;
bool isvalid (int j,m,d)
{
    if (j>=0&&j<=23&&m>=0&&m<=59&&d<=59)
    {
        return true;

    }
    else
    {
        return false
    }
}
clock makeclock (int jj,int mm,int dd)
{
    clock c;
    c.jam=h;
    c.menit=m;
    c. detik=s'
    return c;

}
int gethour (clock cj)
{
    return cj.jam;

}
int getminute (clock cm)
{
    return cm.menit;

}
int getsecond(clock cd)
{
    return cd.detik;

}
void sethour (int hour)
{

    clock jm;
    jm.jam=hour;
    cout<< " jam telah diubah menjadi "<<jm.jam<<"\n";
}
void setminute (int minute)
{
    clock mnt;
    mnt.menit=minute;
    cout<<" menit telah diubah menjadi "<<mnt.menit<<"\n";

}
void setsecond(int second)
{
    clock scn;
    scn.detik=second;
    cout<<"detik telah diubah menjadi: "<<scn.detik=second<<"\n";
}
bool isequal(clock x1,clock x2)
{
    bool vld;
    if (x1.jam==x2.jam && x1.menit==x2.menit &&detik==x2.detik)

}
{


    vld=true;

}
    else
    {
        vld=false;

    }
    return vld;
    void printclock(clock.prt)
{
    cout<<prt.jam<<" : "<<prt.menit<<" : "<<prt.detik<<"\n";

}

