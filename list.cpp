#include "list.h"

void createList(List &L) {

    L.first = nullptr;
}

address allocate(infotype x) {
    address P = new elmlist;
    if (P != NULL) {
        P->info = x;
        P->next = NULL;
    }
    return P;
}

void deallocate(address &P) {
 
    delete P;
    P = nullptr;
}

void insertFirst(List &L, address P) {


    P->next = L.first;
    L.first = P;
    
}

void insertLast(List &L, address P) {
    

    if (L.first == NULL){
        L.first = P;
    } else {
        address q = L.first;
        while (q->next != NULL){
            q = q->next;
        }
        q->next = P;
    }
  
}

address findElm(List L, infotype x) {
   


    address P = L.first;
    while (P != NULL) {
        if (P->info == x) {
            return P;
        }
        P = P->next;
    }
    return NULL;
}

void printInfo(List L) {


    address P = L.first;
    if (P == NULL) {
        cout << "[empty]";
    }
    while (P != NULL) {
        cout << P->info << ",";
        if (P->next != NULL) cout << " ";
        P = P->next;
    }
    cout << endl;

    cout<<endl;
}
void insertAfter(List &L, address Prec, address P) {

    P->next = Prec->next;
    Prec->next = P;

}
void deleteFirst(List &L, address &P) {

    if (L.first == NULL) {
        P = NULL;                 
    } else {
        P = L.first;
        L.first = P->next;        
        P->next = NULL;          
    }
}
 
void deleteLast(List &L, address &P) {

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
    }
}
 

void deleteAfter(List &L, address Prec, address &P) {

    if (Prec == NULL || Prec->next == NULL) {
        P = NULL;                 
    } else {
        P = Prec->next;
        Prec->next = P->next;    
    }
}

