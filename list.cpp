#include "list.h"

void createList(List &L) {
    /**
    * FS : set first(L) with Null
    */
    //-------------your code here-------------
    //cout<<"your code here"<<endl;
    L.first = NULL;


    //----------------------------------------
}

address allocate(infotype x) {
    /**
    * FS : return new list element with info = x and next element is Null
    */

    address P = new elmlist;
     P->info = x;
     P->next = NULL;
    return P;
    //-------------your code here-------------
   // cout<<"your code here"<<endl;

    //----------------------------------------

}

void deallocate(address &P) {
    /**
    * FS : delete element pointed by P
    */
    //-------------your code here-------------
//cout<<"your code here"<<endl;
    delete P;
    //----------------------------------------
}

void insertFirst(List &L, address P) {
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the first element in List L
    */
    //-------------your code here-------------
    //cout<<"your code here"<<endl;
    P->next = L.first;
    L.first = P;


    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the last element in List L
    */
    //-------------your code here-------------
    //cout<<"your code here"<<endl;
   if (L.first != NULL) {
    address Q = L.first;
    while (Q->next != NULL) {
        Q = Q->next;
    }
    Q->next = P;
   } else{
    insertFirst(L,P);
   }

    //----------------------------------------
}

address findElm(List L, infotype x) {
    /**
    * IS : List L may be empty
    * FS : returns element with info.ID = x.ID,
           return Null if such ID is not found
    */

    address P;
    //-------------your code here-------------
   // cout<<"your code here"<<endl;
   P = L.first;
    while (P != NULL){
        if (P->info == x) {
                return P;
        }else{
            P = P->next;
        }

    }


    //----------------------------------------
    return NULL;

}

void deleteFirst(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : first element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
    //cout<<"your code here"<<endl;
    P = first(L);
    first(L) = next(first(L));
    next(P) = NULL;


    //----------------------------------------
}

void deleteLast(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : last element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
   // cout<<"your code here"<<endl;
   if (next(first(L)) == NULL)
       {
           deleteFirst(L, P);
       }
    else
        {

   address Q = L.first;
   while (next(next(Q)) != NULL){
        Q = next(Q);
   }
   P = next(Q);
    next(Q) = NULL;
        }

    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : view info of all element inside List L,
    *      call the view_data function from my_data.h to print the info
    */
    //-------------your code here-------------
   // cout<<"your code here"<<endl;
   if (L.first != NULL)
    {
    address P= L.first;
    while (P != NULL)
     {
        cout<<P->info<<", ";
        P = P->next;
     }
    }
    else
    {
       cout<<"kosong"<<endl;
    }

    //----------------------------------------
    cout<<endl;

}


void insertAfter(List &L, address Prec, address P) {
    /**
    * IS : Prec and P is not NULL
    * FS : element pointed by P is placed behind the element
    *      pointed by pointer Prec
    */
    //-------------your code here-------------
    //cout<<"your code here"<<endl;
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
   // cout<<"your code here"<<endl;
    P = Prec->next;
    Prec->next = P->next;
    P->next = NULL;
    //----------------------------------------
}

