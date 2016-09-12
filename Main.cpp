/**
    KELAS     : IF 39-06
    KELOMPOK  : 8
    NAMA(NIM) : [Aziza Hayupratiwi][1301150440] , [M. Luthfi A.S][1301154328] , [Rafi][nim] , [nama][nim]
**/


#include <iostream>
#include "orang.h"
#include "tanggal.h"
using namespace std;

orang o1, o2;
string nama;
int tgl, bln, thn;


int main() {
    do {
        cout << "Hello!" << endl;
        cout << "Masukkan Nama Orang 1: ";
        cin>>nama;
        cout << "Masukkan Tanggal Lahir Orang 1: ";
        cin>>tgl;
        cout << "Masukkan Bulan Lahir Orang 1: ";
        cin>>bln;
        cout << "Masukkan Tahun Lahir Orang 1: ";
        cin>>thn;
        cout << endl;

        o1 = create_orang(nama, tgl,bln,thn);
        show_orang(o1);

        cout << "Masukkan Nama Orang 2: ";
        cin>>nama;
        cout << "Masukkan Tanggal Lahir Orang 2: ";
        cin>>tgl;
        cout << "Masukkan Bulan Lahir Orang 2: ";
        cin>>bln;
        cout << "Masukkan Tahun Lahir Orang 2: ";
        cin>>thn;
        cout << endl;

        o2 = create_orang(nama, tgl,bln,thn);
        show_orang(o2);

        if (o1.tgl_lahir.yy != o2.tgl_lahir.yy) {
            cout << "Tahun Lahir Harus Sama! Harap Masukkan Tahun Lahir Kembali";
        } else {
            cout<< "Selisih Hari : "<<selisih_hari(o1.tgl_lahir,o2.tgl_lahir)<<" hari" << endl;
        }
    } while (o1.tgl_lahir.yy != o2.tgl_lahir.yy);
    return 0;
}
