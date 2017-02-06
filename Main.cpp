/**
    KELAS     : IF 40.02
    KELOMPOK  : 9
    NAMA(NIM) : Andini Salimah (1301164080), Fajar Alif (1301164274), Isnan Akbar (1301164490), Hanafi Abdullah Gusman (1301160362)
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
    int pil;
    do {
        cout << " Daftar Menu"<<endl;
        cout << "1. Create Buku"<<endl;
        cout << "2. Tampilkan daftar buku"<<endl;
        cout << "3. Pinjam buku"<<endl;
        cout << "4. Kembalikan buku"<<endl;
        cout << "5. Keluar"<<endl;
        cout<<"Masukkan pilihan : "<<endl;
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
    } while (pil != 0);
}

void menu_create_buku() {
    /**
    * fungsi meminta input judul dan pengarang dari user
    * fungsi membuat buku baru dan menyimpannya ke dalam array daftar_buku
    **/
    string judul,pengarang;
    cout << "Masukkan judul buku : ";
    cin>>judul;
    cout <<"Masukkan nama pengarang : ";
    cin>>pengarang;
    daftar_buku[jumlah_buku++] = create_buku(judul, pengarang);
}

void menu_pinjam() {
    /**
    * fungsi meminta input tanggal, bulan, tahun dari user
    * fungsi meminta input id buku berdasar urutan buku pada array daftar_buku
    * fungsi memanggil fungsi pinjam_buku
    **/
    int tgl,bln,thn;
    int id_buku;

    cout<<" Masukkan Tanggal : ";
    cin>>tgl;
    cout<<" Masukkan Bulan : ";
    cin>>bln;
    cout<<" Masukkan Tahun : ";
    cin>>thn;
    cout<<" Masukkan ID Buku : ";
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

    cout<<" Masukkan tanggal kembali buku : ";
    cin>>tgl;
    cout<<" Masukkan bulan kembali buku : ";
    cin>>bln;
    cout<<" Masukkan tahun kembali buku : ";
    cin>>thn;
    cout<<" Masukkan ID buku: ";
    cin>>id_buku;
    selisih = kembalikan_buku(daftar_buku[id_buku],tgl,bln,thn);
    cout<< "Lama Meminjam : " <<selisih << " Hari";
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
