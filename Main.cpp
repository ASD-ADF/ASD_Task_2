/**
    KELAS     : IF 40-02
    KELOMPOK  : Kelompok 4
    NAMA(NIM) : [Joel Andrew][1301164165Lucky Olivera][1301164055] , [Rangga Dwi A][1301164030] , [Diah Hevyka M][1301164336]
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
void buku_dipinjam();

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
        cout<<"Menu:"<<endl;
        cout<<"1. tambah buku"<<endl;
        cout<<"2. List buku"<<endl;
        cout<<"3. Pinjam buku"<<endl;
        cout<<"4. Kembalikan buku"<<endl;
        cout<<"5. Banyak buku yang dipinjam"<<endl;
        cout<<"pilihan:";
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
                 buku_dipinjam();
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
    cout<< "Masukan judul : ";
    cin>>judul;
    cout<< "Nama pengarang: ";
    cin>>pengarang;
    cout<< "\n\n";
    daftar_buku[jumlah_buku++] = create_buku(judul, pengarang);
}

void menu_pinjam() {
    /**
    * fungsi meminta input tanggal, bulan, tahun dari user
    * fungsi meminta input id buku berdasar urutan buku pada array daftar_buku
    * fungsi memanggil fungsi pinjam_buku
    **/
    int tgl1,bln1,thn1;
    int id_buku;

    cout<< "Masukan tanggal : ";
    cin>>tgl1;
    cout<< "Masukan Bulan : ";
    cin>>bln1;
    cout<< "Masukan Tahun : ";
    cin>>thn1;
    cout<< "Id Buku : ";
    cin>>id_buku;
    cout<< "Buku telah dipinjam";
    cout<< "\n\n";
    pinjam_buku(daftar_buku[id_buku],tgl1,bln1,thn1);
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

    cout<<" Tanggal pengembalian : ";
    cin>>tgl;
    cout<<" Bulan pengembalian : ";
    cin>>bln;
    cout<<" Tahun pengembalian : ";
    cin>>thn;
    cout<<" Id Buku : ";
    cin>>id_buku;
    selisih = kembalikan_buku(daftar_buku[id_buku],tgl,bln,thn);
    cout<< "Lama meminjam buku "<<selisih<< " Hari"<<endl;
    cout<< "\n\n";
}

void menu_tampil() {
    /**
    * fungsi menampilkan daftar buku yang ada di dalam array daftar_buku
    **/
    buku b;
    for(int i=0; i<jumlah_buku; i++) {
        cout<< " Id buku : "<<i;
        b = daftar_buku[i];
        tampil_buku(b);
        cout<<endl;
    }
}

void buku_dipinjam()
{
    int a=0;
    //int c=0;
    buku b;
    for (int i=0; i<jumlah_buku; i++)
    {
        b=daftar_buku[i];
        if (b.tersedia==false)
        {
            a++;
        }
        else
        {
            //c++;
        }
    }
    cout<<"Banyak buku yang dipinjam: "<<a<<endl;

}
