#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int main()
{
      cout<<"==================================================="<<endl;
      cout<<"===============#####################==============="<<endl;
      cout<<"==================================================="<<endl;
      cout<<"            Nama : Muhamad Rifky Adhani            "<<endl;
      cout<<"                 Nim : 1103134368                  "<<endl;
      cout<<"==================================================="<<endl;
      cout<<" "<<endl;
       return 0;
       clock c1 = MakeClock(4,45,10);
       clock c2 = MakeClock(7,30,20);
       clock c3 = MakeClock(9,15,30);
    displayClock(c1);
        cout<<"\n";
    displayClock(c2);
        cout<<"\n";

    SetHour(&c1,5);
    SetMinute(&c1,10);
    SetSecond(&c1,30);

   GetHour(c1);
    GetMinute(c1);
    GetSecond(c1);

    c3 = AddClock(c1,c2);

    displayClock(c3);
    cout<<"\n";

   cout<<IsEqual(c1,c2)<<"\n";
    cout<<GetHour(c1);
    return 0;


getch ();
return 0;
}


