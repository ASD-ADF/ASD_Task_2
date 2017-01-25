#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include "buku.h"

buku daftar_buku[50];
int jumlah_buku = 0;

void main_menu();
void menu_create_buku();
void menu_pinjam();
void menu_kembali();
void menu_tampil();

#endif // MENU_H_INCLUDED
