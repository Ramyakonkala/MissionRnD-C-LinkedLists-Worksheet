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
	struct node *cur;
	struct node *ptr;
	int temp;
	cur = head;
	while (cur->next != NULL){
		ptr = cur->next;
		while(ptr != NULL){
			if (cur->data > ptr->data){
				temp = cur->data;
				cur->data = ptr->data;
				ptr->data = temp;
			}
			ptr = ptr->next;
		}
		cur = cur->next;
	}
	head = cur;
}