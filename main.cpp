/**
    KELAS     : IF 39-01
    KELOMPOK  : - (Maaf kami lupa pak)
    NAMA(NIM) : [Raden Rizky Falih P][1301154211] , [Dwiferdio Seagal P][1301154323] , [Dhevin Andrean Akbar][1301150015] , [Amelia Anis][1301154547]
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
    cout << "masukkan nama orang 1: ";
    cin>>nama;
    cout << "masukkan tanggal lahir orang 1: ";
    cin>>tgl;
    cout << "masukkan bulan lahir orang 1: ";
    cin>>bln;
    cout << "masukkan tahun lahir orang 1: ";
    cin>>thn;
    cout<< "\n";
    o1 = create_orang(nama, tgl,bln,thn);
    cek_tanggal(o1.tgl_lahir);
    while (cek_tanggal(o1.tgl_lahir)==false)
    {
        cout << "salah input tanggal/bulan. coba lagi"<<endl;
        cout << "\n";
        cout << "masukkan tanggal lahir orang 1: ";
        cin>>tgl;
        cout << "masukkan bulan lahir orang 1: ";
        cin>>bln;
        cout << "masukkan tahun lahir orang 1: ";
        cin>>thn;
        edit_tanggal(o1.tgl_lahir,tgl,bln,thn);
        cout << endl;
    }
    show_orang(o1);
    cout<< "\n";
    cout << "masukkan nama orang 2: ";
    cin>>nama;
    cout << "masukkan tanggal lahir orang 2: ";
    cin>>tgl;
    cout << "masukkan bulan lahir orang 2: ";
    cin>>bln;
    cout << "masukkan tahun lahir orang 2: ";
    cin>>thn;
    cout<< "\n";
    o2 = create_orang(nama, tgl,bln,thn);
    cek_tanggal(o2.tgl_lahir);
    while (cek_tanggal(o2.tgl_lahir)==false)
    {
        cout << "salah input tanggal/bulan. coba lagi"<<endl;
        cout << "\n";
        cout << "masukkan tanggal lahir orang 2: ";
        cin>>tgl;
        cout << "masukkan bulan lahir orang 2: ";
        cin>>bln;
        cout << "masukkan tahun lahir orang 2: ";
        cin>>thn;
        edit_tanggal(o2.tgl_lahir,tgl,bln,thn);
        cout << endl;
    }
    show_orang(o2);
    cout<< "\n";
    cout<< "selisih hari : "<<selisih_hari(o1.tgl_lahir,o2.tgl_lahir)<<" hari";
    return 0;
}
