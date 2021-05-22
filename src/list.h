#ifndef LIST_H
#define LIST_H
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int value;
    struct Node* next;
};

struct Node *newList(int value){
  struct Node *node= (struct Node *)malloc(sizeof(struct Node));
  node->value=value;
  node->next=NULL;
  return node;
}

void append(struct Node *head, int value)
{
  if (head->next){
    append(head->next, value);
  }
  else{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
	head->next = new_node;
    new_node->value = value;
    new_node->next = NULL;
    
  }
}
void reverseList(struct Node **head){


	struct Node *current = *head;
	struct Node *prev = NULL;
	struct Node *next = NULL;

	while(current!=NULL){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head=prev;
	
}

void printList(struct Node *node){
	printf(" %d ",node->value);
	if(node->next){
		printList(node->next);
	}
}

#endif
