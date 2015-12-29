/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

void swapNodes(struct node* node1, struct node* node2){

	int temp = node1->num;

	node1->num = node2->num;
	node2->num = temp;

}

struct node * sortLinkedList(struct node *head) {

	if (head == NULL)
		return NULL;

	int i, swapFlag = 0;

	struct node *curr, *temp = NULL;



	do{
		swapFlag = 0;
		curr = head;

		while (curr->next != temp){
			if (curr->num > curr->next->num){
				swapFlag = 1;
				swapNodes(curr, curr->next);
			}

			curr = curr->next;
		}
		temp = curr;
	} while (swapFlag == 1);

	return head;

}