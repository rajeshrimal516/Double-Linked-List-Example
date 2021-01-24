#include "doublelinkedlist.h"

int main(void)
{
	List* list1= (List*)malloc(sizeof(List));

	List* list2= (List*)malloc(sizeof(List));

	printf("\nList1 Initialization\n");
	ListInit(list1);
	list1->max_size=5;
	if (isEmpty(list1))
		printf("\nList1 EMPTY\n");
	else
		printf("\nList1 NOT EMPTY\n");

	if (isFull(list1))
		printf("\nList1 FULL\n");
	else
		printf("\nList1 NOT FULL\n");


	Node e1 = { 99 };
	Node e2 = { 89 };
	Node e3 = { 97 };
	Node e4 = { 34 };
	Node e5 = { 55 };
	printf("\nList1 Creation\n");

	ListInsert(list1,&e1,0);
	ListInsert(list1,&e2,1);
	ListInsert(list1,&e3,2);
	ListInsert(list1,&e4,3);
	ListInsert(list1,&e5,4);
	ListInsert(list1,&e5,5);


	if (isEmpty(list1))
		printf("\nList1 EMPTY\n");
	else
		printf("\nList1 NOT EMPTY\n");

	if (isFull(list1))
		printf("\nList1 FULL\n");
	else
		printf("\nList1 NOT FULL\n");
	printf("\nList1 Printing\n\n");

	ListPrint(list1);

	printf("\nList2 Initialization");

	ListInit(list2);

	list2->max_size=10;

	if (isEmpty(list2))
		printf("\n\nList2 EMPTY\n");
	else
		printf("\nList2 NOT EMPTY\n");

	if (isFull(list2))
		printf("\nList2 FULL\n");
	else
	printf("\nList2 NOT FULL\n");

	Node a1 = { 12 };
	Node a2 = { 38 };
	Node a3 = { 34 };
	Node a4 = { 90 };
	Node a5 = { 87 };
	Node a6 = { 45};
	Node a7 = { 67 };
	Node a8 = { 50 };
	Node a9 = { 85 };
	Node a10 = { 60 };
	Node a11 = { 40};

	printf("\nList2 Creation\n");
	ListInsert(list2,&a1,0);
	ListInsert(list2,&a2,1);
	ListInsert(list2,&a3,2);
	ListInsert(list2,&a4,3);
	ListInsert(list2,&a5,4);
	ListInsert(list2,&a6,5);
	ListInsert(list2,&a7,6);
	ListInsert(list2,&a8,7);
	ListInsert(list2,&a9,8);
	ListInsert(list2,&a10,9);
	ListInsert(list2,&a11,10);

	if (isEmpty(list2))
		printf("\nList2 EMPTY\n");
	else
		printf("\nList2 NOT EMPTY\n");

	if (isFull(list2))
		printf("\nList2 FULL\n");
	else
		printf("\nList2 NOT FULL\n");
	printf("\nList2 Printing\n\n");

	ListPrint(list2);


	printf("\nList1 Node 2 Element Deleting\n");

	ListDeleteElement(list1,1);

	if (isEmpty(list1))
		printf("\nList1 EMPTY\n");
	else
		printf("\nList1 NOT EMPTY\n");


	if (isFull(list1))
		printf("\nList1 FULL\n");
	else
		printf("\nList1 NOT FULL\n");

	printf("\nList1 printing\n\n");

	ListPrint(list1);

	printf("\nList2 Node 4 Element Deleting\n");

	ListDeleteElement(list2,3);

	if (isEmpty(list2))
		printf("\nList2 EMPTY\n");
	else
		printf("\nList2 NOT EMPTY\n");

	if (isFull(list2))
		printf("\nList2 FULL\n");
	else
		printf("\nList2 NOT FULL\n");
	printf("\nList2 printing\n\n");

	ListPrint(list2);

	printf("\nList1 Node 2 Element Inserting\n");

	ListInsert(list1,&e2,1);

	if (isEmpty(list1))
		printf("\nList1 EMPTY\n");
	else
		printf("\nList1 NOT EMPTY\n");

	if (isFull(list1))
		printf("\nList1 FULL\n");
	else
	printf("\nList1 NOT FULL\n");

	printf("\nList1 printing\n\n");

	ListPrint(list1);

	printf("\nList2 Node 4 Element Inserting\n");

	ListInsert(list2,&a4,3);

	if (isEmpty(list2))
		printf("\nList2 EMPTY\n");
	else
		printf("\nList2 NOT EMPTY\n");

	if (isFull(list2))
		printf("\nList2 FULL\n");
	else
		printf("\nList2 NOT FULL\n");

	printf("\nList2 printing\n\n");

	ListPrint(list2);

	sortList(list1);

	printf("\nList1 Printing after sorting\n\n");

	ListPrint(list1);

	sortList(list2);

	printf("\nList2 Printing after sorting\n\n");

	ListPrint(list2);

	ListDelete(list1);

	printf("\nList1 Printing after Deleting whole List\n");

	ListPrint(list1);

	if (isEmpty(list1))
		printf("\nList1 EMPTY\n");
	else
		printf("\nList1 NOT EMPTY\n");

	if (isFull(list1))
		printf("\nList1 FULL\n");
	else
		printf("\nList1 NOT FULL\n");

	ListDelete(list2);

	printf("\nList2 Printing after Deleting whole List\n");

	ListPrint(list2);

	if (isEmpty(list2))
		printf("\nList2 EMPTY\n");
	else
		printf("\nList2 NOT EMPTY\n");

	if (isFull(list2))
		printf("\nList2 FULL\n");
	else
		printf("\nList2 NOT FULL\n");

	printf("\nList1 Creation Again\n");

	ListInsert(list1,&e1,0);
	ListInsert(list1,&e2,1);
	ListInsert(list1,&e3,2);

	printf("\nList1 printing\n\n");

	ListPrint(list1);

	if (isEmpty(list1))
		printf("\nList1 EMPTY\n");
	else
		printf("\nList1 NOT EMPTY\n");

	if (isFull(list1))
		printf("\nList1 FULL\n");
	else
		printf("\nList1 NOT FULL\n");

	printf("\nList2 Creation Again\n");

	ListInsert(list2,&a1,0);
	ListInsert(list2,&a2,1);
	ListInsert(list2,&a3,2);

	printf("\nList2 printing\n\n");

	ListPrint(list2);

	if (isEmpty(list2))
		printf("\nList2 EMPTY\n");
	else
		printf("\nList2 NOT EMPTY\n");

	if (isFull(list2))
		printf("\nList2 FULL\n");
	else
		printf("\nList2 NOT FULL\n");

	ListDelete(list1);
	printf("\nList1 Printing after Deleting whole List Again\n");
	ListPrint(list1);
	if (isEmpty(list1))
		printf("\nList1 EMPTY\n");
	else
		printf("\nList1 NOT EMPTY\n");
	if (isFull(list1))
		printf("\nList1 FULL\n");
	else
		printf("\nList1 NOT FULL\n");

	ListDelete(list2);

	printf("\nList2 Printing after Deleting whole List Again\n");

	ListPrint(list2);

	if (isEmpty(list2))
		printf("\nList2 EMPTY\n");
	else
		printf("\nList2 NOT EMPTY\n");

	if (isFull(list2))
		printf("\nList2 FULL\n");
	else
		printf("\nList2 NOT FULL\n");
	return 0;
}
