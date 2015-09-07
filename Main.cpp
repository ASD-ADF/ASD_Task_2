#include<iostream>
#include "Clock.h"

int main(){
    clock c1,c2,c3;

    c1=makeclock(2,30,4);
    c2=makeclock(6,0,0);
    printclock(c1);
    printclock(c2);

    isvalid(1,62,30);
    if (isvalid(1,62,30)==true){
        cout << "Format jam benar \n";
    }
    else{
        cout << "Format jam salah \n";
    }

    cout << endl;
    sethour(c1,5);
    setminute(c2,10);
    setsecond(c1,59);

    isequal(c1,c2);
    if (isequal(c1,c2)==false){
        cout << "Jam berbeda \n";
    }
    else{
        cout << "Jam sama \n";
    }

    c3=addclock(c1,c2);
    printclock(c3);
    getch();
    return 0;
}
