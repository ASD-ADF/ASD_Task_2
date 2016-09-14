/**
    KELAS     : IF 39-06
    KELOMPOK  : 4
    NAMA(NIM) : Hutomo Aji Prasetyo 1301154384, Rama Aditya Maulana 1301150034, Kharisma Oktavianing Herwanda 1301154496, Rizki Hidayatullah 1301154118
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
    do{
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

    do{
    cout <<endl;
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

    cout<< "selisih hari : "<<selisih_hari(o1.tgl_lahir,o2.tgl_lahir)<<" hari";
}
}
    return 0;

