/**
    KELAS     : IF 39_06
    KELOMPOK  : 9
    NAMA(NIM) : [M. Yusuf Faishal][1301154174] , [Ni Putu Surya Febyanti Kusumadewi][1301154482] , [Wilson Immanuel Antonio][1301154104]
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

    o1 = create_orang(nama,tgl,bln,thn);

    if (cek_tanggal(o1.tgl_lahir)==true){
        show_orang(o1);
    }
    else
    {
        edit_tanggal(o1.tgl_lahir,tgl,bln,thn);
    }

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
    return 0;
}
