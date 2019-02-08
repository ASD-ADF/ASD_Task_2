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
  if (first(L)== NULL){
    address P = allocate(x);
    insertFirst(L, P);
  }else {
  address P = allocate(x);
  insertFirst(L, P);
  address R, S, Double;
  R = first(L);
  while (R != NULL && next(R)!= NULL)
    {
     S = R;
     while (next(S)!= NULL){
        if(info(R)== info(next(S))){
            Double = next(S);
            next(S) = next(next(S));
            delete Double;
        } else {
        S = next(S);
        }
     }
     R = next(R);
    }
  }
  List L2;
  createList(L2);
  while (first(L)!= NULL){
    address Max = first(L);
    address P = next(Max);
    while (P != NULL){
        if (info(P)>info(Max)){
            Max = P;
        }
        P = next(P);
    }
    if (Max == first(L)){
        deleteFirst(L, P);
    }
    else if (next(Max)== NULL){
        deleteLast(L,P);
    }
    else{
        address Prec = first(L);
        while (next(Prec)!= Max){
            Prec = next(Prec);
        }
        deleteAfter(L, Prec, P);
    }
    insertFirst(L2, P);
  }
  L = L2;
    //----------------------------------------
}
