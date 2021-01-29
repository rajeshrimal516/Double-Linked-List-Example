#include "doublelinkedlist.h"

int main(void)

{
	List* list1,*list2;
	printf("\nList1 Initialization\n");

	list1=ListInit(list1,5);

	if (isEmpty(list1))
		printf("\nList1 EMPTY\n");
	else
		printf("\nList1 NOT EMPTY\n");

	if (isFull(list1))
		printf("\nList1 FULL\n");
	else
		printf("\nList1 NOT FULL\n");
	printf("\nList1 Creation\n");
	ListInsert(list1,11);
	ListInsert(list1,14);
	ListInsert(list1,34);
	ListInsert(list1,13);
	ListInsert(list1,90);
	ListInsert(list1,45);
	ListInsert(list1,16);
	ListInsert(list1,1);
	ListInsert(list1,21);

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

	list2 = ListInit(list2,10);

	if (isEmpty(list2))
		printf("\n\nList2 EMPTY\n");
	else
		printf("\nList2 NOT EMPTY\n");

	if (isFull(list2))
		printf("\nList2 FULL\n");
	else
	printf("\nList2 NOT FULL\n");
	printf("\nList2 Creation\n");
	ListInsert(list2,11);
	ListInsert(list2,10);
	ListInsert(list2,35);
	ListInsert(list2,23);
	ListInsert(list2,17);
	ListInsert(list2,46);
	ListInsert(list2,36);
	ListInsert(list2,0);
	ListInsert(list2,56);
	ListInsert(list2,18);

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

	printf("\nList1 Element Inserting\n");

	ListInsert(list1,100);

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

	printf("\nList2 Element Inserting\n");

	ListInsert(list1,12);

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

		ListInsert(list1,11);
		ListInsert(list1,14);
		ListInsert(list1,34);
		ListInsert(list1,13);

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
		ListInsert(list2,11);
		ListInsert(list2,14);
		ListInsert(list2,34);
		ListInsert(list2,13);
		ListInsert(list2,90);

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
	return 1;
}
