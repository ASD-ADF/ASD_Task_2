/**
    KELAS     : IF-39-01
    KELOMPOK  : 3
    NAMA(NIM) : [Sugianto][1301154407] , [Abram][1301154169] , [Elza Fitria][1301154533] , [Muhammad Turmudzi][1301154667]
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
    do{
    cout << "Hello!" << endl;
    cout << "Masukkan Nama Orang 1 : " ;
    cin >> nama;
    cout <<"Masukkan Tanggal Lahir Orang 1 : ";
    cin >> tgl ;
    cout << "Masukkan Bulan Lahir Orang 1 : ";
    cin >> bln ;
    cout << "Masukkan Tahun Lahir Orang 1 : ";
    cin >> thn ;
    cout <<endl;

    o1 =  create_orang(nama, tgl, bln, thn);
    if (cek_tanggal(o1.tgl_orang)==false)
    {
        cout << "Input salah, mohon coba lagi" << endl;
    }
    }while (cek_tanggal(o1.tgl_orang)==false);
    show_orang(o1);
    show_tanggal(o1.tgl_orang);
    cout << endl << endl<<endl;

    do{
    cout << "Masukkan Nama Orang 2 : " ;
    cin >> nama;
    cout <<"Masukkan Tanggal Lahir Orang 2: ";
    cin >> tgl ;
    cout << "Masukkan Bulan Lahir Orang 2 : ";
    cin >> bln ;
    cout << "Masukkan Tahun Lahir Orang 2 : ";
    cin >> thn ;
    cout <<endl;

    o2 = create_orang(nama, tgl, bln, thn);
    if (cek_tanggal(o2.tgl_orang)==false)
    {
        cout << "Input salah, mohon coba lagi" << endl;
    }
    }while (cek_tanggal(o2.tgl_orang)==false);
    show_orang(o2);
    show_tanggal(o2.tgl_orang);
    cout << endl << endl<<endl;

    cout<< "selisih hari : "<<selisih_hari(o1.tgl_orang,o2.tgl_orang) <<" hari";
    return 0;
}
