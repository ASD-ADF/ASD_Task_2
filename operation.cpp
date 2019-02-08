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
    address Prec = first(L);
    address P = allocate(x);
    if(Prec == NULL)
    {
        insertFirst(L, P);
    }
    else if (findElm(L, x) == NULL)
    {
        if(info(Prec) > info(P))
        {
            insertFirst(L, P);
        }
        else if (next(Prec) == NULL)
        {
            insertLast(L, P);
        }
        else
        {
            while((next(Prec) != NULL) && (info(Prec) < info(P)))
            {
                Prec = next(Prec);
            }
            insertAfter(L, Prec, P);
        }
    }



    //----------------------------------------
}
