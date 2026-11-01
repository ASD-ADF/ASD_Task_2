#include "list.h"
#include "operation.h"


void insert_sorted(List &L, infotype x) {
    /**
    * IS : List may be empty
    * PR : insert an infotype x into an already sorted List L
    *      so that the elements inside List L is still sorted in ascending order,
    *      procedure must also check if such number is already exists (No Duplicate number),
    *      allocate new element only if the conditions are met
    * FS : elements in List L sorted in ascending order, x is inside List L
    */

    //-------------your code here-------------
    address q = L.first;
    address Prec = nullptr;

    while (q != nullptr && q->info < x) {
        Prec = q;
        q = q->next;
    }

    if (q == nullptr || q->info != x) {
        address P = allocate(x);
        if (Prec == nullptr) {
            insertFirst(L, P);      
        } else {
            insertAfter(L, Prec, P);   
        }
    }
    //----------------------------------------
}
