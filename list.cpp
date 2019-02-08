#include "list.h"

void createList(List &L)
{
    /**
    * FS : set first(L) with Null
    */
    //-------------your code here-------------
    L.first = NULL;
    //----------------------------------------
}

address allocate(infotype x)
{
    /**
    * FS : return new list element with info = x and next element is Null
    */
    //-------------your code here-------------
    address P = new elmlist;
    P->info = x;
    P->next = NULL;
    //----------------------------------------
    return P;
}

void deallocate(address &P)
{
    /**
    * FS : delete element pointed by P
    */
    //-------------your code here-------------
    delete P;
    //----------------------------------------
}

void insertFirst(List &L, address P)
{
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the first element in List L
    */
    //-------------your code here-------------
    P->next = L.first;
    L.first = P;
    //----------------------------------------
}

void insertLast(List &L, address P)
{
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the last element in List L
    */
    //-------------your code here-------------
    address Q = L.first;
    if (Q != NULL)
    {
        while (Q->next!=NULL)
        {
            Q = Q->next;
        }
        Q->next = P;
    }
    else
    {
        L.first = P;
    }
    //----------------------------------------

}

void insertAfter(List &L, address Prec, address P)
{
    /**
    * IS : Prec and P is not NULL
    * FS : element pointed by P is placed behind the element
    *      pointed by pointer Prec
    */
    //-------------your code here-------------
    if (Prec!=NULL && P!=NULL)
    {
        P->next = Prec->next;
        Prec->next = P;
    }
    //----------------------------------------

}

void deleteFirst(List &L, address &P)
{
    /**
    * IS : List L may be empty
    * FS : first element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
    if (L.first != NULL)
    {
        P = L.first;
        L.first = P->next;
        P->next = NULL;
    }
    //----------------------------------------
}

void deleteLast(List &L, address &P)
{
    /**
    * IS : List L may be empty
    * FS : last element in List L is removed and is pointed by P
    */
    //-------------your code here-------------

    address Q = L.first;
    if (Q!=NULL) {
        if (Q->next==NULL) {
            P = Q;
            L.first = NULL;
        } else {
            while (((Q->next)->next) != NULL) {
                Q = Q->next;
            }
            P = Q->next;
            Q->next = NULL;
        }
    }
    //----------------------------------------
}

void deleteAfter(List &L, address Prec, address &P)
{
    /**
    * IS : Prec is not NULL
    * FS : element which was before behind an element pointed by Prec
    *      is removed and pointed by pointer P
    */
    //-------------your code here-------------
    if (Prec!=NULL)
    {
        P = Prec->next;
        Prec->next = P->next;
        P->next = NULL;
    }
    //----------------------------------------
}


address findElm(List L, infotype x)
{
    /**
    * IS : List L may be empty
    * FS : returns element with info.ID = x.ID,
           return Null if such ID is not found
    */
    //-------------your code here-------------
    address P = L.first;
    while (P!=NULL)
    {
        if (P->info == x)
        {
            return P;
        }
        else
        {
            P = P->next;
        }
    }

    return NULL;
    //----------------------------------------
}




void printInfo(List L)
{
    /**
    * FS : view info of all element inside List L,
    *      call the view_data function from my_data.h to print the info
    */
    //-------------your code here-------------
    if (L.first!=NULL)
    {
        address P = L.first;
        while (P!=NULL)
        {
            cout<<P->info<<", ";
            P = P->next;
        }

    }
    else
    {
        cout<<"Kosong";
    }

    //----------------------------------------
    cout<<endl;
}
