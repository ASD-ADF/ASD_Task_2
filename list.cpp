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

    address P = NULL;
    //-------------your code here-------------
    P = new elmlist;
    P->info = x;
    P->next = nullptr;
    //----------------------------------------
    return P;
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
    address q;
    if (L.first == nullptr) {
        L.first = P;
    } else {
        q = L.first;
        while (q->next != nullptr) {
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

    address P;
    //-------------your code here-------------
    P = L.first;
    while (P != NULL && P->info != x) {
        P = P->next;
    }
    //----------------------------------------
    return P;
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
        P->next = nullptr;
    }
    //----------------------------------------
}

void deleteLast(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : last element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
<<<<<<< HEAD
    cout<<"your code here"<<endl;
    if (L.first == nullptr) {
        P = nullptr;
    } else if (L.first->next == nullptr) {
        P = L.first;
        L.first = nullptr;
    } else {
        address q = L.first;
        while (q->next->next != nullptr) {
            q = q->next;
        }
        P = q->next;
        q->next = nullptr;
=======
    if (L.first == NULL) {
        P = NULL;
    } else if (L.first->next == NULL) {
        P = L.first;
        L.first = NULL;
    } else {
        address Q = L.first;
        while (Q->next->next != NULL) {
            Q = Q->next;
        }
        P = Q->next;
        Q->next = NULL;
>>>>>>> 66d50a93926b399f7bfdd879f3cc1ce33d55e978
    }
    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : view info of all element inside List L,
    *      call the view_data function from my_data.h to print the info
    */
    //-------------your code here-------------
<<<<<<< HEAD
    cout<<"your code here"<<endl;
    address q = L.first;
    while (q != nullptr) {
        cout << q->info << " ";
        q = q->next;
    }

=======
    address P = L.first;
    if (P == NULL) {
        cout<<"[empty]";
    }
    while (P != NULL) {
        cout<<P->info<<",";
        if (P->next != NULL) {
            cout<<" ";
        }
        P = P->next;
    }
>>>>>>> 66d50a93926b399f7bfdd879f3cc1ce33d55e978
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
    if (Prec != NULL && P != NULL) {
        P->next = Prec->next;
        Prec->next = P;
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
    P = Prec->next;
    if (P != NULL) {
        Prec->next = P->next;
        P->next = NULL;
    }
    //----------------------------------------
}

