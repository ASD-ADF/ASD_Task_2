#include "list.h"

void createList(List &L)
{
    /**
    * FS : set first(L) with Null
    */
    //-------------your code here-------------
    L.first = nullptr;


    //----------------------------------------
}

address allocate(infotype x)
{
    /**
    * FS : return new list element with info = x and next element is Null
    */

    address P = new elmlist;
    P -> info = x;
    P -> next = nullptr;
    return P;
}

void deallocate(address &P)
{
    delete P;
    P = nullptr;
}

void insertFirst(List &L, address P)
{
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the first element in List L
    */

    P -> next = L.first;
    L.first = P;
}

void insertLast(List &L, address P)
{
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the last element in List L
    */

    address Q;
    if (L.first == nullptr)
    {
        L.first = P;
    }
    else
    {
        Q = L.first;
        while (Q -> next != nullptr)
        {
            Q = Q -> next;
        }
        Q -> next = P;
    }
}

address findElm(List L, infotype x)
{
    address P;
    P = first(L);
    while (P != nullptr && info(P) != x)
    {
        P = next(P);
    }
    return P;
}
void deleteFirst(List &L, address &P)
{
    /**
    * IS : List L may be empty
    * FS : first element in List L is removed and is pointed by P
    */
    if (first(L) != nullptr)
    {
        P = first(L);
        first(L) = next(first(L));
        next(P) = nullptr;
    }
    else
    {
        P = nullptr;
    }
}
void deleteLast(List &L, address &P)
{
    /**
    * IS : List L may be empty
    * FS : last element in List L is removed and is pointed by P
    */
    if (first(L) != nullptr)
    {
        if (next(first(L)) == nullptr)
        {
            P = first(L);
            first(L) = nullptr;
        }
        else
        {
            address Q = first(L);
            while (next(next(Q)) != nullptr)
            {
                Q = next(Q);
            }
            P = next(Q);
            next(Q) = nullptr;
        }
    }
    else
    {
        P = nullptr;
    }
}

void printInfo(List L)
{
    address P;
    P = first(L);
    while (P != nullptr)
    {
        cout << info(P) << ", ";
        P = next(P);
    }
    cout << endl;
}
void insertAfter(List &L, address Prec, address P)
{
    /**
    * IS : Prec and P is not NULL
    * FS : element pointed by P is placed behind the element
    *      pointed by pointer Prec
    */
    if (Prec != nullptr)
    {
        next(P) = next(Prec);
        next(Prec) = P;
    }
}
void deleteAfter(List &L, address Prec, address &P)
{
    /**
    * IS : Prec is not NULL
    * FS : element which was before behind an element pointed by Prec
    *      is removed and pointed by pointer P
    */
    //-------------your code here-------------
    P = Prec->next;
    Prec->next = P->next;
    P->next = nullptr;


    //----------------------------------------
}

