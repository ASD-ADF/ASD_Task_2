#include "list.h"

void createList(List &L)
{
    /**
    * FS : set first(L) with Null
    */
    //-------------your code here-------------
//    cout<<"your code here"<<endl;
    first(L) = NULL;
    //----------------------------------------
}

address allocate(infotype x)
{
    /**
    * FS : return new list element with info = x and next element is Null
    */

    address P = NULL;
    //-------------your code here-------------
//    cout<<"your code here"<<endl;
    P = new elmlist;
    info(P) = x;
    next(P) = NULL;

    //----------------------------------------
    return P;
}
//
void deallocate(address &P)
{
    /**
    * FS : delete element pointed by P
    */
    //-------------your code here-------------
    delete P;
    //    cout<<"your code here"<<endl;


    //----------------------------------------
}
//
void insertFirst(List &L, address P)
{
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the first element in List L
    */
    //-------------your code here-------------
    next(P) = first(L);
    first(L)= P;
//    cout<<"your code here"<<endl;
    //----------------------------------------
}
//
void insertLast(List &L, address P)
{
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the last element in List L
    */
    //-------------your code here-------------
    address Q = first(L);
    if (Q == NULL)
    {
        P = first(L);
    }
    else
    {
        while (next(Q)!=NULL)
        {
            Q = next(Q);
        }
        next(Q) = P;
    }
//    cout<<"your code here"<<endl;


    //----------------------------------------
}
//
address findElm(List L, infotype x)
{
    /**
    * IS : List L may be empty
    * FS : returns element with info.ID = x.ID,
           return Null if such ID is not found
    */

    address P;
    //-------------your code here-------------
    P = first(L);
    while (P != NULL)
    {
        if (info(P) == x)
        {
            return P;
        }
        P = next(P);
    }
//    cout<<"your code here"<<endl;
    //----------------------------------------
    return P;
}
//
void deleteFirst(List &L, address &P)
{
    /**
    * IS : List L may be empty
    * FS : first element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
    if (first(L)!= NULL)
    {
        P = first(L);
        first(L) = next(P);
        next(P)= NULL;
    }
//    cout<<"your code here"<<endl;
    //----------------------------------------
}
//
void deleteLast(List &L, address &P)
{
    /**
    * IS : List L may be empty
    * FS : last element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
//    cout<<"your code here"<<endl;
    address Q = first(L);
    if (Q != NULL)
    {
        if(next(Q)== NULL)
        {
            P = Q;
            first(L) = NULL;
        }
        else
        {
            while(next(next(Q)) != NULL)
            {
                Q = next(Q);
            }
            P = next(Q);
            next(Q) = NULL;
        }
    }

    //----------------------------------------
}
//
void printInfo(List L)
{
    /**
    * FS : view info of all element inside List L,
    *      call the view_data function from my_data.h to print the info
    */
    //-------------your code here-------------
//    cout<<"your code here"<<endl;
    address P;
    if (first(L)!=NULL)
    {
        P = first(L);
        while (P != NULL)
        {
            cout << info(P)<< ", ";
            P = next(P);
        }
    }
    else
    {
        cout << "[empty]";
    }
    //----------------------------------------
    cout<<endl;
//
}
void insertAfter(List &L, address Prec, address P)
{
    /**
    * IS : Prec and P is not NULL
    * FS : element pointed by P is placed behind the element
    *      pointed by pointer Prec
    */
    //-------------your code here-------------

    next(P) = next(Prec);
    next(Prec) = P;
//    cout<<"your code here"<<endl;
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
//    cout<<"your code here"<<endl;
    P = next(Prec);
    next(Prec)=next(P);
    next(P)=NULL;
    //----------------------------------------
}

