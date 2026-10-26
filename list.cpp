#include "list.h"

void createList(List &L) {
    /**
    * FS : set first(L) with Null
    */
    //-------------your code here-------------
    L.first = nullptr;


    //----------------------------------------
}

address allocate(infotype x) {
    /**
    * FS : return new list element with info = x and next element is Null
    */

    address p = nullptr;
    //-------------your code here-------------
    p = new elmlist;
    p->info = x;
    p->next = nullptr;
    //----------------------------------------
    return p;
}

void deallocate(address &P) {
    /**
    * FS : delete element pointed by P
    */
    //-------------your code here-------------

    delete P;
    P = nullptr;

    //----------------------------------------
}

void insertFirst(List &L, address P) {
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the first element in List L
    */
    //-------------your code here-------------
    if (L.first == nullptr){
        L.first = P;
    } else {
        P->next = L.first;
        L.first = P;
    } 
    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the last element in List L
    */
    //-------------your code here-------------
    address q ;
    if (L.first == nullptr){
        L.first = P;
    } else {
        q = L.first;
        while (q->next != nullptr){
            q = q->next;
        }
        q->next = P;
    }
    //----------------------------------------
}

address findElm(List L, infotype x) {
    /**
    * IS : List L may be empty
    * FS : returns element with info.ID = x.ID,
           return Null if such ID is not found
    */


    //-------------your code here-------------
    address q;
    q=L.first;
    while (q != nullptr){
        if (q->info == x){
            return q;
        }
        q = q->next;
    }
    return nullptr;

    //----------------------------------------
}

void deleteFirst(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : first element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
    if (L.first == nullptr) {
        P = nullptr;
    } else {
    P = L.first;
    L.first = P->next;
    P = nullptr;
    }
    //----------------------------------------
}

void deleteLast(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : last element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
     address q = L.first;
    if (L.first == nullptr) {
        P = nullptr;
    } else if (L.first->next == nullptr) {
        P = L.first;
        L.first = nullptr;
    } else {
        while (q->next->next != nullptr){
            q = q->next;
        }
    P = q->next;
    q->next = nullptr;
    }
    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : view info of all element inside List L,
    *      call the view_data function from my_data.h to print the info
    */
    //-------------your code here-------------
    address p = L.first;
    if (p == nullptr){
        cout<<"List Kosong"<<endl;
    }
    while (p != nullptr){
        cout << p->info << " ";
        p = p->next;
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
    if (Prec != nullptr){
    P = Prec->next;
    Prec->next = P->next;
    }
    //----------------------------------------

}
void deleteAfter(List &L, address Prec, address &P) {
    /**
    * IS : Prec is not NULL
    * FS : element which was before behind an element pointed by Prec
    *      is removed and pointed by pointer P
    */
    //-------------your code here-------------
    if (Prec == nullptr || Prec->next == nullptr) {
        P = nullptr;
    } else {
        P = Prec->next;
        Prec->next = P->next;
        P->next = nullptr;
    }
    //----------------------------------------
}

