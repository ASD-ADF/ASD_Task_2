/**
    KELAS     : IF 39-06
    KELOMPOK  : 6
    NAMA(NIM) : [surya fachri idris nst][1301154230] , [sarah fauziah l][1301154552] , [abdul rahman safari][1301144380]
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

    o1 = create_orang(nama, tgl,bln,thn);

    bool true_tgl = false;
    while(!true_tgl){
        cout << "masukkan tanggal lahir orang 1 : ";
        cin>>tgl;
        cout << "masukkan bulan lahir orang 1   : ";
        cin>>bln;
        cout << "masukkan tahun lahir orang 1   : ";
        cin>>thn;
        o1 = create_orang(nama, tgl,bln,thn);
        true_tgl = cek_tanggal(o1.tgl_lahir);
    }
    show_orang(o1);

    cout << "masukkan nama orang 2: ";
    cin>>nama;
    cout << "masukkan tanggal lahir orang 2: ";
    cin>>tgl;
    cout << "masukkan bulan lahir orang 2: ";
    cin>>bln;
    cout << "masukkan tahun lahir orang 2: ";
    cin>>thn;

    o2 = create_orang(nama, tgl,bln,thn);

    true_tgl = false;
    while(!true_tgl){
        cout << "masukkan tanggal lahir orang 2 : ";
        cin>>tgl;
        cout << "masukkan bulan lahir orang 2   : ";
        cin>>bln;
        cout << "masukkan tahun lahir orang 2   : ";
        cin>>thn;
        o2 = create_orang(nama, tgl,bln,thn);
        true_tgl = cek_tanggal(o2.tgl_lahir);
    }
    show_orang(o2);

    cout<< "selisih hari : "<<selisih_hari(o1.tgl_lahir,o2.tgl_lahir)<<" hari";

    int hasil_selisih = selisih_hari(o1.tgl_lahir,o2.tgl_lahir);
    if (hasil_selisih == -1) {
        cout << "Tahun harus sama";
    }
    else{
        cout<< "selisih hari : "<<hasil_selisih<<" hari";
    }


    return 0;
}