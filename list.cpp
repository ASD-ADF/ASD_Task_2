#include "list.h"

void createList(List &L) {
    /**
    * FS : set first(L) with Null
    */
    //-------------your code here-------------
    //cout<<"your code here"<<endl;

    first(L) = NULL;
    //----------------------------------------
}

address allocate(infotype x) {
    /**
    * FS : return new list element with info = x and next element is Null
    */

    address P = NULL;
    //-------------your code here-------------
    //cout<<"your code here"<<endl;
    P = new elmlist;
    info(P) = x;
    //----------------------------------------
    return P;
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

        next(P) = first(L);
        first(L) = P;

    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the last element in List L
    */
    //-------------your code here-------------
    //cout<<"your code here"<<endl;

    address Q = first(L);
    if(Q == NULL){
        first(L) = P;
    }else{
        while (next(Q) != NULL){
            Q = next(Q);
        }
        next(Q) = P;
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
    //cout<<"your code here"<<endl;

    P = first(L);
    while (P != NULL){
        if (info(P) == x){
            return P;
        }
            P = next(P);
        }
    return P;
    //----------------------------------------
}

void deleteFirst(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : first element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
    //cout<<"your code here"<<endl;

    P = first(L);
    if(P != NULL){
        first(L) = next(P);
        next(P) = NULL;
    }

    //----------------------------------------
}

void deleteLast(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : last element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
    //cout<<"your code here"<<endl;

    address Q = first(L);
    if(Q != NULL){
        if(next(Q) == NULL){
            P = Q;
            first(L) = NULL;
        }else{
            while(next(next(Q)) != NULL ){
                Q = next(Q);
            }
            P = next(Q);
            next(Q) = NULL;
        }
    }

    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : view info of all element inside List L,
    *      call the view_data function from my_data.h to print the info
    */
    //-------------your code here-------------
    //cout<<"your code here"<<endl;

    address P = first(L);
    if(P == NULL){
        cout<<"[Empty]";
    }else{
        while(P != NULL){
            cout<<info(P)<<",";
            P = next(P);
        }
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

    if((Prec != NULL) && (P != NULL)){
        next(P) = next(Prec);
        next(Prec) = P;
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
    //cout<<"your code here"<<endl;

    if(Prec != NULL){
        if(next(Prec) != NULL){
           P = next(Prec);
           next(Prec) = next(P);
           next(P) = NULL;
        }
    }
    //----------------------------------------
}

