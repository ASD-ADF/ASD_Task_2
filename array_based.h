#ifndef ARRAY_BASED_H_INCLUDED
#define ARRAY_BASED_H_INCLUDED

#include "my_data.h"


void add_new_data(mytype database[10], int &n_data, mytype d);
void add_new_priority_data(mytype database[10], int &n_data, mytype d);
int find_data(mytype database[10], int n_data, int id_to_find);
void remove_data(mytype database[10], int &n_data, int id_to_delete);
void view_data(mytype database[10], int n_data);
void sort_data(mytype database[10], int n_data);

#endif // ARRAY_BASED_H_INCLUDED
