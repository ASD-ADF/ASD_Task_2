/**
    KELAS     :IF 39-06
    KELOMPOK  :4
    NAMA(NIM) : rama aditya maulana,1301150034,kharisma oktavianing herwanda , 1301154496,  hutomo aji, 1301154384 rizki hidayatullah, 1301154118,
**/


#include <iostream>
#include "orang.h"
#include "tanggal.h"
using namespace std;

orang o1, o2;
string nama;
int tgl, bln, thn ;


int main() {
    cout << "Hello!" << endl;
    do{
    cout << "masukkan nama orang 1: ";
    cin>>nama;
    cout << "masukkan tanggal lahir orang 1: ";
    cin>>tgl;
    cout << "masukkan bulan lahir orang 1: ";
    cin>>bln;
    cout << "masukkan tahun lahir orang 1: ";
    cin>>thn;

    if(tgl== 0 || tgl>31|| bln >12 || bln==0 || tgl >jumlah_hari_bulan (bln,thn)){
        cout<<"maaf, tanggal yang dimasukkan salah!\n\n";
        }
    }
while (tgl==0 || tgl> 31 || bln>12 || bln==0 || tgl> jumlah_hari_bulan(bln,thn));

    o1 = create_orang(nama, tgl,bln,thn);
    show_orang(o1);

    do{
    cout<<endl;

    cout << "masukkan nama orang 2: ";
    cin>>nama;
    cout << "masukkan tanggal lahir orang 2: ";
    cin>>tgl;
    cout << "masukkan bulan lahir orang 2: ";
    cin>>bln;
    cout << "masukkan tahun lahir orang 2: ";
    cin>>thn;

    if(tgl== 0|| bln >12 || bln==0 || tgl >jumlah_hari_bulan (bln,thn)){
        cout<<"maaf, tanggal yang dimasukkan salah!\n\n";
        }
}
while (tgl==0 || bln>12 || bln==0 ||tgl> jumlah_hari_bulan(bln,thn));

    o2 = create_orang(nama, tgl,bln,thn);
    show_orang(o2);

    cout<< "selisih hari : "<<selisih_hari(o1.tgl_lahir,o2.tgl_lahir)<<" hari";
    return 0;
}
