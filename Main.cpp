/**
    KELAS     : IF-39-01
    KELOMPOK  : 11
    NAMA(NIM) : Aditya Alif Nugraha 1301154183 , Rofif Irsyad F 1301150001 , Defa Eka Ardio 1301154281
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
    cout << "Masukkan nama orang 1: ";
    cin>>nama;
    cout << "Masukkan tanggal lahir orang 1: ";
    cin>>tgl;
    cout << "Masukkan bulan lahir orang 1: ";
    cin>>bln;
    cout << "Masukkan tahun lahir orang 1: ";
    cin>>thn;
    cout<<endl;
    o1 = create_orang(nama,tgl,bln,thn);
    while (cek_tanggal(o1.tgl_lahir) == false)
    {
        cout<<"Tanggal yg anda masukkan salah. Silahkan coba kembali!"<<endl<<"Masukkan tanggal lahir orang 1: ";
        cin>>tgl;
        cout << "Masukkan bulan lahir orang 1: ";
        cin>>bln;
        cout << "Masukkan tahun lahir orang 1: ";
        cin>>thn;
        cout<<endl;
        edit_tanggal(o1.tgl_lahir,tgl,bln,thn);
    }

    show_orang(o1);

    cout<<endl<< "Masukkan nama orang 2: ";
    cin>>nama;
    cout << "Masukkan tanggal lahir orang 2: ";
    cin>>tgl;
    cout << "Masukkan bulan lahir orang 2: ";
    cin>>bln;
    cout << "Masukkan tahun lahir orang 2: ";
    cin>>thn;
    cout<<endl;

    o2 = create_orang(nama,tgl,bln,thn);
    while (cek_tanggal(o2.tgl_lahir) == false)
    {
        cout<<"Tanggal yg anda masukkan salah. Silahkan coba kembali!"<<endl<<"Masukkan tanggal lahir orang 1: ";
        cin>>tgl;
        cout << "Masukkan bulan lahir orang 1: ";
        cin>>bln;
        cout << "Masukkan tahun lahir orang 1: ";
        cin>>thn;
        cout<<endl;
        edit_tanggal(o2.tgl_lahir,tgl,bln,thn);
    }

    show_orang(o2);

    if (o1.tgl_lahir.yy != o2.tgl_lahir.yy)
    {
        cout<<endl<<"Maaf! Tahun lahir berbeda"<<endl;
    }
    else
    {
            cout<<endl<<"Selisih hari : "<<(selisih_hari(o1.tgl_lahir,o2.tgl_lahir))<<" hari";
    }
    return 0;
}
