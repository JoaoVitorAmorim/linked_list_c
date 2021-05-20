#ifndef LIST_H
#define LIST_H
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int value;
    struct Node* next;
    struct Node* previous;
};
void append(struct Node **head_ref, float new_data){
	struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
	struct Node *last = *head_ref;
	
	new_node->data = new_data;
	
	new_node->next = NULL;
	
	if (*head_ref == NULL){
		new_node->previous = NULL;
		*head_ref=new_node;
		return;
	}
	
	while (last->next != NULL){
		last = last->next;
	}
	
	last->next = new_node;
	new_node->previous = last;
	tail=new_node;
	return;
}
#endif
