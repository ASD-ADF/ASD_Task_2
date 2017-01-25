#include "aplikasi.h"

void main_menu(){
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
    string judul,pengarang;
    cin>>judul;
    cin>>pengarang;
    daftar_buku[jumlah_buku++] = create_buku(judul, pengarang);
}

void menu_pinjam(){
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
    buku b;
    for(int i=0; i<jumlah_buku; i++){
        cout<<i;
        b = daftar_buku[i];
        tampil_buku(b);
        cout<<endl;
    }
}
