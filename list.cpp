#include "list.h"

void createList(List &L) {
    /**
    * FS : set first(L) with Null
    */
    L.first = NULL;
    //cout<<"your code here"<<endl;


    //----------------------------------------
}

address allocate(infotype x) {
    /**
    * FS : return new list element with info = x and next element is Null
    */

    //address P = NULL;
    address P = new elmlist;
    P->info = x;
    //cout<<"your code here"<<endl;


    //----------------------------------------
    return P;
}

void deallocate(address &P) {
    /**
    * FS : delete element pointed by P
    */
    delete P;
    //cout<<"your code here"<<endl;


    //----------------------------------------
}

void insertFirst(List &L, address P) {
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the first element in List L
    */
    P->next = L.first;
    L.first = P;
    //cout<<"your code here"<<endl;



    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the last element in List L
    */
    address Q = L.first;
    while(Q->next != NULL){
        Q = Q->next;
    }
    Q->next = P;
    //cout<<"your code here"<<endl;


    //----------------------------------------
}

address findElm(List L, infotype x) {
    /**
    * IS : List L may be empty
    * FS : returns element with info.ID = x.ID,
           return Null if such ID is not found
    */

    address P  = L.first;
    while(P != NULL){
        if(P->info == x){
            return P;
        }else{
            P = P->next;
        }
    }
    //cout<<"your code here"<<endl;


    //----------------------------------------
    return P;
}

void deleteFirst(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : first element in List L is removed and is pointed by P
    */
        P = L.first;
        L.first = P->next;
        P->next = NULL;
    //cout<<"your code here"<<endl;



    //----------------------------------------
}

void deleteLast(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : last element in List L is removed and is pointed by P
    */
    if (L.first->next != NULL) {
        address Q = L.first;
        while(Q->next->next != NULL){
        Q = Q->next;}
        P = Q->next;
        Q->next = NULL;
    }else{
        deleteFirst(L,P);
    }
    //cout<<"your code here"<<endl;



    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : view info of all element inside List L,
    *      call the view_data function from my_data.h to print the info
    */
    //-------------your code here-------------
    //cout<<"your code here"<<endl;

    if (L.first != NULL) {
    address P = L.first;
    while(P != NULL){
        cout<<P->info;
        P = P->next;
    }
    cout<<endl;
    }
    else {
        cout<<"[empty]"<<endl;
    }
}


void insertAfter(List &L, address Prec, address P) {
    /**
    * IS : Prec and P is not NULL
    * FS : element pointed by P is placed behind the element
    *      pointed by pointer Prec
    */
    if(Prec != NULL && P != NULL){
        P->next = Prec->next;
        Prec->next = P;
    }
    //cout<<"your code here"<<endl;

    //----------------------------------------

}
void deleteAfter(List &L, address Prec, address &P) {
    /**
    * IS : Prec is not NULL
    * FS : element which was before behind an element pointed by Prec
    *      is removed and pointed by pointer P
    */
    P = Prec->next;
    Prec->next = P->next;
    P->next = NULL;
    //cout<<"your code here"<<endl;


    //----------------------------------------
}

