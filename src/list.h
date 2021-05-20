#ifndef LIST_H
#define LIST_H
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int value;
    struct Node* next;
};
void append(struct Node *head, float value){
	if (head->next){
		append(head->next,value);
	}
	struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
	head->next=new_node;
	new_node->value=value;
}
void printList(struct Node *head){
	if(head->next){
		printList(head->next);
		printf(" %d ", head->value);
	}
	return
}
#endif
