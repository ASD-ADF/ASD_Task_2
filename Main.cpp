/**
    KELAS     : IF 40-02
    KELOMPOK  : 7
    NAMA(NIM) : [Ery Defriyanto.S][1301164129] , [Seiba Shonia][1301164249] , [Wira Aditama][1301164068] , [Riandi Kartiko][1301164300]
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


int main() {

    /**
    * fungsi main hanya memanggil main_menu
    * clean coding
    **/

    main_menu();


    return 0;
}


void main_menu() {
    /**
    * fungsi untuk menampilkan main menu
    * dan menerima input pilihan menu dari user
    **/

    cout<<"-----MAIN MENU-----"<<endl;
    cout<<"(1.) Input Data Buku"<<endl;
    cout<<"(2.) Lihat Daftar Buku"<<endl;
    cout<<"(3.) Meminjam Buku"<<endl;
    cout<<"(4.) Mengembalikan Buku"<<endl;
    cout<<"(0.) EXIT"<<endl;

    int pil;
    do {
        cin>>pil;
        switch(pil) {
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
    } while (pil!=0);
}

void menu_create_buku() {
    /**
    * fungsi meminta input judul dan pengarang dari user
    * fungsi membuat buku baru dan menyimpannya ke dalam array daftar_buku
    **/
    string judul,pengarang;
    cout<<"Judul Buku : ";
    cin>>judul;
    cout<<"Pengarang : ";
    cin>>pengarang;
    daftar_buku[jumlah_buku++] = create_buku(judul, pengarang);
    main_menu();
}


void menu_pinjam() {
    /**
    * fungsi meminta input tanggal, bulan, tahun dari user
    * fungsi meminta input id buku berdasar urutan buku pada array daftar_buku
    * fungsi memanggil fungsi pinjam_buku
    **/
    int tgl,bln,thn;
    int id_buku;

    cout<<"Input Tanggal Peminjaman"<<endl;
    cout<<endl;
    cout<<"Tanggal  : "<<endl;
    cin>>tgl;
    cout<<"Bulan    : "<<endl;
    cin>>bln;
    cout<<"Tahun    : "<<endl;
    cin>>thn;
    cout<<"ID BUKU  : "<<endl;
    cin>>id_buku;
    pinjam_buku(daftar_buku[id_buku],tgl,bln,thn);
}

void menu_kembali() {
    /**
    * fungsi meminta input tanggal, bulan, tahun dari user
    * fungsi meminta input id buku berdasar urutan buku pada array daftar_buku
    * fungsi memanggil fungsi kembalikan_buku dan menyimpan selisih hari
    * fungsi menampilkan selisih hari pinjaman
    **/

    int tgl,bln,thn;
    int id_buku;
    int selisih;

    cout<<"Input Tanggal Kembali"<<endl;
    cout<<endl;
    cout<<"Tanggal  : "<<endl;
    cin>>tgl;
    cout<<"Bulan    : "<<endl;
    cin>>bln;
    cout<<"Tahun    : "<<endl;
    cin>>thn;
    cout<<"ID Buku  : "<<endl;
    cin>>id_buku;
    selisih = kembalikan_buku(daftar_buku[id_buku],tgl,bln,thn);
    cout<<selisih;
}

void menu_tampil() {
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
