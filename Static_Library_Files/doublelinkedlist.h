#ifndef DOUBLELINKEDLIST_H_
#define DOUBLELINKEDLIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Node {
	int 	data;
	struct 	Node* prev;
	struct 	Node* next;
} Node;

typedef struct List {
	Node* head;  // Pointer to first element in list
	Node* tail;  // Pointer to last element in list
	int size ; //Number of elements in list
	int max_size;// Max Number of elements in list
} List;


List* ListInit(List* list,int max_size);
// Frees all memory allocated by list
void ListDelete(List* list);
//Function inserts Node element to specific position (index) in the list
int ListInsert(List* list, int x);
//Function deletes Node element from specific position(index) in the list
int ListDeleteElement(List* list, int x);
// Prints all list elements on standard out
void ListPrint(List* list);
//checks the list is empty
int isEmpty(List* list);
//checks the list is full
int isFull(List* list);
//sort the list according to the indices
void sortList(List* list);

#endif /*DOUBLELINKEDLIST_H_*/
