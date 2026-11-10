#include "list.h"
#include "operation.h"


void insert_sorted(List &L, infotype x) {
    /**
    * IS : List may be empty
    * PR : insert an infotype x into an already sorted List L
    *      so that the elements inside List L is still sorted in ascending order,
    *      procedure must also check if such number is already exists (No Duplicate number),
    *      allocate new element only if the conditions are met
    * FS : elements in List L sorted in ascending order, x is inside List L
    */

    //-------------your code here-------------
    cout<<"your code here"<<endl;
    void insert_sorted(List &L, infotype x) {
    if (findElm(L, x) != Null) {
        return;  
    }
    address P = allocate(x);

    if (L.first == Null || x.ID < L.first->info.ID) {
        insertFirst(L, P);
        return;
    }

    address q = L.first;
    while (q->next != Null && q->next->info.ID < x.ID) {
        q = q->next;
    }

    insertAfter(L, q, P);
}


    //----------------------------------------
}
