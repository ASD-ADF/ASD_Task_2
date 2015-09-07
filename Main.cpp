#include <iostream>
#include "heads.h"
using namespace std;
bool cek;
clock waktu,cwaktu;
bool val;

int main()
{
    cek=false;
    cek=IsValid(10,22,54);
    if (cek==true){
        cout<<"Jam Benar" <<endl;
    }
    else if (cek==false){
        cout<<"Jam Salah" <<endl;
    }
    waktu=buatjam(10,22,54);
    cout<<"sekarang jam : " << waktu.jam << " : " << waktu.meni << " : " << waktu.det << endl;
    cout<<"jam sekarang : " << ambiljam(waktu) << endl;
    cout<<"menit sekarang : " << ambilmenit(waktu) << endl;
    cout<<"detik sekarang : " << ambildetik(waktu) << endl;
    setjam(12);
    setmen(29);
    setdet(45);
    cwaktu=buatjam (02, 52, 39);
    val=Equal (waktu,cwaktu);
    if (val=true){
        cout<<"True" <<endl;
    }
    else if (val=false){
        cout<<"False" <<endl;
    }
    Print (waktu);
    return 0;
}
