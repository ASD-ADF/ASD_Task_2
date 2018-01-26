# Task_2 [2017/2018-II]
Task 2 : Abstract Data Type

# DEADLINE = JANUARY 31ST, 2018 - 23:59

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

## TO DO
### mydata.h
TODO:  create a new Data type with specification:
		- an integer variable acted as an ID
		- two other variables
		- a float variable


### mydata.cpp
* `mytype create_data()`<br>
	TODO: receive input from user and assign the value of new data
* `view_data(mytype d)`<br>
	TODO:  view the content of data d
* `edit_data(mytype &d)`<br>
	TODO:  edit the value of data d, the ID must not be modified

	
	
### array_based.cpp
* `add_new_data(mytype database[10], int &n_data, mytype d)`<br>
	TODO:   add the new data d inside the database, the new data will be located at the end of database array
* `add_new_priority_data(mytype database[10], int &n_data, mytype d)`<br>
	TODO:   add the new data d inside the database, the new data will be located at the front of database array
* `find_data(mytype database[10], int n_data, int id_to_find)`<br>
	TODO:   find a data inside the database based on its id the function will return the index of the searched data the function will return -1 if such data is not found
* `remove_data(mytype database[10], int &n_data, int id_to_delete)`<br>
	TODO:   find a data inside the database based on its id then remove such found data from database
* `view_data(mytype database[10], int n_data)`<br>
	TODO:  loop through database and view all data inside database
* `sort_data(mytype database[10], int n_data)`<br>
	TODO:  sort data inside database
	
	
	
### array_based.cpp
* modify the menu so that user cannot insert two data with the same ID