#include "list.h"

void createList(List &L) {
    /**
    * FS : set first(L) with Null
    */
    //-------------your code here-------------
    cout<<"your code here"<<endl;
    L.first = Null;

}

address allocate(infotype x) {
    /**
    * FS : return new list element with info = x and next element is Null
    */

    address P = NULL;
    //-------------your code here-------------
    cout<<"your code here"<<endl;
    P = new elmlist;
    P -> info = x;
    P -> next = Null;
    //----------------------------------------
    return P;
}

void deallocate(address &P) {
    /**
    * FS : delete element pointed by P
    */
    //-------------your code here-------------
    cout<<"your code here"<<endl;
    delete P;
    P = Null;

    //----------------------------------------
}

void insertFirst(List &L, address P) {
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the first element in List L
    */
    //-------------your code here-------------
    cout<<"your code here"<<endl;
    if (P->next == Null){
        L.first = P;
    } else {
        P-> next = L.first;
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
    cout<<"your code here"<<endl;
    address q;
    q = L.first;
    if (L.first == Null){
        L.first = P;
    } else {
        while (q -> next != Null){
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
    P = L.first;
    //-------------your code here-------------
    cout<<"your code here"<<endl;
    
    while (P != Null && P->info.ID != x.ID){
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
    cout<<"your code here"<<endl;
    if (L.first == Null){
        P = Null;
    }else{
        P = L.first;
        L.first = P->next;
        P->next = Null;
    }

    //----------------------------------------
}

void deleteLast(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : last element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
    cout<<"your code here"<<endl;
    address q;
    if (L.first == Null){
        P = Null;
    }else if (L.first->next == Null){
        P= L.first;
        L.first = Null;
    } else {
        q = L.first;
        while (q->next->next != Null){
            q = q->next;
        }
        P= q->next;
        q->next = Null;
    }


    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : view info of all element inside List L,
    *      call the view_data function from my_data.h to print the info
    */
    //-------------your code here-------------
    cout<<"your code here"<<endl;
    address P;
    P =  L.first;
    if (P == Null){
        cout << "LIST KOSONG";
    }else {
        while (P != Null){
            cout << P->info << ", ";
            P = P->next;
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
    cout<<"your code here"<<endl;
    if (L.first == Null){
        L.first = P;
    }else{
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
    cout<<"your code here"<<endl;
     if (Prec == Null || Prec->next == Null) {
        P = Null;
    }else{
        P = Prec->next;
        Prec->next = P->next;
        P->next = NULL;
    }
    //----------------------------------------
}

