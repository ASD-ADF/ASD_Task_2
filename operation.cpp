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
    address P = allocate(x);
    if (first(L) == NULL)
    {
        insertFirst(L, P);
    }
    else
    {
        insertFirst(L,P);
        address Q, R, temp;
        Q = first(L);
        while (Q != NULL && next(Q) != NULL)
        {
            R = Q;
            while (next(R) != NULL)
            {
                if (info(Q) == info(next(R)))
                {
                    temp = next(R);
                    next(R) = next(next(R));
                    delete temp;
                }
                else
                {
                    R = next(R);
                }
            }
            Q = next(Q);
        }
    }

    List L2;
    createList(L2);
    while (first(L) != NULL)
    {
        address Max = first(L);
        address P = next(Max);
        while (P != NULL)
        {
            if (info(P) > info(Max))
            {
                Max = P;
            }
            P = next(P);
        }
        if (Max == first(L))
        {
            deleteFirst(L, P);
        }
        else if (next(Max) == NULL)
        {
            deleteLast(L, P);
        }
        else
        {
            address Prec = first(L);
            while (next(Prec) != Max)
            {
                Prec = next(Prec);
            }
            deleteAfter(L, Prec, P);
        }
        insertFirst(L2, P);
    }
    L = L2;
    //----------------------------------------
}
