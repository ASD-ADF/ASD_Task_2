/**
    KELAS     : IF 40-02
    KELOMPOK  : 9
    NAMA(NIM) : [HANAFI ABDULLAH GUSMAN][1301160362] , [MUCHAMMAD FAJAR ALIF][1301164274] , [ISNAN AKBAR IBRAHIM][1301164490] , [ANDINI SALIMAH][1301164080]
**/

#include <iostream>
#include <stdlib.h>
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
    cout << "Menu Utama" << endl;
    cout << "1. Input Buku \n2. Tampilkan Daftar Buku \n3. Pinjam Buku \n4. Pengembalian Buku \n" << endl;
    cout << "Masukkan Pilihan : ";
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
    cout << "Judul Buku : ";
    cin>>judul;
    cout << "Pengarang Buku : ";
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
    cout << "Tanggal Pinjam : ";
    cin>>tgl;
    cout << "Bulan Pinjam : ";
    cin>>bln;
    cout << "Tahun Pinjam : ";
    cin>>thn;
    cout << "ID Buku : ";
    cin>>id_buku;
    pinjam_buku(daftar_buku[id_buku],tgl,bln,thn);
    main_menu();
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

    cout << "Masukkan Tanggal Kembali : ";
    cin>>tgl;
    cout << "Masukkan Bulan Kembali : ";
    cin>>bln;
    cout << "Masukkan Tahun Kembali : ";
    cin>>thn;
    cout << "Masukkan ID Buku : ";
    cin>>id_buku;
    selisih = kembalikan_buku(daftar_buku[id_buku],tgl,bln,thn);
    cout<< "Lama Meminjam Buku " << selisih << " Hari" << endl;
    main_menu();
}

void menu_tampil() {
    /**
    * fungsi menampilkan daftar buku yang ada di dalam array daftar_buku
    **/
    buku b;
    for(int i=0; i<jumlah_buku; i++) {
        cout << "   ID Buku : " << i << endl;
        b = daftar_buku[i];
        tampil_buku(b);
        cout<<endl;
    }
    main_menu();
}
