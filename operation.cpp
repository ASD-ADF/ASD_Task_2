#include "list.h"
#include "operation.h"

 void insert_sorted(List &L, infotype x) {

    // Cek apakah angka sudah ada
    if (findElm(L, x) != nullptr) {
        return;
    }

    // Allocate node baru
    address P = allocate(x);

    // Jika list kosong atau x lebih kecil dari elemen pertama
    if (L.first == nullptr || x < L.first->info) {
        insertFirst(L, P);
    }
    else {
        address Q = L.first;

        // Cari posisi yang tepat
        while (Q->next != nullptr && Q->next->info < x) {
            Q = Q->next;
        }

        // Masukkan setelah Q
        insertAfter(L, Q, P);
    }
}
