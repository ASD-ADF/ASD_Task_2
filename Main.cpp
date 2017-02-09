/**
    KELAS     :IF 40-02
    KELOMPOK  :10
    NAMA(NIM) : [Ranggha Adytia][1301164017] , [Javiar Fasyah][1301164477] , [Rani Sari Murti][1301160544], [Dianita Yustika Sari][1301164349] , [Try Arie Rahmat Insani][1301164513]
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
    do {
        cout << " Daftar Menu"<<endl;
        cout << "1. Create Buku"<<endl;
        cout << "2. Tampilkan daftar buku"<<endl;
        cout << "3. Pinjam buku"<<endl;
        cout << "4. Kembalikan buku"<<endl;
        cout << "0. Keluar"<<endl;
        cout<<"Masukkan pilihan : " << " ";
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
    while(pil!=0);

}

void menu_create_buku()
{
    /**
    * fungsi meminta input judul dan pengarang dari user
    * fungsi membuat buku baru dan menyimpannya ke dalam array daftar_buku
    **/
    string judul,pengarang;
    cout<<"Masukan Judul Buku : "<<" ";;
    cin>>judul;
    cout<<"Masukan Nama Pengarang : "<< " ";
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

    cout<<"Masukan Tanggal : ";
    cin>>tgl;
    cout<<"Masukan Bulan : ";
    cin>>bln;
    cout<<"Masukan Tahun : ";
    cin>>thn;
    cout<<"Masukan ID Buku : ";
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
    cout<<"Masukan Tanggal Kembali Buku : ";
    cin>>tgl;
    cout << endl;

    cout<<"Masukan Bulan Kembali Buku : ";
    cin>>bln;
    cout << endl;

    cout<<"Masukan Tahun Kembali Buku : ";
    cin>>thn;

    cout << endl;
    cout<<"Masukan ID Buku : ";
    cin>>id_buku;

    cout << endl;
    selisih = kembalikan_buku(daftar_buku[id_buku],tgl,bln,thn);
    cout << " selisih hari pengammbalian buku :"<< " ";
    cout<<selisih;
}

void menu_tampil()
{
    /**
    * fungsi menampilkan daftar buku yang ada di dalam array daftar_buku
    **/
    buku b;
    for(int i=0; i<jumlah_buku; i++) {
        cout<<i;
        b = daftar_buku[i];
        tampil_buku(b);
        cout<<endl;
    }
}
