/**
    KELAS     : IF-40-02
    KELOMPOK  : 1 (Satu)
    NAMA(NIM) : Fuad Zauqi Nur (1301164392), Indah Ayu Nur Fauziah (1301164004), Refin Heryanto (1301164324), Mohammad Izzauhaq Huda (1301160565)
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
void menu_cekstatus ();

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
    cout << "Menu Utama Perpustakaan " << endl;
    cout << "\n1. Create Buku" << endl;

    cout << "\n2. List Buku" << endl;

    cout << "\n3. Pinjam Buku" << endl;

    cout << "\n4. Kembalikan Buku" << endl;

    cout << "\n5. Cek status (fungsi tambahan)" << endl;
    int pil;
    do {
        cout << "\n\nMasukkan Pilihan : ";
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
        case 5:
            menu_cekstatus();
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
    cout << "\nmasukkan judul buku : ";
    cin>>judul;
    cout << "masukkan pengarang buku : ";
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

    cout << "masukkan id buku : ";
    cin>>id_buku;
        cout << "\nmasukkan tanggal pinjam buku : ";
        cin>>tgl;
        cout << "\nmasukkan bulan pinjam buku : ";
        cin>>bln;
        cout << "\nmasukkan tahun pinjam buku : ";
        cin>>thn;
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

    cout << "masukkan id buku : ";
    cin>>id_buku;
    cout << "\nmasukkan tanggal kembali buku : ";
        cin>>tgl;
        cout << "\nmasukkan bulan kembali buku : ";
        cin>>bln;
        cout << "\nmasukkan tahun kembali buku : ";
        cin>>thn;

    selisih = kembalikan_buku(daftar_buku[id_buku],tgl,bln,thn);
    cout << "\nLama Minjem " << selisih << " Hari" << endl;
}

void menu_tampil() {
    /**
    * fungsi menampilkan daftar buku yang ada di dalam array daftar_buku
    **/
    buku b;
    for(int i=0; i<jumlah_buku; i++) {
        cout <<"\nId Buku : " << i << endl;
        b = daftar_buku[i];
        tampil_buku(b);
        cout<<endl;
    }
}
//f=FUNGSI TAMBAHAN
void menu_cekstatus () {
    buku b;
    int id_buku;

    cout<<"masukan id yang ingin di cek :";
    cin>>id_buku;
    if (daftar_buku[id_buku].status_dipinjam == false) {
    cout<<"Tersedia dipinjam";}
    else {
        cout<<"Tidak tersedia dipinjam";
    }

}
