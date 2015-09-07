#include "clock.h"

int main()
{
    clock itujam1,itujam2,itujambaru;
    jam x;
    menit y;
    bool z;


    itujam1=Buatjam(20,40,40);
    itujam2=Buatjam(21,50,30);
    x=ambiljam(itujam1);
    y=ambilmenit(itujam2);
    itujambaru=tambahjam(itujam1,itujam2);
    z=sama(itujam1,itujam2);
    cout<<z;
}

