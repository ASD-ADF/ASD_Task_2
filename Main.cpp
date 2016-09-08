/**
    KELAS     : IF-39-06
    KELOMPOK  :
    NAMA(NIM) : [Faishal Rachman][1301154160] , [nama][nim] , [nama][nim] , [nama][nim]
**/


#include <iostream>
#include "orang.h"
#include "tanggal.h"
using namespace std;

orang o1, o2;
string nama;
int tgl, bln, thn;


int main()
{
    cout << "Hello!" << endl;
    do
    {
        cout << "masukkan nama orang 1: ";
        cin>>nama;
        cout << "masukkan tanggal lahir orang 1: ";
        cin>>tgl;
        cout << "masukkan bulan lahir orang 1: ";
        cin>>bln;
        cout << "masukkan tahun lahir orang 1: ";
        cin>>thn;
        if (tgl == 0 || tgl > bulankehari(bln-1,thn) || bln == 0 || bln > 12)
            cout << "Maaf input salah. silahkan coba lagi \n\n";
    }
    while(tgl == 0 || tgl > bulankehari(bln-1,thn) || bln == 0 || bln > 12);

    o1 = create_orang(nama, tgl,bln,thn);
    show_orang(o1);

    do
    {
        cout << "masukkan nama orang 2: ";
        cin>>nama;
        cout << "masukkan tanggal lahir orang 2: ";
        cin>>tgl;
        cout << "masukkan bulan lahir orang 2: ";
        cin>>bln;
        cout << "masukkan tahun lahir orang 2: ";
        cin>>thn;
        if (tgl == 0 || tgl > bulankehari(bln-1,thn) || bln == 0 || bln > 12)
            cout << "Maaf input salah. silahkan coba lagi \n\n";
    }
    while(tgl == 0 || tgl > bulankehari(bln-1,thn) || bln == 0 || bln > 12);

    o2 = create_orang(nama, tgl,bln,thn);
    show_orang(o2);

    cout<< "selisih hari : "<<selisih_hari(o1.tgl_lahir,o2.tgl_lahir)<<" hari";
    return 0;
}
