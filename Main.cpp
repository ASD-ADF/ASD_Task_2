/**
    KELAS     : IF 39-06
    KELOMPOK  : 10
    NAMA(NIM) : [nama][nim] , [M. Fadhlan Supriadi][1301154202] , [Hardo Fernando Silalahi][1301154216] , [Dhevi Larasati][1301154454]
**/


#include <iostream>
#include "orang.h"
#include "tanggal.h"
using namespace std;

orang o1, o2;
string nama;
int tgl, bln, thn;
tanggal tgl1, tgl2;
bool ok;

int main() {
    orang org;
    cout << "Hello!" << endl;
    cout << "Masukkan nama orang 1: ";
    cin>>nama;

    bool ok = false;
    while (!ok)
    {
        cout << "Masukkan tanggal lahir orang 1: ";
        cin>>tgl;
        cout << "Masukkan bulan lahir orang 1: ";
        cin>>bln;
        cout << "Masukkan tahun lahir orang 1: ";
        cin>>thn;
        o1 = create_orang(nama, tgl,bln,thn);
        ok = cek_tanggal(o1.tgl_lahir);
    }
    show_orang(o1);

    cout << "Masukkan nama orang 2: ";
    cin>>nama;
    ok = false;
    while (!ok)
    {
        cout << "Masukkan tanggal lahir orang 2: ";
        cin>>tgl;
        cout << "Masukkan bulan lahir orang 2: ";
        cin>>bln;
        cout << "Masukkan tahun lahir orang 2: ";
        cin>>thn;
        o2 = create_orang(nama, tgl,bln,thn);
        ok = cek_tanggal(o2.tgl_lahir);
    }
    show_orang(o2);

    cout<< "selisih hari : "<<selisih_hari(o1.tgl_lahir,o2.tgl_lahir)<<" hari";
    return 0;
}
