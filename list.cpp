#include "list.h"

void createList(List &L) {
     L.first = nullptr;
  
}

address allocate(infotype x) {

    address P = NULL;

    P = new elmlist;
    P->info = x;
    P->next = nullptr;

    return P;
}

void deallocate(address &P) {
    if (P != nullptr) {
        delete P;
        P = nullptr;
    }
}

void insertFirst(List &L, address P) {
  
    if (L.first == nullptr){
        L.first = P;
    } else {
        P->next = L.first;
        L.first = P;
    }

}

void insertLast(List &L, address P) {

    address q;
    P->next = nullptr;
    if (L.first == nullptr) {
        L.first = P;
    } else {
        q = L.first;
        while (q->next != nullptr) {
            q = q->next;
        }
        q->next = P;
    }

}

address findElm(List L, infotype x) {

    address P;

    P = L.first;
    while (P != NULL && P->info != x) {
        P = P->next;
    }
  
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

void printInfo(List L) {
    address P = L.first;

    if (P == nullptr) {
        cout << "[empty]";
    }

    while (P != nullptr) {
        cout << P->info << ",";

        if (P->next != nullptr) {
            cout << " ";
        }

        P = P->next;
    }

    cout << endl;
}
void insertAfter(List &L, address Prec, address P) {
    if (Prec != NULL && P != NULL) {
        P->next = Prec->next;
        Prec->next = P;
    }

}
void deleteLast(List &L, address &P) {
    if (L.first == nullptr) {
        P = nullptr;
    }
    else if (L.first->next == nullptr) {
        P = L.first;
        L.first = nullptr;
    }
    else {
        address Q = L.first;

        while (Q->next->next != nullptr) {
            Q = Q->next;
        }

        P = Q->next;
        Q->next = nullptr;
    }
}
void deleteAfter(List &L, address Prec, address &P) {
    P = nullptr;

    if (Prec == nullptr || Prec->next == nullptr) {
        return;
    }

    P = Prec->next;
    Prec->next = P->next;
    P->next = nullptr;
}