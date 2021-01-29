#include "doublelinkedlist.h"
List* ListInit(List* list, int max)
{
	list= (List*)malloc(sizeof(List));
	list->max_size=max;
	list->head =list->tail= NULL;
	return list;
}


// Frees all memory allocated by list
void ListDelete(List* list)
{
	if (!(list->size)) return;
	free(list);
	ListInit(list,list->max_size);

	list->size = 0;

}


//Function inserts Node element to specific position (index) in the list
int ListInsert(List* list, int x)
{

	Node* element =(Node*)malloc(sizeof(Node));


	if(list->size<list->max_size)
	{
	if (list->head==NULL)
	{
		element->data=x;
		list->head = list->tail = element;
		list->size = 1;
		return 1;
	}

	else
	{
		element->data=x;
		element->prev = list->tail;
		element->prev->next = element;
		element->next = NULL;
		list->tail = element;
		list->size++;
		return 1;
	}

	}
	else
	{
		return 0;
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
		list->size--;
	}
	if( index==(list->size-1))
	{
		current=list->tail;
		current->prev->next=list->head->prev;
		list->size--;
	}

	if(index>0 && index<(list->size-1))
	{
		current = list->head->next;
		for (int i = 1; i < index; current = current->next, i++);

		current->next->prev=current->prev;
		current->prev->next=current->next;
		list->size--;
	}
	return 1;
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
	//printf("%d\t",list->tail->data);
printf("\n");
}
int isEmpty(List* list)
{
	if(list->head==NULL && list->tail==NULL)
		return 1;
	else return 0;
}
int isFull(List* list)
{
	if(list->size == list->max_size) return 1;
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
