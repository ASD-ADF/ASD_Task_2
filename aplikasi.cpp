#include "aplikasi.h"

void main_menu(){
    /**
    * fungsi untuk menampilkan main menu
    * dan menerima input pilihan menu dari user
    **/
    int pil;
    do{
        cin>>pil;
        switch(pil){
            case 1: menu_create_buku();break;
            case 2: menu_tampil();break;
            case 3: menu_pinjam();break;
            case 4: menu_kembali();break;
            case 0: break;
            default: break;
        }
    }while pil!=0;
}

void menu_create_buku(){
    /**
    * fungsi meminta input judul dan pengarang dari user
    * fungsi membuat buku baru dan menyimpannya ke dalam array daftar_buku
    **/
    string judul,pengarang;
    cin>>judul;
    cin>>pengarang;
    daftar_buku[jumlah_buku++] = create_buku(judul, pengarang);
}

void menu_pinjam(){
    /**
    * fungsi meminta input tanggal, bulan, tahun dari user
    * fungsi meminta input id buku berdasar urutan buku pada array daftar_buku
    * fungsi memanggil fungsi pinjam_buku
    **/
    int tgl,bln,thn;
    int id_buku;
    buku b;

    cin>>tgl;
    cin>>bln;
    cin>>thn;
    cin>>id_buku;
    b = daftar_buku[id_buku];
    pinjam_buku(b,tgl,bln,thn);
}

void menu_kembali(){
    /**
    * fungsi meminta input tanggal, bulan, tahun dari user
    * fungsi meminta input id buku berdasar urutan buku pada array daftar_buku
    * fungsi memanggil fungsi kembalikan_buku dan menyimpan selisih hari
    * fungsi menampilkan selisih hari pinjaman
    **/

    int tgl,bln,thn;
    int id_buku;
    buku b;
    int selisih;

    cin>>tgl;
    cin>>bln;
    cin>>thn;
    cin>>id_buku;
    b = daftar_buku[id_buku];
    selisih = kembalikan_buku(b,tgl,bln,thn);
    cout<<selisih;
}

void menu_tampil(){
    /**
    * fungsi menampilkan daftar buku yang ada di dalam array daftar_buku
    **/
    buku b;
    for(int i=0; i<jumlah_buku; i++){
        cout<<i;
        b = daftar_buku[i];
        tampil_buku(b);
        cout<<endl;
    }
}
