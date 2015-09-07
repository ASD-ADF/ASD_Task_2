#include <iostream>
#include "jam.h"

using namespace std;
bool vlds,valid;


    clock jm,jl,jl2,jl3;
int main()
{

    vlds=false;
    vlds=validasi(12,21,21);
    if (vlds==true){
        cout << "Jam valid" << endl;
    }
    else if (vlds==false){
        cout <<"Jam tidak valid" << endl;
            }
    jm=buatjam(20,15,30);
    cout << "Sekarang adalah jam: " << jm.jam <<":"<< jm.menit<< ":" << jm.detik << endl;
    cout << "Jam sekarang: "<< tampiljam(jm) << endl;
    cout << "Menit sekarang: "<< tampilmenit(jm) << endl;
    cout << "Detik sekarang: "<< tampildetik(jm) << endl;
   aturjam(18);
   aturmenit(17);
   aturdetik(25);



     jl=buatjam(07,10,15);
    jl2=buatjam(12,10,15);
    valid=bandingjam(jl,jl2);
    if (valid==true){
        cout << "Jam pertama dan kedua sama" << endl;
    }
    else if (valid==false) {
        cout <<"Jam pertama dan kedua berbeda" << endl;
    }
    jl3=jumlahjam(jl,jl2);
    outjam(jl3);
    return 0;

}

