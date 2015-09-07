#include <iostream>
#include "jam.h"
using namespace std;
bool validasi(int jj, int mm, int dd)
{


    if ((jj>=0)&&(jj<=23)&&(mm>=0)&&(mm<=59)&&(dd>=0)&&(dd<=59)){
    return true;
    }
    else{
        return false;
    }
}
clock buatjam(int jj, int mm, int dd)
{
    clock jl;
    jl.jam=jj;
    jl.menit=mm;
    jl.detik=dd;
    return jl;
}
int tampiljam(clock jl)
{

    return jl.jam;
}
int tampilmenit(clock jl)
{

    return jl.menit;
}
int tampildetik(clock jl)
{

    return jl.detik;
}
void aturjam(int jj)
{
    clock j1j;
    j1j.jam=jj;
    cout << "Jam sudah diatur menjadi " << j1j.jam << endl;

}
void aturmenit(int mm)
{
    clock j1j;
    j1j.menit=mm;
    cout << "Menit sudah diatur menjadi " << j1j.menit << endl;

}

void aturdetik(int ss)
{
    clock j1j;
    j1j.detik=ss;
    cout << "Detik sudah diatur menjadi " << j1j.detik << endl;

}
bool bandingjam(clock j1, clock j2)
{
    bool valid;
    if (j1.jam == j2.jam&&j1.menit==j2.menit&&j1.detik==j2.detik){
        valid=true;
    }
    else{
        valid=false;
    }
    return valid;
}

void outjam(clock j1)
{
   cout <<"Jam hasil penjumlahan jam pertama dan kedua: "<< j1.jam << ":" << j1.menit<< ":" << j1.detik << endl;
}


clock jumlahjam (clock j1, clock j2)
{
    clock jl3;
    jl3.jam=j1.jam+j2.jam;
    jl3.menit=j1.menit+j2.menit;
    jl3.detik=j1.detik+j2.detik;

    return jl3;

}

