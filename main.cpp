/**
    KELAS     : IF-39-06
    KELOMPOK  : 4
    NAMA(NIM) : RAMA ADITYA MAULANA 1301150034, KHARISMA OKTAVIANING HERWANDA 1301154496, HUTOMO AJI 1301154384, RIZKI HIDAYATULLAH 1301154118
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
    cout<<"HELLO!!!!!!!!!"<<endl;
    do {
        cout<<"Masukkan nama orang 1 : ";
        cin>>nama;
        cout<<"Masukkan tanggal lahir orang 1 : ";
        cin>>tgl;
        cout<<"Masukkan bulan lahir orang 1 : ";
        cin>>bln;
        cout<<"Masukkan tahun lahir orang 1 : ";
        cin>>thn;

        if (tgl == 0 || tgl > 31 || bln > 12 || bln == 0 || tgl > jumlah_hari_bulan(bln,thn)) {
            cout<<"Maaf, Tanggal yang dimasukkan salah!!\n\n";

        }
    }

    while (tgl == 0 || tgl > 31 || bln > 12 || bln == 0 || tgl > jumlah_hari_bulan(bln,thn) );
    o1 = create_orang(nama, tgl, bln, thn);
    show_orang(o1);

    do {
        cout<<endl;
        cout<<"Masukkan nama orang 2 : ";
        cin>>nama;
        cout<<"Masukkan tanggal lahir orang 2 : ";
        cin>>tgl;
        cout<<"Masukkan bulan lahir orang 2 : ";
        cin>>bln;
        cout<<"Masukkan tahun lahir orang 2 : ";
        cin>>thn;
        if (tgl == 0 || tgl > 31 || bln > 12 || bln == 0 || tgl > jumlah_hari_bulan(bln,thn)) {
            cout<<"Maaf, Tanggal yang dimasukkan salah!!\n\n";

        }
    }

        while (tgl == 0 || tgl > 31 || bln > 12 || bln == 0 || tgl > jumlah_hari_bulan(bln,thn) );
    o2 = create_orang(nama, tgl, bln, thn);
    show_orang(o2);



    //cout<<"SELISIH HARI : "<<selisih_hari(o1.tgl_lahir,o2.tgl_lahir)<<" hari";

    return 0;
}
