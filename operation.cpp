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
    address P;
    address A;
    P = first(L);
    if (P == NULL || info(P) > x){
        insertFirst(L, allocate(x));
    } else if (findElm(L, x) == NULL){
        while(P != NULL && info(P) < x){
            A = P;
            P = next(P);
        }
        insertAfter(L, A, allocate(x));
    }
    //----------------------------------------
}
