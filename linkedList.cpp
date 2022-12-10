#include <iostream>
//#include <list>
//#include <bits/stdc++.h>
using namespace std;
//#include <stdio.h>
//#include <stdlib.h>
using namespace std;
int main(){
	struct node
	{
		int data;
		struct node *next;
	};

	/* Initialize nodes */
	struct node *head;
	struct node *one = NULL;
	struct node *two = NULL;
	struct node *three = NULL;
	struct node *t1 = NULL;
	struct node *t2 = NULL;
	struct node *t3 = NULL;
	/* Allocate memory */
	one = (node*) malloc(sizeof(struct node));
	two = (node*) malloc(sizeof(struct node));
	three = (node*) malloc(sizeof(struct node));
	/* Assign data values */
	one->data = 1; 
	two->data = 3;
	three->data= 5;
	/* Connect nodes */
	one->next = two;
	two->next = three;
	three->next = NULL;

	/* Save address of first node in head */ 
	head = one;
	t1 = (node*) malloc(sizeof(struct node));
	t1->data = 2;
	t2 = head->next; // 3

	head->next = t1;
	t1->next = t2;
        /* adding 4 */
	t1 = (node*) malloc(sizeof(struct node));
 	t1->data = 4;
 	t2 = head;
 	while(t2->data != 3){
 		t2 = t2->next;
	}
	t3 = t2->next;
	t2->next = t1;
	t1->next = t3;
    	t1 = head;

	while(t1 != NULL){
		cout << t1->data << " ";
		t1 = t1->next;
	}
//	while (head != NULL) {
//	cout << head->data <<" ";
//	head = head->next;
//	}
	printf("\n");
	return 0;
}
