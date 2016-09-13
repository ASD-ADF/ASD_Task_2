/**
    KELAS     : IF 39-06
    KELOMPOK  :
    NAMA(NIM) : [Aziza Hayupratiwi][1301150440] , [M. Luthfi A.S][1301154328]
**/


#include <iostream>
#include "orang.h"
#include "tanggal.h"
using namespace std;

orang o1;
orang o2;
string nama;
int tgl_lahir, bln, thn;


int main() {

   cout << "masukkan nama orang 1: ";
    cin>>nama;
     cout << "masukkan tanggal lahir orang 1: ";
     cin>>tgl_lahir;
    cout << "masukkan bulan lahir orang 1: ";
     cin>>bln;
     cout << "masukkan tahun lahir orang 1: ";
    cin>>thn;

     o1 = create_orang(nama, tgl_lahir,bln,thn);
     show_orang(o1);

     cout << "masukkan nama orang 2: ";
    cin>>nama;
     cout << "masukkan tanggal lahir orang 2: ";
    cin>>tgl_lahir;
    cout << "masukkan bulan lahir orang 2: ";
    cin>>bln;
     cout << "masukkan tahun lahir orang 2: ";
     cin>>thn;

     o2 = create_orang(nama, tgl_lahir,bln,thn);
     show_orang(o2);

     cout<< "selisih_hari : "<<selisih_hari(o1.tgl_lahir,o2.tgl_lahir)<<" hari";
     do {

        cout << "Masukkan Nama Orang 1: ";
         cin>>nama;
         cout << "Masukkan Tanggal Lahir Orang 1: ";
        cin>>tgl_lahir;
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
        cin>>tgl_lahir;
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
            cout<< "Selisih_Hari : "<<selisih_hari(o1.tgl_lahir,o2.tgl_lahir)<<" hari" << endl;
         }
     } while (o1.tgl_lahir.yy != o2.tgl_lahir.yy);




    return 0;
}
