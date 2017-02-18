/**
    KELAS     : IF 40 02
    KELOMPOK  : 2
    NAMA(NIM) : [Muh. Hatta Eka Putra][1301160444] , [Rifki Mifathur Sutomo][1301164225] , [Fahmi Hidayat][1301164312] , [Elsya Putri Sutomo][1301160201]
**/

#include <iostream>
#include "buku.h"
#include "tanggal.h"
//#include "aplikasi.h"

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

    do
    {
        cout <<"   MENU "<<endl<<endl;
        cout <<" 1. Masukkan Buku"<<endl;
        cout <<" 2. Tampil Buku"<<endl;
        cout <<" 3. Pinjam Buku"<<endl;
        cout <<" 4. Kembalikan Buku"<<endl;
        cout <<" 0. Keluar"<<endl<<endl;
        cout <<" > Pilih : ";
        cin>>pil;
        cout<<endl;
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

    cout <<endl;
    cout <<" > Judul Buku : ";
    cin >>judul;
    cout <<endl;
    cout <<" > Nama Pengarang : ";
    cin >>pengarang;
    cout <<endl;
    daftar_buku[jumlah_buku++] = create_buku(judul, pengarang);

    main_menu();
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

    cout <<" > Tanggal : ";
    cin>>tgl;
    cout <<endl;
    cout <<" > Bulan : ";
    cin>>bln;
    cout <<endl;
    cout <<" > Tahun : ";
    cin>>thn;
    cout <<endl;
    cout <<" > Id Buku : ";
    cin>>id_buku;
    cout <<endl;


    pinjam_buku(daftar_buku[id_buku],tgl,bln,thn);


    main_menu();
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

    cout <<" > Tanggal : ";
    cin>>tgl;
    cout <<endl;
    cout <<" > Bulan : ";
    cin>>bln;
    cout <<endl;
    cout <<" > Tahun : ";
    cin>>thn;
    cout <<endl;
    cout <<" > Id Buku : ";
    cin>>id_buku;
    selisih = kembalikan_buku(daftar_buku[id_buku],tgl,bln,thn);
    if (selisih != -1)
    {
        cout<<" > Lama Peminjaman : "<<selisih<<endl<<endl;
    }
    else
    {
        cout<<" > Mohon Maaf, Tanggal Yang Anda Masukkan Salah"<<endl<<endl;;
    }
    main_menu();
}

void menu_tampil()
{
    /**
    * fungsi menampilkan daftar buku yang ada di dalam array daftar_buku
    **/
    buku b;
    for(int i=0; i<jumlah_buku; i++)
    {
        cout<<"  > Id Buku : "<<i;
        b = daftar_buku[i];
        tampil_buku(b);
        cout<<endl<<endl;
    }
    main_menu();
}
