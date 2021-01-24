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
void ListInit(List* list);
// Creates empty List
int ListCreate(List* list, Node * data);

// Frees all memory allocated by list
void ListDelete(List* list);

//Function inserts Node element to specific position (index) in the list
int ListInsert(List* list, Node* element, int index);

//Function deletes Node element from specific position(index) in the list
int ListDeleteElement(List* list, int index);

// Function returns Node element at specific position (index) in the list
Node* ListGetElement(List* list, int index);

//Function returns number of elements in the list
int ListSize(List* list);

// Prints all list elements on standard out
void ListPrint(List* list);

int isEmpty(List* list);
int isFull(List* list);
void sortList(List* list);

#endif /*DOUBLELINKEDLIST_H_*/
