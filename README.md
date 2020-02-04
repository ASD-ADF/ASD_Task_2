# Task_2 [2020]
Task 2 : Linked List Introduction

# DEADLINE = FEBRUARY 9th, 2020 - 23:59

## Reading Material
* [git cheat sheet](https://education.github.com/git-cheat-sheet-education.pdf)
* [markdown cheat sheet](https://enterprise.github.com/downloads/en/markdown-cheatsheet.pdf)

## Workflow
1. FORK this repositori ASD_Task_2 to your GitHub account
2. CLONE ASD_Task_2 repository from YOUR OWN ACCOUNT
3. open and modify codes in *.cpp and *.h files inside project ASD_Task_2
4. write your code inside the provided space in each functions/procedures 
5. COMMIT and PUSH your project to your account
6. create a Pull Request


Create a program to store and manage a data using single linear linked list


## TO DO


### list.h
* **TODO**: Define the elmlist and list data structure
* Define functions and procedures of single linked list ***[already done for you]***
	* `function allocate(in: x : infotype) : address`
	* `procedure deallocate( i/o: P : address )`
	* `procedure insertFirst( i/o: L : List, i: P : address )`
	* `procedure insertLast( i/o: L : List, i: P : address )`
	* `procedure insertAfter( i/o: L : List, i: Prec : address, P : address )`
	* `procedure deleteFirst( i/o: L : List, i/o: P : address )`
	* `procedure deleteLast( i/o: L : List, i/o: P : address )`
	* `procedure deleteAfter( i/o: L : List, i: Prec : address, i/o: P : address )`
	* `function findElm( i: L : List, x : infotype ) : address`
	* `procedure printInfo( i: L : List )`
   
### list.cpp
**TODO**: Implement all functions and procedures defined in list.h


### operation.h
* `procedure insert_sorted( i/o : L : List, x : infotype )`
  * **TODO**: insert x into an already sorted-by-ID list L so that
    * the list is sorted ascending order
    * no duplicate number in the List
	* allocate new element only if the conditions are met

### operation.cpp
Implement function and procedure defined in operation.h

### main.cpp
**TODO**: Run `main.cpp` to check your implementation


