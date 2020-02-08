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
    address P, Prec;
    P=allocate(x);
    if (first(L)==NULL){
        insertFirst(L, P);
    } else{
        Prec=first(L);
        while (next(Prec) != NULL && x > info(Prec)){
            Prec=next(Prec);
        }
        if (x!=info(Prec)){
            if(x>info(Prec)){
                insertLast(L, P);
            } else if(x<info(Prec)){
                insertFirst(L, P);
            } else{
                insertAfter(L, Prec, P);
            }
        }
    }
    //----------------------------------------
}
