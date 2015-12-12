#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;
using namespace std;

int main()
int main()
 {
 {
  return 0;

       cout<<" "<<endl;
       return 0;
       clock c1 = MakeClock(4,45,10);
       clock c2 = MakeClock(7,30,20);
       clock c3 = MakeClock(9,15,30);
    displayClock(c1);
        cout<<"\n";
    displayClock(c2);
        cout<<"\n";

    sethour(&c1,5);
    setminute(&c1,10);
    setsecond(&c1,30);

    gethour(c1);
    getminute(c1);
    getsecond(c1);

    c3 = AddClock(c1,c2);

    displayClock(c3);
    cout<<"\n";

    cout<<IsEqual(c1,c2)<<"\n";
    cout<<gethour(c1);
    return 0;


getch ();
return 0;
}
 }
