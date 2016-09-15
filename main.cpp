/**
    KELAS     : IF-39-01
    KELOMPOK  : 10
    NAMA(NIM) : [Anjar Afrizal][1301154239] , [Fahru Adi Ramadhan][1301154141] , [Fauzi Kurniawan][1301150267] , [Regita Ratih P][1301150435]
**/


#include <iostream>
#include <windows.h>
#include <conio.h>
#include "orang.h"
#include "tanggal.h"
using namespace std;

orang o1, o2;
string nama;
int tgl, bln, thn, pilihan, tgledit,b;
bool cek;

void mainmenu();
void rubah_tanggal();
void tampil_data();


int main()
{
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
    cek = cek_tanggal(o1.tgl_lahir);
    if (cek == true)
    {
        cout << endl;
        show_orang(o1);
        cout << endl;

    }
    else
    {
        cout << "maaf input tanggal lahir anda salah, silahkan ulangi lagi"<<endl;
        cout << endl;
        return main();
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
    cek = cek_tanggal(o2.tgl_lahir);
    if (cek == true)
    {
        cout << endl;
        show_orang(o2);
        cout << endl;

    }
    else
    {
        cout << "maaf input tanggal lahir anda salah, silahkan ulangi lagi"<<endl;
        cout << endl;
        return main();
    }

    cout<< "selisih hari : "<<selisih_hari(o1.tgl_lahir,o2.tgl_lahir)<<" hari"<<endl;
    cout<< endl;
    getch();
    system("cls");

    mainmenu();
    return 0;

}

void mainmenu ()
{
    cout << "Main Menu" <<endl;
    cout << "1. Edit Tanggal Lahir"<<endl;
    cout << "2. Tampil Data orang & selisih Tanggal lahir"<<endl;
    cout << "3. Keluar"<<endl;
    cout << endl;
    cout << "Masukkan Pilihan: ";
    cin >> pilihan;

    switch (pilihan)
    {
    case 1 :
        rubah_tanggal();
        break;
    case 2 :
        tampil_data();
        break;
    case 3 :
        cout << "Terima Kasih"<<endl;
        break;
    }
}

void rubah_tanggal()
{
    cout << "pilih data tanggal lahir yang akan dirubah 1=orang1 2=orang2 : ";
    cin >> tgledit;
    if (tgledit == 1)
    {
        cout << "masukan tanggal : ";
        cin >> tgl;
        cout << "masukan bulan : ";
        cin >> bln;
        cout << "masukan tahun : ";
        cin >> thn;
        edit_tanggal(o1.tgl_lahir, tgl, bln, thn);
        cout << endl;
        show_orang(o1);
        cout << endl;
        cout << "tekan enter"<< endl;
        getch();
        system("cls");
        mainmenu();
    }
    else if (tgledit == 2)
    {
        cout << "masukan tanggal : ";
        cin >> tgl;
        cout << "masukan bulan : ";
        cin >> bln;
        cout << "masukan tahun : ";
        cin >> thn;
        edit_tanggal(o2.tgl_lahir, tgl, bln, thn);
        cout << endl;
        show_orang(o2);
        cout << endl;
        cout << "tekan enter "<<endl;
        getch();
        system("cls");
        mainmenu();
    }
    else
    {
        cout << "maaf inputan anda salah, silahkan ulangi lagi";
        rubah_tanggal();
    }
}

void tampil_data()
{
    cout << "data orang pertama"<<endl;
    show_orang(o1);
    cout << endl;
    cout << "data orang kedua"<<endl;
    show_orang(o2);
    cout << endl;
    cout<< "selisih hari : "<<selisih_hari(o1.tgl_lahir,o2.tgl_lahir)<<" hari"<<endl;
    cout<< endl;
    getch();
    system("cls");
    mainmenu();
}
