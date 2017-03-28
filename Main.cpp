/**
    KELAS     : IF 40-02
    KELOMPOK  : 8
    NAMA(NIM) : Andaresta Fauzan(1301164189), Mahendrawan Idris (1301164461), Ayu Wulandari (1301164104), M Hanur Yoga (1301164153)
**/

#include <iostream>
#include "buku.h"
#include "tanggal.h"

using namespace std;

buku daftar_buku[50];
int jumlah_buku = 0;

void main_menu();
void menu_create_buku();
void menu_pinjam();
void menu_kembali();
void menu_tampil();


int main()
{

    /**
    * fungsi main hanya memanggil main_menu
    * clean coding
    **/

    main_menu();


    return 0;
}


void main_menu()
{
    /**
    * fungsi untuk menampilkan main menu
    * dan menerima input pilihan menu dari user
    **/
    int pil;
    cout << "1 Input buku" << endl;
    cout << "2 Tampilkan Daftar Buku" <<endl;
    cout << "3 Pinjam Buku" <<endl;
    cout << "4 Kembalikan Buku" << endl;
    cout << "0 keluar" << endl;
    cout << "masukan pilihan :"<< " ";
    do
    {
        cin>>pil;
        switch(pil)
        {
        case 1:
            menu_create_buku();
            break;
        case 2:
            menu_tampil();
            break;
        case 3:
            menu_pinjam();
            break;
        case 4:
            menu_kembali();
            break;
        case 0:
            break;
        default:
            break;
        }
    }
    while (pil!=0);
}

void menu_create_buku()
{
    /**
    * fungsi meminta input judul dan pengarang dari user
    * fungsi membuat buku baru dan menyimpannya ke dalam array daftar_buku
    **/
    string judul,pengarang;
    cout << "Masukkan Judul Buku :" <<" ";
    cin>>judul;
    cout << "Masukan Pengarang Buku :" << " ";
    cin>>pengarang;
    daftar_buku[jumlah_buku++] = create_buku(judul, pengarang);
}

void menu_pinjam()
{
    /**
    * fungsi meminta input tanggal, bulan, tahun dari user
    * fungsi meminta input id buku berdasar urutan buku pada array daftar_buku
    * fungsi memanggil fungsi pinjam_buku
    **/
    int tgl,bln,thn;
    int id_buku;

    cout << " Masukkan Tanggal Peminjaman"<< " ";
    cin>>tgl;
    cout << endl;
    cout << " Masukan Bulan Peminjaman"<< " ";
    cin>>bln;
    cout << endl;
    cout << " Masukan Tahun Peminjaman"<< " ";
    cin>>thn;
    cout << endl;
    cout << " ID BUKU : ";
    cin>>id_buku;
    pinjam_buku(daftar_buku[id_buku],tgl,bln,thn);
}

void menu_kembali()
{
    /**
    * fungsi meminta input tanggal, bulan, tahun dari user
    * fungsi meminta input id buku berdasar urutan buku pada array daftar_buku
    * fungsi memanggil fungsi kembalikan_buku dan menyimpan selisih hari
    * fungsi menampilkan selisih hari pinjaman
    **/

    int tgl,bln,thn;
    int id_buku;
    int selisih;

    cout << " Masukkan Tanggal Pengembalian"<< " ";
    cin>>tgl;
    cout << endl;
    cout << " Masukan Bulan Pengembalian"<< " ";
    cin>>bln;
    cout << endl;
    cout << " masukan tahun pengembalian"<< " ";
    cin>>thn;
    cout << endl;
    cout << " ID buku : ";
    cin>>id_buku;
    cout << endl;
    selisih = kembalikan_buku(daftar_buku[id_buku],tgl,bln,thn);
    cout << " Selisih Hari :"<< " ";
    cout<<selisih;
}

void menu_tampil()
{
    /**
    * fungsi menampilkan daftar buku yang ada di dalam array daftar_buku
    **/
    buku b;
    for(int i=0; i<jumlah_buku; i++)
    {
        cout<<i;
        b = daftar_buku[i];
        tampil_buku(b);
        cout<<endl;
    }
}
