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
    address Q,P;
    if ((first(L) == NULL) || (x < info(first(L)))) {
        P = allocate(x);
        insertFirst(L,P);
    } else if (findElm(L,x)==NULL){
        Q = first(L);
        while ((next(Q) != NULL) && (x > info(next(Q)))){
            Q = next(Q);
        if (next(Q) == NULL){
            P = allocate(x);
            insertLast(L,P);
        }else if (info(P) != info(Q)){
            P = allocate(x);
            insertAfter(L,Q,P);
            }
        }
    }

    //----------------------------------------
}
