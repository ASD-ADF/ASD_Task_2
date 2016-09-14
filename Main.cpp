/**
    KELAS     : IF 39-06
    KELOMPOK  : 2
    NAMA(NIM) : [Amin][1301154398] , [Alfin Pratama S][1301154342] , [Hafizh][1301154272] , [Bella][1301154637]
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

    o1 = create_orang(nama, tgl,bln,thn);
    show_orang(o1);
    cout<< endl;

    cout << "masukkan nama orang 2: ";
    cin>>nama;
    cout << "masukkan tanggal lahir orang 2: ";
    cin>>tgl;
    cout << "masukkan bulan lahir orang 2: ";
    cin>>bln;
    cout << "masukkan tahun lahir orang 2: ";
    cin>>thn;

    o2 = create_orang(nama, tgl,bln,thn);
    show_orang(o2);
    cout<< endl;

    cout<< "selisih hari : "<<selisih_hari(o1.tgl_lahir,o2.tgl_lahir)<<" hari";

    if (o1.tgl_lahir.yy != o2.tgl_lahir.yy)
    {
        cout << "Tahun Lahir Harus Sama! Harap Masukkan Tahun Lahir Kembali";
    }
    else
    {
        cout<< "Selisih Hari : "<<selisih_hari(o1.tgl_lahir,o2.tgl_lahir)<<" hari" << endl;
    }
}
while (o1.tgl_lahir.yy != o2.tgl_lahir.yy);
return 0;
