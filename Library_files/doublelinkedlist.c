#include "doublelinkedlist.h"
//Initializes the List
void ListInit(List* list)
{
	list->head =list->tail= NULL;
}

// Creates empty NodeList
int ListCreate(List* list, Node* data)
{
	list->head = list->tail = data;
	list->size = 1;
	return 1;
}


// Frees all memory allocated by list
void ListDelete(List* list)
{
	if (!(list->size)) return;
	free(list);
	list->head = list->tail = NULL;
	list->size = 0;

}


//Function inserts Node element to specific position (index) in the list
int ListInsert(List* list, Node* element, int index)
{
	if ((index > list->size) || (index < 0)) return 0;

	if (!index)
	{
		element->next = list->head;
		element->next->prev = element;
		element->prev = NULL;
		list->head = element;
		list->size++;
		return 1;
	}

	if (index == list->size)
	{
		element->prev = list->tail;
		element->prev->next = element;
		element->next = NULL;
		list->tail = element;
		list->size++;
		return 1;
	}

	Node* current;
	int i;

	if (index < (list->size ))
	{
		current = list->head->next;
		for (i = 1; i < index; current = current->next, i++);
		element->next = current;
		element->prev = current->prev;
		element->prev->next = element;
		current->prev = element;
		list->size++;
		return 1;
	}
	else
	{
		current = list->tail->prev;
		for (i = (list->size - 2); i > index; current = current->prev, i--);
		element->next = current;
		element->prev = current->prev;
		element->prev->next = element;
		current->prev = element;
		list->size++;
		return 1;
	}
}


//Function deletes Node element from specific position(index) in the list
int ListDeleteElement(List* list, int index)
{
	if ((index > list->size) || (index < 0)) return 0;
	Node* current;
	if(!index)
	{
		current = list->head;
		list -> head = current -> next;
	}
	if( index==(list->size-1))
	{
		current=list->tail;
		current->prev->next=list->head->prev;
	}

	if(index>0 && index<(list->size-1))
	{
		current = list->head->next;
		for (int i = 1; i < index; current = current->next, i++);

		current->next->prev=current->prev;
		current->prev->next=current->next;
	}
	return 1;
}



// Function returns Node element at specific position (index) in the list
Node* NodeListGetElement(List* list, int index)
{
	if ((index >= list->size) || (index < 0)) return NULL;

	if (!index)
	{
		return list->head;
	}

	if (index == (list->size - 1))
	{
		return list->tail;
	}

	Node* current;
	int i;

	if (index < (list->size - index))
	{
		current = list->head->next;
		for (i = 1; i < index; current = current->next, i++);
		return current;
	}
	else
	{
		current = list->tail->prev;
		for (i = (list->size - 2); i > index; current = current->prev, i--);
		return current;
	}
}


//Function returns number of elements in the list
int ListSize(List* list)
{
	return list->size;
}


// Prints all list elements on standard out
void ListPrint(List* list)
{
	if (!(list->size)) return;
	Node* current;
	current = list->head;
	do
	{
		printf("%d\t", current->data);
		current = current->next;
	} while (current != NULL);
printf("\n");
}
int isEmpty(List* list)
{
	if(list->head==list->tail)
		return 1;
		return 0;
}
int isFull(List* list)
{
	if(list->size == MAX_SIZE) return 1;
		return 0;
}

void sortList(List* list)
{
	Node* current, *element;
	int x;
	if(list->head== NULL) return;
	else
	{
		for(current=list->head;current->next!= NULL;current=current->next)
		{
			  for(element = current->next; element != NULL; element = element->next)
			  {
				  if(current->data > element->data) {
				                      x = current->data;
				                      current->data = element->data;
				                      element->data = x;
			  }
		}
	}
}
}
