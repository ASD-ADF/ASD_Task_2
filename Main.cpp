#include <iostream>
#include "list.h"
#include "operation.h"

using namespace std;

void mainMenu();
List L;
address P;
infotype X;

int main() {
    createList(L);

    //==================================================
    // TEST INSERT FIRST
    P = allocate(6);
    insertFirst(L, P);
    printInfo(L);
    cout<<"output should be: 6,"<<endl;

    insertFirst(L, allocate(3));
    insertFirst(L, allocate(8));
    printInfo(L);
    cout<<"output should be: 8, 3, 6,"<<endl;

    //==================================================
    // TEST INSERT LAST
    insertLast(L, allocate(4));
    insertLast(L, allocate(2));
    printInfo(L);
    cout<<"output should be: 8, 3, 6, 4, 2,"<<endl;

    //==================================================
    // TEST INSERT AFTER
    P = findElm(L, 6);
    insertAfter( L, P,allocate(5));
    printInfo(L);
    cout<<"output should be: 8, 3, 6, 5, 4, 2,"<<endl;

    //==================================================
    // TEST DELETE FIRST
    deleteFirst(L, P);
    cout<<info(P)<<endl;
    cout<<"output should be: 8"<<endl;
    printInfo(L);
    cout<<"output should be: 3, 6, 5, 4, 2,"<<endl;
    deallocate(P);

    //==================================================
    // TEST DELETE LAST
    deleteLast(L, P);
    cout<<info(P)<<endl;
    cout<<"output should be: 2"<<endl;
    printInfo(L);
    cout<<"output should be: 3, 6, 5, 4,"<<endl;
    deallocate(P);

    //==================================================
    // TEST DELETE AFTER
    address Prec = findElm(L, 6);
    deleteAfter(L, Prec, P);
    cout<<info(P)<<endl;
    cout<<"output should be: 5"<<endl;
    printInfo(L);
    cout<<"output should be: 3, 6, 4,"<<endl;
    deallocate(P);

    //==================================================
    // TEST DELETE ALL
    deleteLast(L, P);
    deallocate(P);
    deleteFirst(L, P);
    deallocate(P);
    deleteLast(L, P);
    deallocate(P);

    printInfo(L);
    cout<<"output should be: [empty]"<<endl;

    //==================================================
    // TEST INSERT SORTED
    insert_sorted(L, 5);
    printInfo(L);
    cout<<"output should be: 5,"<<endl;

    insert_sorted(L, 3);
    insert_sorted(L, 8);
    printInfo(L);
    cout<<"output should be: 3, 5, 8,"<<endl;


    insert_sorted(L, 5);
    insert_sorted(L, 1);
    insert_sorted(L, 5);
    printInfo(L);
    cout<<"output should be: 1, 3, 5, 8,"<<endl;

    //==================================================
    cout<<"CONGRATULATION, YOU'VE COMPLETED TASK 2 2019"<<endl;
    return 0;
}
