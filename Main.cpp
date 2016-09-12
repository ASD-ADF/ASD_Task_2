/**
    KELAS     : IF 39 06
    KELOMPOK  : 9
    NAMA(NIM) : [MUHAMMAD YUSUF FAISAL][1301154174] , [Wilson Immanuel Antonio][1301154104] , [Ni Putu Surya Febyanti K][1301154482]
**/


#include <iostream>
#include "orang.h"
#include "tanggal.h"
using namespace std;

orang o1, o2;
string nama;
tanggal org1,org2;


int main() {
    cout << "Hello!" << endl;
    cout << "masukkan nama orang 1: ";
    cin>>nama;
    cout << "masukkan tanggal lahir orang 1: ";
    cin>>org1.dd;
    cout << "masukkan bulan lahir orang 1: ";
    cin>>org1.mm;
    cout << "masukkan tahun lahir orang 1: ";
    cin>>org1.yy;
    cout << endl;

    o1 = create_orang(nama, org1.dd,org1.mm,org1.yy);
    do {
        if (cek_tanggal(org1)) {
            show_orang(o1);
        }else {
            edit_tanggal(org1, org1.dd,org1.mm,org1.yy);
        }
    } while (cek_tanggal(org1)!=true);

    cout << "masukkan nama orang 2: ";
    cin>>nama;
    cout << "masukkan tanggal lahir orang 2: ";
    cin>>org2.dd;
    cout << "masukkan bulan lahir orang 2: ";
    cin>>org2.mm;
    cout << "masukkan tahun lahir orang 2: ";
    cin>>org2.yy;
    cout << endl;

    o2 = create_orang(nama, org2.dd,org2.mm,org2.yy);
    do {
        if (cek_tanggal(org2)) {
            show_orang(o2);
        }else {
            edit_tanggal(org2, org2.dd,org2.mm,org2.yy);
        }
    } while (cek_tanggal(org2)!=true);


    cout << endl;
    cout<< "selisih hari : "<<selisih_hari(o1.tgl,o2.tgl)<<" hari";
    cout << endl;
    return 0;
}
