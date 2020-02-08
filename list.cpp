#include "list.h"

void createList(List &L) {
    first(L) = NULL;
}

address allocate(infotype x) {
    address P = NULL;
    P = new elmlist;
    info(P) = x;
    next(P) = NULL;

    return P;
}

void deallocate(address &P) {
    delete P;
}

void insertFirst(List &L, address P) {
    next(P) = first(L);
    first(L) = P;
}

void insertLast(List &L, address P) {
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the last element in List L
    */
    address Q = first(L);
    while (next(Q) != NULL)
    {
        Q = next(Q);
    }
    next(Q)=P;
}

address findElm(List L, infotype x) {
    /**
    * IS : List L may be empty
    * FS : returns element with info.ID = x.ID,
           return Null if such ID is not found
    */

    address P;
    //-------------your code here-------------
    P = first(L);
    while ((P != NULL) && (x != info(P)))
    {
        P = next(P);
    }
    //----------------------------------------
    return P;
}

void deleteFirst(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : first element in List L is removed and is pointed by P
    */
    if (first(L) != NULL) {
        P = first(L);
        first(L) = next(P);
        next(P) = NULL;
    }
}

void deleteLast(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : last element in List L is removed and is pointed by P
    */
    address Q;
    Q = first(L);
    if (next(Q) == NULL)
        first(L)=NULL;
    else
    {
        while (next(next(Q)) != NULL)
        {
            Q = next(Q);
        }
        P = next(Q);
        next(Q) = NULL;
    }
}

void printInfo(List L) {
    /**
    * FS : view info of all element inside List L,
    *      call the view_data function from my_data.h to print the info
    */
    address p;
    p = first(L);
    while (p != NULL)
    {
       cout<<info(p)<<" - " ;
       p =  next(p);
    }
    cout<<endl;
}


void insertAfter(List &L, address Prec, address P) {
    /**
    * IS : Prec and P is not NULL
    * FS : element pointed by P is placed behind the element
    *      pointed by pointer Prec
    */
    //-------------your code here-------------
    next(P) = next(Prec);
    next(Prec) = P;
    //----------------------------------------

}
void deleteAfter(List &L, address Prec, address &P) {
    /**
    * IS : Prec is not NULL
    * FS : element which was before behind an element pointed by Prec
    *      is removed and pointed by pointer P
    */
    //-------------your code here-------------
    P = next(Prec);
    next(Prec) = next(P);
    next(P) = NULL;
    //----------------------------------------
}

