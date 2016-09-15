/**
    KELAS     : IF 39-01
    KELOMPOK  : 9
    NAMA(NIM) : [Moh. Abdul Haris Angio][nim] , [Nabil][nim] , [Nadine Azhalia][1301154519] , [Ressa Firmansyah Fatah][1301154105]
**/


#include <iostream>
#include "orang.h"
#include "tanggal.h"
using namespace std;

orang o1, o2;
string nama;
int tgl, bln, thn;


int main() {
    cout << "Hello!" << endl;
    cout << "masukkan nama orang 1: ";
    cin>>nama;
    cout << "masukkan tanggal lahir orang 1: ";
    cin>>tgl;
    cout << "masukkan bulan lahir orang 1: ";
    cin>>bln;
    cout << "masukkan tahun lahir orang 1: ";
    cin>>thn;
    cout << endl;

    o1 = create_orang(nama, tgl,bln,thn);
    cek_tanggal(o1.tgl_lahir);
    while (cek_tanggal(o1.tgl_lahir)==false) {
        cout <<"Tanggal yang anda masukkan salah, mohon input ulang"<<endl;
        cout << "masukkan tanggal lahir orang 1: ";
        cin>>tgl;
        cout << "masukkan bulan lahir orang 1: ";
        cin>>bln;
        cout << "masukkan tahun lahir orang 1: ";
        cin>>thn;
        edit_tanggal(o1.tgl_lahir,tgl,bln,thn);
        cout<<endl;
    }
    show_orang(o1);
    cout << endl;

    cout << "masukkan nama orang 2: ";
    cin>>nama;
    cout << "masukkan tanggal lahir orang 2: ";
    cin>>tgl;
    cout << "masukkan bulan lahir orang 2: ";
    cin>>bln;
    cout << "masukkan tahun lahir orang 2: ";
    cin>>thn;
    cout << endl;

    o2 = create_orang(nama, tgl,bln,thn);
    cek_tanggal(o2.tgl_lahir);
    while (cek_tanggal(o2.tgl_lahir)==false) {
        cout << "Tanggal yang anda masukkan salah, mohon input ulang"<<endl;
        cout << "masukkan tanggal lahir orang 1: ";
        cin>>tgl;
        cout << "masukkan bulan lahir orang 1: ";
        cin>>bln;
        cout << "masukkan tahun lahir orang 1: ";
        cin>>thn;
        edit_tanggal(o2.tgl_lahir,tgl,bln,thn);
        cout<<endl;
    }
    show_orang(o2);
    cout << endl;

    cout<< "selisih hari : "<<selisih_hari(o1.tgl_lahir,o2.tgl_lahir)<<" hari";
    return 0;
}
