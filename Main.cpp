#include <iostream>

using namespace std;
int jam1,jam2,menit1,menit2,detik1,detik2,totaljam,totalmenit,totaldetik;
int main()
{
    detik1==0;
    detik2==0;
    do
    {
        cout<<"Masukkan Durasi Pertama : "<<endl;
        cout<<"Jam : ";
        cin>>jam1;
        cout<<"Menit : ";
        cin>>menit1;
        cout<<"Detik : ";
        cin>> detik1;
        cout<<"Masukkan Durasi Kedua: "<<endl;
        cout<<"Jam : ";
        cin>>jam2;
        cout<<"Menit : ";
        cin>>menit2;
        cout<<"Detik : ";
        cin>> detik2;
    totaldetik=detik1+detik2;
    totalmenit=menit1+menit2;
    totaljam=jam1+jam2;
    }
    while ((detik1>60) or (detik2>60));
    if (totaldetik>60){
        totaldetik=totaldetik-60;
    ++totalmenit;}
    else {totaldetik=totaldetik;}
    if (totalmenit>60);

    else {totalmenit=totalmenit;}
    cout<<"total durasi: "<<totaljam<<"jam"<<totalmenit<<"menit"<<totaldetik;
    return 0;
}
