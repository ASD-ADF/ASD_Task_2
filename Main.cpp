#include <iostream>

using namespace std;
int jam1,jam2,menit1,menit2,detik1,detik2,totaljam,totalmenit,totaldetik;
int main()
{
    detik1==0;
    detik2==0;
    do
    {
        cout<<"input durasi 1: "<<endl;
        cout<<"jam : ";
        cin>>jam1;
        cout<<"menit : ";
        cin>>menit1;
        cout<<"detik : ";
        cin>> detik1;
        cout<<"input durasi 2: "<<endl;
        cout<<"jam : ";
        cin>>jam2;
        cout<<"menit : ";
        cin>>menit2;
        cout<<"detik : ";
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
    if (totalmenit>60)
        {totalmenit=totalmenit-60;
    ++totaljam;}
    else {totalmenit=totalmenit;}
    cout<<"total durasi: "<<totaljam<<":"<<totalmenit<<":"<<totaldetik;
    return 0;
}
