/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){

	struct node* curr = head;

	int count[3] = { 0 };

	while (curr != NULL){
		count[curr->data]++;
		curr = curr->next;
	}

	int i, j;
	curr = head;
	for (i = 0; i < 3; i++){

		for (j = count[i]; j>0; j--){
			curr->data = i;
			curr = curr->next;
		}
	}

	return;

}