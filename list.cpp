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

    address P = new elmlist;
    //-------------your code here-------------
    //cout<<"your code here"<<endl;
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
    if (first(L) != NULL) {
        while (next(Q) != NULL) {
            Q = next(Q);
        }
        next(Q) = P;
        next(P) = NULL;
    } else {
        first(L) = P;
        next(P) = NULL;
    }
    //----------------------------------------
}

address findElm(List L, infotype x) {
    /**
    * IS : List L may be empty
    * FS : returns element with info.ID = x.ID,
           return Null if such ID is not found
    */

    address P = first(L);
    //-------------your code here-------------
    //cout<<"your code here"<<endl;
    if (first(L) != NULL) {
        while (info(P) != x) {
            P = next(P); 
        }
    } else P = NULL;
    //----------------------------------------
    return P;
}

void deleteFirst(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : first element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
    //cout<<"your code here"<<endl;
    if (first(L) != NULL) {
        P = first(L);
        first(L) = next(P);
        P = NULL;
    }
    //----------------------------------------
}

void deleteLast(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : last element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
    //cout<<"your code here"<<end
    if ((first(L) != NULL) || (next(first(L)) != NULL))  {
        address Q;
        Q = first(L);
        while (next(next(Q)) != NULL) {
            Q = next(Q);
            P = next(Q);
        }
        next(Q) = NULL;
        next(P) = NULL;
    } else deleteFirst(L,P);
    //-------- --------------------------------
}

void printInfo(List L) {
    /**
    * FS : view info of all element inside List L,
    *      call the view_data function from my_data.h to print the info
    */
    //-------------your code here-------------
    //cout<<"your code here"<<endl;
    address P = first(L);
    while (next(P) != NULL) {\
        cout << info(P) << endl;
        P = next(P);
    }
    cout << info(P) << endl;
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
    address Q;
    Q = first(L);
    while (next(Q) != Prec) {
        Q = next(Q);
    }
    next(P) = Prec;
    next(Q) = P;
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
    P = first(L);
    while (next(P) != Prec) {
        P = next(P);
    }
    

    //----------------------------------------
}

