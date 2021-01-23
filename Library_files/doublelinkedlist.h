#ifndef DOUBLELINKEDLIST_H_
#define DOUBLELINKEDLIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 10

typedef struct Node {
	int 	data;
	struct 	Node* prev;
	struct 	Node* next;
} Node;

typedef struct List {
	Node* head;
	Node* tail;
	int size ;
} List;
// Initializes List
void ListInit(List* list);
// Creates empty List
int ListCreate(List* list, Node * data);
// Frees all memory allocated by list
void ListDelete(List* list);
//Function inserts Node element to specific position (index) in the list
int ListInsert(List* list, Node* element, int index);
//Function deletes Node element from specific position(index) in the list
int ListDeleteElement(List* list, int index);
//Function returns number of elements in the list
int ListSize(List* list);
// Prints all list elements on standard out
void ListPrint(List* list);
//Checks is empty or not
int isEmpty(List* list);
//Checks is full or not
int isFull(List* list);
//Sort the list based on the value of element and the index number
void sortList(List* list);

#endif
