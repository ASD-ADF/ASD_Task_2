#include "list.h"
#include "operation.h"


void insert_sorted(List &L, infotype x) {
    if (findElm(L, x) != NULL) {
        return;
    }
 
    address P = allocate(x);
 
    if (first(L) == NULL || x < info(first(L))) {
        insertFirst(L, P);
    } else {
        address Q = first(L);
        while (next(Q) != NULL && info(next(Q)) < x) {
            Q = next(Q);
        }
        insertAfter(L, Q, P);
    }
}
