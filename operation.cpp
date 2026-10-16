#include "list.h"
#include "operation.h"


void insert_sorted(List &L, infotype x) {
    address q = L.first, prev = nullptr;

    while (q != nullptr && q->info < x) {
        prev = q;
        q = q->next;
    }

    // jika sudah ada, jangan dimasukkan
    if (q != nullptr && q->info == x) {
        return;
    }

    address P = allocate(x);
    if (prev == nullptr) {
        insertFirst(L, P);
    } else {
        insertAfter(L, prev, P);
    }
}
